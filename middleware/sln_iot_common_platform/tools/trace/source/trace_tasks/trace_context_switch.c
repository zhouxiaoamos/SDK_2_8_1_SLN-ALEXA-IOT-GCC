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

#include "trace.h"
#include "trace_context_switch.h"

/**
 * Choose whether to profile context switch events or not.
 *
 * In trace_config.h choose an option (trace_config_options.h) for
 * TRACE_CONTEXT_SWITCH.
 */
#if TRACE_CONTEXT_SWITCH == TRACE_CONTEXT_SWITCH_YES

/*******************************************************************************
 * Variables
 ******************************************************************************/

/**
 * Example events:
 *  - kTrace_EventTask1Start
 *  - kTrace_EventTask1Stop
 *  - kTrace_EventTask2Start
 *  - kTrace_EventTask2Stop
 *  - kTrace_EventTask3Start
 *  - kTrace_EventTask3Stop
 *  - kTrace_EventTask4Start
 *  - kTrace_EventTask4Stop
 *
 * Event start = 2 * task id
 * Event stop  = 2 * task id + 1
 *
 * For the events, there are different manipulation options:
 *  - TRACE   - do not ignore the event and record them;
 *  - DISCARD - completely ignore the events associated with chosen task ids;
 *  - MELD    - ignore the events associated with chosen task ids, but
 *              concatenate them with the previous ones;
 *            - if an event is not traced or discarded, then it is melded.
 *
 * e.g. Let's assume the events are represented as event(start_time, stop_time)
 *      and that the sequence does not change:
 *  - TRACE x,y,z           - x(t1, t2) y(t2, t3) x(t3, t4) z(t4, t5) x(t5, t6)
 *  - TRACE x, z  MELD y    - x(t1, t4) z(t4, t5) x(t5, t6)
 *  - TRACE x, z  DISCARD y - x(t1, t2) x(t3, t4) z(t4, t5) x(t5, t6)
 *  - DISCARD x, y, z       - NaN
 *  - MELD x, y, z          - NaN
 *  - TRACE x, MELD y, z    - x(t1, t6)
 *  - TRACE x, DISCARD y, z - x(t1, t2) x(t3, t4) x(t5, t6)
 *
 * t6 (the last stop event) will never be recorded.
 */

/* s_LastStopTid is initialized to an invalid tid. */
static uint32_t s_LastStopTid = UINT32_MAX;

/**
 * This bitmask contains traced tasks' tids, i.e. s_ProfiledTasks(i) is set,
 * task i is profiled.
 *
 * The events are encoded by the rule task_start_event = 2 * task_id, so
 * tid = task_start_event / 2.
 *
 * The bitmask should be set via TRACE_PROFILED_TASK macro in trace_config.h.
 */
static uint32_t s_ProfiledTasks = TRACE_PROFILED_TASKS;

/**
 * This bitmask contains completely ignored tasks' tids, i.e.
 * s_DiscardedTasks(i) is set, task i is not profiled and is discarded.
 *
 * The events are encoded by the rule task_start_event = 2 * task_id, so
 * tid = task_start_event / 2.
 *
 * The bitmask should be set via TRACE_DISCARDED_TASKS macro in trace_config.h.
 */
static uint32_t s_DiscardedTasks = TRACE_DISCARDED_TASKS;

/*******************************************************************************
 * Code
 ******************************************************************************/

void register_switch_event_in(uint32_t tid)
{
    if ((s_ProfiledTasks & (1 << tid)) && (s_LastStopTid != tid))
    {
        if (s_LastStopTid != UINT32_MAX)
        {
            /* Register last unmelded / unignored task stop event. */
            TRACE_Register(2 * s_LastStopTid + 1, 0);
        }

        /* Register current task start event. */
        TRACE_Register(2 * tid, 0);
    }
    else if (s_DiscardedTasks & (1 << tid))
    {
        if (s_LastStopTid != UINT32_MAX)
        {
            /* Register last unmelded / unignored task stop event. */
            TRACE_Register(2 * s_LastStopTid + 1, 0);
            /* Reset the last stop id when ignoring the current event. */
            s_LastStopTid = UINT32_MAX;
        }
    }
}

void register_switch_event_out(uint32_t tid)
{
    /* Register only stop events of tasks that are not melded / discarded. */
    if (s_ProfiledTasks & (1 << tid))
    {
        s_LastStopTid = tid;
    }
}

#endif /* TRACE_CONTEXT_SWITCH */

#endif /* TRACE_ENABLE */
