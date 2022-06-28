/*
 * Copyright 2020 NXP.
 * This software is owned or controlled by NXP and may only be used strictly in accordance with the
 * license terms that accompany it. By expressly accepting such terms or by downloading, installing,
 * activating and/or otherwise using the software, you are agreeing that you have read, and that you
 * agree to comply with and are bound by, such license terms. If you do not agree to be bound by the
 * applicable license terms, then you may not retain, install, activate or otherwise use the software.
 */

#ifndef _TRACE_CONFIG_OPTIONS_H_
#define _TRACE_CONFIG_OPTIONS_H_

/*******************************************************************************
 * Definitions
 ******************************************************************************/

/**
 * Options for TRACE_ENABLE:
 *  - TRACE_NO  - disable the tracer and the API
 *  - TRACE_YES - enable the tracer - the code will be available for the
 *                developer to use
 */
#define TRACE_NO  0
#define TRACE_YES 1

/**
 * Sync method options for TRACE_SYNC_METHOD:
 *  - TRACE_SYNC_NONE - can be used in testing the tracer's impact on the
 *                      system or when u calling all the trace API from the same
 *                      context (e.g. only from the same task, only from the
 *                      freertos scheduler, from a bare metal app with no OS);
 *  - TRACE_SYNC_CRITICAL_SECTION - is used for controlling the access to the
 *                                  buffer and other shared resources.
 */
#define TRACE_SYNC_NONE             0
#define TRACE_SYNC_CRITICAL_SECTION 1

/**
 * Recording method options for TRACE_RECORD_METHOD:
 *  - TRACE_RECORD_OLDEST - record the oldest events and discard the others when
 *                          the buffer is full;
 *  - TRACE_RECORD_NEWEST - the buffer will always keep the latest events and
 *                          will overwrite the older ones when it gets full.
 */
#define TRACE_RECORD_OLDEST 0
#define TRACE_RECORD_NEWEST 1

/**
 * Time accuracy options for TRACE_TIME_ACCURACY - the user can choose which
 * time accuracy to use, given his / her needs or the memory constraints.
 *
 * 1 record's size based on accuracy used:
 *  - TRACE_TIME_ACCURACY_NONE - 1B
 *  - TRACE_TIME_ACCURACY_S    - 3B
 *  - TRACE_TIME_ACCURACY_MS   - 5B
 *  - TRACE_TIME_ACCURACY_NS   - 7B
 */
#define TRACE_TIME_ACCURACY_NONE 0
#define TRACE_TIME_ACCURACY_S    1
#define TRACE_TIME_ACCURACY_MS   2
#define TRACE_TIME_ACCURACY_NS   3

/**
 * Time measurement tool options for TRACE_USE_TIMER - the user can choose
 * whether to use the timer defined in the tracer or a platform specific
 * function with lower accuracy.
 */
#define TRACE_TIMER_NO  0
#define TRACE_TIMER_YES 1

/**
 * Enabling / disabling context switch tracing options for TRACE_CONTEXT_SWITCH.
 *
 * The user can choose whether to trace context switch events or not.
 *
 *  - TRACE_CONTEXT_SWITCH_NO  - disable tracing context switch;
 *  - TRACE_CONTEXT_SWITCH_YES - enable tracing context switch.
 */
#define TRACE_CONTEXT_SWITCH_NO  0
#define TRACE_CONTEXT_SWITCH_YES 1

#endif /* _TRACE_CONFIG_OPTIONS_H_ */
