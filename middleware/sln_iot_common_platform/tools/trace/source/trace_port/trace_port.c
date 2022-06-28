/*
 * Copyright 2020 NXP.
 * This software is owned or controlled by NXP and may only be used strictly in accordance with the
 * license terms that accompany it. By expressly accepting such terms or by downloading, installing,
 * activating and/or otherwise using the software, you are agreeing that you have read, and that you
 * agree to comply with and are bound by, such license terms. If you do not agree to be bound by the
 * applicable license terms, then you may not retain, install, activate or otherwise use the software.
 */

/*******************************************************************************
 * Includes
 ******************************************************************************/

#include "trace_config_default.h"
#include "trace_config_options.h"

/**
 * Choose via trace_config.h (with options from trace_config_options.h) whether
 * to disable the tracer or not.
 */
#if TRACE_ENABLE == TRACE_YES

#include <stdint.h>
#include <string.h>

#include "trace_port.h"
#include "trace_record.h"
#include "trace_results.h"

#include "FreeRTOS.h"
#include "task.h"

#if TRACE_USE_TIMER == TRACE_TIMER_YES
#include "fsl_gpt.h"
#endif /* TRACE_USE_TIMER */

/*******************************************************************************
 * Definitions
 ******************************************************************************/

/* Time unit conversion */
#if TRACE_USE_TIMER == TRACE_TIMER_YES
#define NS_IN_S 1000000000U
#endif /* TRACE_USE_TIMER */

/*******************************************************************************
 * Variables
 ******************************************************************************/

#if TRACE_SYNC_METHOD == TRACE_SYNC_CRITICAL_SECTION
static UBaseType_t s_SavedInterruptStatus;
#endif /* TRACE_SYNC_METHOD */

#if TRACE_USE_TIMER == TRACE_TIMER_YES
static uint16_t s_ClockPeriod = 0;
static uint16_t s_Seconds     = 0;
#endif /* TRACE_USE_TIMER */

/*******************************************************************************
 * Code
 ******************************************************************************/

trace_results_t sync_init(void)
{
    trace_results_t status = kTrace_Success;

    return status;
}

trace_results_t sync_uninit(void)
{
    trace_results_t status = kTrace_Success;

    return status;
}

trace_results_t sync_lock(void)
{
    trace_results_t status = kTrace_Success;

#if TRACE_SYNC_METHOD == TRACE_SYNC_CRITICAL_SECTION
    taskENTER_CRITICAL();
#endif /* TRACE_SYNC_METHOD */

    return status;
}

trace_results_t sync_unlock(void)
{
    trace_results_t status = kTrace_Success;

#if TRACE_SYNC_METHOD == TRACE_SYNC_CRITICAL_SECTION
    taskEXIT_CRITICAL();
#endif /* TRACE_SYNC_METHOD */

    return status;
}

trace_results_t sync_lockISR(void)
{
    trace_results_t status = kTrace_Success;

#if TRACE_SYNC_METHOD == TRACE_SYNC_CRITICAL_SECTION
    s_SavedInterruptStatus = taskENTER_CRITICAL_FROM_ISR();
#endif /* TRACE_SYNC_METHOD */

    return status;
}

trace_results_t sync_unlockISR(void)
{
    trace_results_t status = kTrace_Success;

#if TRACE_SYNC_METHOD == TRACE_SYNC_CRITICAL_SECTION
    taskEXIT_CRITICAL_FROM_ISR(s_SavedInterruptStatus);
#endif /* TRACE_SYNC_METHOD */

    return status;
}

#if TRACE_TIME_ACCURACY != TRACE_TIME_ACCURACY_NONE

/* The IRQ handler measures the seconds and is dependent on the timer used. */
#if TRACE_USE_TIMER == TRACE_TIMER_YES
/**
 * Set TRACE_GPT_IRQ_HANDLER macro to the wanted IRQ handler via trace_config.h.
 */
void TRACE_GPT_IRQ_HANDLER(void)
{
    if (GPT_GetStatusFlags(TRACE_GPT, kGPT_OutputCompare1Flag))
    {
        s_Seconds++;

        GPT_ClearStatusFlags(TRACE_GPT, kGPT_OutputCompare1Flag);
        /* Reset timer counter. */
        GPT_StopTimer(TRACE_GPT);
        GPT_StartTimer(TRACE_GPT);
    }
}

#endif /* TRACE_USE_TIMER */

__attribute__((weak)) trace_results_t timer_init(void)
{
    trace_results_t status = kTrace_Success;

#if TRACE_USE_TIMER == TRACE_TIMER_YES
    gpt_config_t gpt;
    uint32_t clk_freq = 0;

    /* The timer is set with a 24M clock. */
    CLOCK_SetMux(kCLOCK_PerclkMux, 0);
    CLOCK_SetDiv(kCLOCK_PerclkDiv, 0);

    clk_freq      = CLOCK_GetFreq(kCLOCK_OscClk);
    s_ClockPeriod = NS_IN_S / clk_freq;

    GPT_GetDefaultConfig(&gpt);
    gpt.enableFreeRun = true;
    GPT_Init(TRACE_GPT, &gpt);

    /* The timer generates an interrupt once a second. */
    GPT_SetOutputCompareValue(TRACE_GPT, kGPT_OutputCompare_Channel1, clk_freq);

    /* Set up IRQ handler for counting seconds. */
    GPT_EnableInterrupts(TRACE_GPT, kGPT_OutputCompare1InterruptEnable);

    NVIC_SetPriority(TRACE_GPT_IRQ, configMAX_SYSCALL_INTERRUPT_PRIORITY - 1);
    EnableIRQ(TRACE_GPT_IRQ);

    GPT_StartTimer(TRACE_GPT);
#endif /* TRACE_USE_TIMER */

    return status;
}

__attribute__((weak)) trace_results_t timer_uninit(void)
{
    trace_results_t status = kTrace_Success;

#if TRACE_USE_TIMER == TRACE_TIMER_YES
    GPT_StopTimer(TRACE_GPT);
    GPT_Deinit(TRACE_GPT);

    s_ClockPeriod = 0;
    s_Seconds     = 0;
#endif /* TRACE_USE_TIMER */

    return status;
}

__attribute__((weak)) trace_results_t timer_get(trace_record_t *time_val)
{
    trace_results_t status = kTrace_Success;
    uint32_t timestamp     = 0;

    if (time_val != NULL)
    {
#if TRACE_USE_TIMER == TRACE_TIMER_NO
        /* Get total time in ms and convert it. */
        timestamp        = xTaskGetTickCount() * portTICK_PERIOD_MS;
        time_val->time_s = timestamp / 1000U;

#if TRACE_TIME_ACCURACY == TRACE_TIME_ACCURACY_MS
        time_val->time_ms = timestamp % 1000U;
#elif TRACE_TIME_ACCURACY == TRACE_TIME_ACCURACY_NS
        time_val->time_ns = timestamp % 1000U * 1000000U;
#endif /* TRACE_TIME_ACCURACY */

#else
        /* Get seconds and convert ticks to time. */
        DisableIRQ(TRACE_GPT_IRQ);

        timestamp        = GPT_GetCurrentTimerCount(TRACE_GPT) * s_ClockPeriod;
        time_val->time_s = s_Seconds;

        EnableIRQ(TRACE_GPT_IRQ);

        if (timestamp >= NS_IN_S)
        {
            timestamp = NS_IN_S - 1;
        }

#if TRACE_TIME_ACCURACY == TRACE_TIME_ACCURACY_MS
        time_val->time_ms = timestamp / 1000000U;
#elif TRACE_TIME_ACCURACY == TRACE_TIME_ACCURACY_NS
        time_val->time_ns = timestamp;
#endif /* TRACE_TIME_ACCURACY */

#endif /* TRACE_USE_TIMER */
    }
    else
    {
        status = kTrace_MemoryFailed;
    }

    return status;
}

__attribute__((weak)) trace_results_t timer_getISR(trace_record_t *time_val)
{
    trace_results_t status = kTrace_Success;
    uint32_t timestamp     = 0;

    if (time_val != NULL)
    {
#if TRACE_USE_TIMER == TRACE_TIMER_NO
        /* Get total time in ms and convert it. */
        timestamp        = xTaskGetTickCountFromISR() * portTICK_PERIOD_MS;
        time_val->time_s = timestamp / 1000U;

#if TRACE_TIME_ACCURACY == TRACE_TIME_ACCURACY_MS
        time_val->time_ms = timestamp % 1000U;
#elif TRACE_TIME_ACCURACY == TRACE_TIME_ACCURACY_NS
        time_val->time_ns = timestamp % 1000U * 1000000U;
#endif /* TRACE_TIME_ACCURACY */

#else
        /* Get seconds and convert ticks to time. */
        DisableIRQ(TRACE_GPT_IRQ);

        timestamp        = GPT_GetCurrentTimerCount(TRACE_GPT) * s_ClockPeriod;
        time_val->time_s = s_Seconds;

        EnableIRQ(TRACE_GPT_IRQ);

        if (timestamp >= NS_IN_S)
        {
            timestamp = NS_IN_S - 1;
        }

#if TRACE_TIME_ACCURACY == TRACE_TIME_ACCURACY_MS
        time_val->time_ms = timestamp / 1000000U;
#elif TRACE_TIME_ACCURACY == TRACE_TIME_ACCURACY_NS
        time_val->time_ns = timestamp;
#endif /* TRACE_TIME_ACCURACY */

#endif /* TRACE_USE_TIMER */
    }
    else
    {
        status = kTrace_MemoryFailed;
    }

    return status;
}

#endif /* TRACE_TIME_ACCURACY != TRACE_TIME_ACCURACY_NONE */

trace_results_t serial_print_event(trace_record_t *event)
{
    trace_results_t status = kTrace_Success;

    if (event != NULL)
    {
#if TRACE_TIME_ACCURACY == TRACE_TIME_ACCURACY_NONE
        TRACE_PRINTF(("<%u>\r\n", event->event_id));

#elif TRACE_TIME_ACCURACY == TRACE_TIME_ACCURACY_S
        TRACE_PRINTF(("<%u, %u>\r\n", event->event_id, event->time_s));

#elif TRACE_TIME_ACCURACY == TRACE_TIME_ACCURACY_MS
        TRACE_PRINTF(("<%u, %u, %u>\r\n", event->event_id, event->time_s, event->time_ms));

#elif TRACE_TIME_ACCURACY == TRACE_TIME_ACCURACY_NS
        TRACE_PRINTF(("<%u, %u, %u>\r\n", event->event_id, event->time_s, event->time_ns));

#endif /* TRACE_TIME_ACCURACY */
    }
    else
    {
        status = kTrace_MemoryFailed;
    }

    TRACE_PRINT_DELAY();

    return status;
}

trace_results_t serial_print_str(char *str)
{
    trace_results_t status = kTrace_Success;

    if (str != NULL)
    {
        TRACE_PRINTF(("%s\r\n", str));
    }
    else
    {
        status = kTrace_MemoryFailed;
    }

    return status;
}

#endif /* TRACE_ENABLE */
