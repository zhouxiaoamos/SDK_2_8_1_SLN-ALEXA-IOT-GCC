/*
 * Copyright 2018, 2021 NXP.
 * This software is owned or controlled by NXP and may only be used strictly in accordance with the
 * license terms that accompany it. By expressly accepting such terms or by downloading, installing,
 * activating and/or otherwise using the software, you are agreeing that you have read, and that you
 * agree to comply with and are bound by, such license terms. If you do not agree to be bound by the
 * applicable license terms, then you may not retain, install, activate or otherwise use the software.
 */

#include "audio_processing_task.h"

/* FreeRTOS kernel includes. */
#include "FreeRTOS.h"
#include "board.h"
#include "event_groups.h"
#include "limits.h"
#include "queue.h"
#include "semphr.h"
#include "task.h"

/* Freescale includes. */
#include "fsl_sai.h"
#include "fsl_sai_edma.h"
#include "pdm_pcm_definitions.h"

#if defined(SLN_AFE_LIB)
#include "sln_dsp_toolbox.h"
#include "sln_afe.h"
#else
#define SLN_Voice
#include "sln_intelligence_toolbox.h"
#endif

extern uint32_t SLN_AMAZON_WAKE_Initialize();
extern void SLN_AMAZON_WAKE_SetWakeupDetectedParams(uint8_t *pu8Wake, uint16_t *pu16WWLen);
extern uint32_t SLN_AMAZON_WAKE_ProcessWakeWord(int16_t *pi16AudioBuff, uint16_t u16BufferSize);

/*******************************************************************************
 * Definitions
 ******************************************************************************/
#define RUN_GENERATED_TEST (0U)
#define BUFFER_SIZE        (PCM_SAMPLE_COUNT * 3)
#define BUFFER_NUM         (4)

#define AUDIO_QUEUE_NUM_ITEMS      75U
#define AUDIO_QUEUE_WATERMARK      15U
#define AUDIO_QUEUE_ITEM_LEN_BYTES (PCM_SAMPLE_SIZE_BYTES * PCM_SINGLE_CH_SMPL_COUNT)
#define AUDIO_QUEUE_WTRMRK_BYTES   (AUDIO_QUEUE_WATERMARK * AUDIO_QUEUE_ITEM_LEN_BYTES)
#define AUDIO_QUEUE_LENGTH_BYTES   (AUDIO_QUEUE_NUM_ITEMS * AUDIO_QUEUE_ITEM_LEN_BYTES)
/*******************************************************************************
 * Global Vars
 ******************************************************************************/

static TaskHandle_t s_appTask;

static SemaphoreHandle_t s_pushCtr;

#if defined(SLN_AFE_LIB)
static uint8_t *s_afe_mem_pool;
static uint8_t s_afeAudioOut[PCM_SINGLE_CH_SMPL_COUNT * PCM_SAMPLE_SIZE_BYTES] __attribute__((aligned(4)));
#endif

#if PDM_MIC_COUNT == 2
SDK_ALIGN(uint8_t __attribute__((section(".ocram_cacheable_data"))) g_w8ExternallyAllocatedMem[AFE_MEM_SIZE_2MICS], 8);
#elif PDM_MIC_COUNT == 3
SDK_ALIGN(uint8_t __attribute__((section(".ocram_cacheable_data"))) g_w8ExternallyAllocatedMem[AFE_MEM_SIZE_3MICS], 8);
#elif
#error "Unsupported microphones count"
#endif

static TaskHandle_t s_thisTaskHandle = NULL;
static pcmPingPong_t *s_micInputStream;
static int16_t *s_ampInputStream;
static uint32_t s_numItems    = 0;
static uint32_t s_waterMark   = 0;
static uint32_t s_outputIndex = 0;

uint8_t *cloud_buffer;
uint32_t cloud_buffer_len = 0;
/*******************************************************************************
 * Prototypes
 ******************************************************************************/

/*******************************************************************************
 * Code
 ******************************************************************************/

/* Amazon WW libraries call strnlen, which is not defined for REDLIB */
#ifdef __REDLIB__
size_t strnlen(const char *ptr, size_t max)
{
    char *p = (char *)ptr;

    while (max && *p)
    {
        p++;
        max--;
    }

    return (size_t)(p - ptr);
}
#endif

/*! @brief Called to reset the index's to ensure old mic data isn't resent. */
static void audio_processing_reset_mic_capture_buffers()
{
    s_numItems    = 0;
    s_waterMark   = 0;
    s_outputIndex = 0;
}

void audio_processing_set_app_task_handle(TaskHandle_t *handle)
{
    if ((NULL != handle) && (NULL != *handle))
    {
        s_appTask = *handle;
    }
}

void audio_processing_set_task_handle(TaskHandle_t *handle)
{
    s_thisTaskHandle = *handle;
}

TaskHandle_t audio_processing_get_task_handle(void)
{
    return s_thisTaskHandle;
}

void audio_processing_set_mic_input_buffer(int16_t **buf)
{
    if ((NULL != buf) && (NULL != *buf))
    {
        s_micInputStream = (pcmPingPong_t *)(*buf);
    }
}

void audio_processing_set_amp_input_buffer(int16_t **buf)
{
    if ((NULL != buf) && (NULL != *buf))
    {
        s_ampInputStream = (int16_t *)(*buf);
    }
}

void audio_processing_task(void *pvParameters)
{
    uint8_t pingPongIdx     = 0;
    uint8_t *cleanAudioBuff = NULL;
    int32_t status          = 0;
    uint8_t pingPongAmpIdx  = 0;

    uint32_t taskNotification = 0U;
    uint32_t currentEvent     = 0U;

    uint8_t wakeWordActive = 0U;
    uint16_t wwLen         = 0;
    sln_afe_configuration_params_t afeConfig;

    s_pushCtr = xSemaphoreCreateCounting(2, 0);

#if !defined(SLN_AFE_LIB)
    uint32_t reqSize = SLN_Voice_Req_Mem_Size();

    assert(sizeof(g_w8ExternallyAllocatedMem) >= reqSize);
#endif

    /* Make sure we memset the buffer to zero */
    audio_processing_reset_mic_capture_buffers();

#if defined(SLN_AFE_LIB)
    afeConfig.postProcessedGain = 0x0600;
    afeConfig.numberOfMics      = PDM_MIC_COUNT;
    afeConfig.afeMemBlock       = g_w8ExternallyAllocatedMem;
    afeConfig.afeMemBlockSize   = sizeof(g_w8ExternallyAllocatedMem);

    cleanAudioBuff = &s_afeAudioOut[0];

    status = SLN_AFE_Init(&s_afe_mem_pool, pvPortMalloc, &afeConfig);

    if (status != kAfeSuccess)
#else
    afeConfig.u16PostProcessedGain = 0x0600;
    afeConfig.u8NumberOfMics       = PDM_MIC_COUNT;

    status = SLN_Voice_Init(g_w8ExternallyAllocatedMem, &afeConfig);

    if (status != 1)
#endif
    {
        // Should not get here, should output some error
        // while(1);
    }

    SLN_AMAZON_WAKE_Initialize();
    SLN_AMAZON_WAKE_SetWakeupDetectedParams(&wakeWordActive, &wwLen);

    while (1)
    {
        // Suspend waiting to be activated when receiving PDM mic data after Decimation
        xTaskNotifyWait(0U, ULONG_MAX, &taskNotification, portMAX_DELAY);

        // Figure out if it's a PING or PONG buffer received
        if (taskNotification & (1U << PCM_PING))
        {
            pingPongIdx    = 1U;
            pingPongAmpIdx = 1U;
            currentEvent   = (1U << PCM_PING);
        }

        if (taskNotification & (1U << PCM_PONG))
        {
            pingPongIdx    = 0U;
            pingPongAmpIdx = 0U;
            currentEvent   = (1U << PCM_PONG);
        }

        // Process microphone streams
        int16_t *pcmIn = (int16_t *)((*s_micInputStream)[pingPongIdx]);
#if defined(SLN_AFE_LIB)
        SLN_AFE_Process_Audio(&s_afe_mem_pool, pcmIn, &s_ampInputStream[pingPongAmpIdx * PCM_SINGLE_CH_SMPL_COUNT],
                              cleanAudioBuff);

        SLN_AMAZON_WAKE_ProcessWakeWord(cleanAudioBuff, 320);
#else
        SLN_Voice_Process_Audio(g_w8ExternallyAllocatedMem, pcmIn,
                                &s_ampInputStream[pingPongAmpIdx * PCM_SINGLE_CH_SMPL_COUNT], &cleanAudioBuff, NULL,
                                NULL);
        SLN_AMAZON_WAKE_ProcessWakeWord((int16_t *)cleanAudioBuff, 320);
#endif
        taskNotification &= ~currentEvent;

        if (wakeWordActive)
        {
            wakeWordActive = 0U;

            // Notify App Task Wake Word Detected
            xTaskNotify(s_appTask, kWakeWordDetected, eSetBits);
        }
    }
}
