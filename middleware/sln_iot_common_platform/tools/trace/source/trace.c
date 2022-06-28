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

#include <stdbool.h>
#include <stdint.h>
#include <string.h>

#include "trace.h"
#include "trace_record.h"
#include "trace_results.h"
#include "trace_port.h"

/*******************************************************************************
 * Definitions
 ******************************************************************************/

/*! @brief enum for tracer's status */
typedef enum _trace_status
{
    kTrace_Uninitialized,
    kTrace_Recording,
    kTrace_Dumping,
} trace_status_t;

/* Delimiters for serial communication with trace interpreter. */
#define START_SEQ "<start_trace>"
#define STOP_SEQ  "<stop_trace>"

/* The maximum ID of a group is the number of bits in the mask. */
#define MAX_GROUP_ID (8U * sizeof(TRACE_EVENT_GROUPS))

/*******************************************************************************
 * Variables
 ******************************************************************************/

/**
 * Choose the memory section where to put the buffer by defining
 * TRACE_MEM_SECTION in trace_config.h.
 *
 * By default, the buffer is placed in DTC.
 */
TRACE_MEM_ATTRIBUTE static trace_record_t s_TraceBuffer[TRACE_BUFFER_SIZE];

static trace_status_t s_TraceStatus = kTrace_Uninitialized;
static uint16_t s_TraceBuffIndex    = 0;
static bool s_ExceededBuffSize      = false;

/*******************************************************************************
 * Static functions
 ******************************************************************************/

static void add_event(trace_record_t *new_event)
{
#if TRACE_RECORD_METHOD == TRACE_RECORD_NEWEST
    s_TraceBuffer[s_TraceBuffIndex] = *new_event;

    s_TraceBuffIndex++;
    if (s_TraceBuffIndex == TRACE_BUFFER_SIZE)
    {
        s_TraceBuffIndex   = 0;
        s_ExceededBuffSize = true;
    }
#elif TRACE_RECORD_METHOD == TRACE_RECORD_OLDEST
    if (s_TraceBuffIndex < TRACE_BUFFER_SIZE)
    {
        s_TraceBuffer[s_TraceBuffIndex] = *new_event;
        s_TraceBuffIndex++;
    }
    else
    {
        s_ExceededBuffSize = true;
    }
#endif /* TRACE_RECORD_METHOD */
}

/*******************************************************************************
 * Code
 ******************************************************************************/

trace_results_t TRACE_Init(void)
{
    trace_results_t ret_val = kTrace_Success;

    if (s_TraceStatus != kTrace_Uninitialized)
    {
        ret_val = kTrace_WrongState;
    }

    if (ret_val == kTrace_Success)
    {
        ret_val = sync_init();
    }

#if TRACE_TIME_ACCURACY != TRACE_TIME_ACCURACY_NONE
    if (ret_val == kTrace_Success)
    {
        ret_val = timer_init();
        if (ret_val != kTrace_Success)
        {
            sync_uninit();
        }
    }
#endif /* TRACE_TIME_ACCURACY */

    if (ret_val == kTrace_Success)
    {
        s_TraceStatus = kTrace_Recording;
    }

    return ret_val;
}

trace_results_t TRACE_Uninit(void)
{
    trace_results_t ret_val     = kTrace_Success;
    trace_results_t ret_val_aux = kTrace_Success;

    ret_val = sync_lock();
    if (ret_val == kTrace_Success)
    {
        if (s_TraceStatus != kTrace_Recording)
        {
            sync_unlock();
            ret_val = kTrace_WrongState;
        }
    }

    if (ret_val == kTrace_Success)
    {
        s_TraceStatus = kTrace_Uninitialized;
        ret_val       = sync_unlock();

        s_ExceededBuffSize = false;
        s_TraceBuffIndex   = 0;
        memset(s_TraceBuffer, 0, sizeof(s_TraceBuffer));
    }

    if (ret_val != kTrace_WrongState)
    {
        ret_val_aux = sync_uninit();
        if (ret_val == kTrace_Success)
        {
            ret_val = ret_val_aux;
        }

#if TRACE_TIME_ACCURACY != TRACE_TIME_ACCURACY_NONE
        ret_val_aux = timer_uninit();
        if (ret_val == kTrace_Success)
        {
            ret_val = ret_val_aux;
        }
#endif /* TRACE_TIME_ACCURACY */
    }

    return ret_val;
}

trace_results_t TRACE_Register(trace_event_types_t event_id, uint8_t group_id)
{
    trace_results_t ret_val  = kTrace_Success;
    trace_record_t new_event = {0};

    new_event.event_id = event_id;

#if TRACE_TIME_ACCURACY != TRACE_TIME_ACCURACY_NONE
    ret_val = timer_get(&new_event);
#endif /* TRACE_TIME_ACCURACY */

    if (ret_val == kTrace_Success)
    {
        ret_val = sync_lock();
    }

    if (ret_val == kTrace_Success)
    {
        if (s_TraceStatus != kTrace_Recording)
        {
            sync_unlock();
            ret_val = kTrace_WrongState;
        }
    }

    if (ret_val == kTrace_Success)
    {
        if (group_id >= MAX_GROUP_ID)
        {
            sync_unlock();
            ret_val = kTrace_WrongParam;
        }
    }

    if (ret_val == kTrace_Success)
    {
        if (TRACE_EVENT_GROUPS & (1 << group_id))
        {
            add_event(&new_event);
        }

        ret_val = sync_unlock();
    }

    return ret_val;
}

trace_results_t TRACE_RegisterISR(trace_event_types_t event_id, uint8_t group_id)
{
    trace_results_t ret_val  = kTrace_Success;
    trace_record_t new_event = {0};

    new_event.event_id = event_id;

#if TRACE_TIME_ACCURACY != TRACE_TIME_ACCURACY_NONE
    ret_val = timer_getISR(&new_event);
#endif /* TRACE_TIME_ACCURACY */

    if (ret_val == kTrace_Success)
    {
        ret_val = sync_lockISR();
    }

    if (ret_val == kTrace_Success)
    {
        if (s_TraceStatus != kTrace_Recording)
        {
            sync_unlockISR();
            ret_val = kTrace_WrongState;
        }
    }

    if (ret_val == kTrace_Success)
    {
        if (group_id >= MAX_GROUP_ID)
        {
            sync_unlockISR();
            ret_val = kTrace_WrongParam;
        }
    }

    if (ret_val == kTrace_Success)
    {
        if (TRACE_EVENT_GROUPS & (1 << group_id))
        {
            add_event(&new_event);
        }

        ret_val = sync_unlockISR();
    }

    return ret_val;
}

trace_results_t TRACE_Dump(void)
{
    uint16_t i;
    trace_results_t ret_val = kTrace_Success;

    ret_val = sync_lock();
    if (ret_val == kTrace_Success)
    {
        if (s_TraceStatus == kTrace_Recording)
        {
            s_TraceStatus = kTrace_Dumping;
            ret_val       = sync_unlock();
        }
        else
        {
            sync_unlock();
            ret_val = kTrace_WrongState;
        }
    }

    if (ret_val == kTrace_Success)
    {
        ret_val = serial_print_str("");
    }

    if (ret_val == kTrace_Success)
    {
        ret_val = serial_print_str(START_SEQ);
    }

#if TRACE_RECORD_METHOD == TRACE_RECORD_NEWEST
    if (ret_val == kTrace_Success)
    {
        if (s_ExceededBuffSize == true)
        {
            for (i = s_TraceBuffIndex; i < TRACE_BUFFER_SIZE; i++)
            {
                ret_val = serial_print_event(&s_TraceBuffer[i]);

                if (ret_val != kTrace_Success)
                {
                    break;
                }
            }
        }
    }
#endif /* TRACE_RECORD_METHOD */

    if (ret_val == kTrace_Success)
    {
        for (i = 0; i < s_TraceBuffIndex; i++)
        {
            ret_val = serial_print_event(&s_TraceBuffer[i]);
            if (ret_val != kTrace_Success)
            {
                break;
            }
        }
    }

    if (ret_val == kTrace_Success)
    {
        ret_val = serial_print_str(STOP_SEQ);
    }

    if (ret_val == kTrace_Success)
    {
        ret_val = serial_print_str("");
    }

    if (ret_val == kTrace_Success)
    {
        s_ExceededBuffSize = false;
        s_TraceBuffIndex   = 0;
        memset(s_TraceBuffer, 0, sizeof(s_TraceBuffer));
    }

    if (s_TraceStatus == kTrace_Dumping)
    {
        s_TraceStatus = kTrace_Recording;
    }

    return ret_val;
}

#endif /* TRACE_ENABLE */
