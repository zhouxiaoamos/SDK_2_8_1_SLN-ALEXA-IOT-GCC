/*
 * Copyright 2020 NXP.
 * This software is owned or controlled by NXP and may only be used strictly in accordance with the
 * license terms that accompany it. By expressly accepting such terms or by downloading, installing,
 * activating and/or otherwise using the software, you are agreeing that you have read, and that you
 * agree to comply with and are bound by, such license terms. If you do not agree to be bound by the
 * applicable license terms, then you may not retain, install, activate or otherwise use the software.
 */

#ifndef _TRACE_CONFIG_DEFAULT_H_
#define _TRACE_CONFIG_DEFAULT_H_

/*******************************************************************************
 * Includes
 ******************************************************************************/

/**
 * Application specific configuration options - The developer should create his
 * own config file.
 */
#include "trace_config.h"
#include "trace_config_options.h"

/*******************************************************************************
 * Definitions
 ******************************************************************************/

/**
 * Enabling / disabling the tracer should be configured via trace_config.h.
 *
 * By default, tracing is deactivated.
 */
#ifndef TRACE_ENABLE
#define TRACE_ENABLE TRACE_NO
#endif /* TRACE_ENABLE */

/**
 * Choose via trace_config.h (with options from trace_config_options.h) whether
 * to disable the tracer or not.
 */
#if TRACE_ENABLE == TRACE_YES

/**
 * Tracer's buffer size should be changed according to the user's needs.
 * One record consumes between 1 and 7 bytes of memory, depending on the time
 * accuracy, so be careful when changing the buffer's size.
 *
 * This should be defined in trace_config.h.
 */
#ifndef TRACE_BUFFER_SIZE
#define TRACE_BUFFER_SIZE 2000
#endif /* TRACE_BUFFER_SIZE */

/**
 * Choose the memory section where to put the buffer by defining
 * TRACE_MEM_SECTION in trace_config.h.
 *
 * By default, the buffer is placed in DTC.
 */
#ifndef TRACE_MEM_ATTRIBUTE
#define TRACE_MEM_ATTRIBUTE
#endif /* TRACE_MEM_SECTION */

/**
 * Choose the TRACE_SYNC_METHOD from options in trace_config_options.h.
 *
 * This should be defined in trace_config.h.
 */
#ifndef TRACE_SYNC_METHOD
#define TRACE_SYNC_METHOD TRACE_SYNC_CRITICAL_SECTION
#endif /* TRACE_SYNC_METHOD */

/**
 * Choose the TRACE_RECORD_METHOD from options in trace_config_options.h.
 *
 * This should be defined in trace_config.h.
 */
#ifndef TRACE_RECORD_METHOD
#define TRACE_RECORD_METHOD TRACE_RECORD_OLDEST
#endif /* TRACE_RECORD_METHOD */

/**
 * Choose the TRACE_TIME_ACCURACY from options in trace_config_options.h.
 *
 * This should be defined in trace_config.h.
 */
#ifndef TRACE_TIME_ACCURACY
#define TRACE_TIME_ACCURACY TRACE_TIME_ACCURACY_NS
#endif /* TRACE_TIME_ACCURACY */

#if TRACE_TIME_ACCURACY != TRACE_TIME_ACCURACY_NONE

/**
 * Choose the whether to use the timer or not by setting TRACE_USE_TIMER to one
 * if the options in trace_config_options.h.
 *
 * This should be defined in trace_config.h.
 */
#ifndef TRACE_USE_TIMER
#define TRACE_USE_TIMER TRACE_TIMER_NO
#endif /* TRACE_USE_TIMER */

#if TRACE_USE_TIMER == TRACE_TIMER_YES

/**
 * Set TRACE_GPT(_*) macros according to the GPT timer used. By default, they
 * are set to use GPT1.
 *
 * Examples for GPT1:
 * #define TRACE_GPT             GPT1
 * #define TRACE_GPT_IRQ         GPT1_IRQn
 * #define TRACE_GPT_IRQ_HANDLER GPT1_IRQHandler
 *
 * These should be defined in trace_config.h.
 */
#if !defined(TRACE_GPT) || !defined(TRACE_GPT_IRQ) || !defined(TRACE_GPT_IRQ_HANDLER)
#error Please define the timer used in a configuration file!
#endif /* !defined( TRACE_GPT(_*) ) */

#endif /* TRACE_USE_TIMER */

#endif /* TRACE_TIME_ACCURACY */

/**
 * Set TRACE_PRINTF to the print function / macro used.
 *
 * Examples:
 * #define TRACE_PRINTF( x ) configPRINTF( x )   - used with a macro
 * #define TRACE_PRINTF( x ) vLoggingPrintf x    - used with a function
 *
 * This must be defined in trace_config.h.
 */
#ifndef TRACE_PRINTF
#error Please define the print function used in a configuration file!
#endif /* TRACE_PRINTF */

/**
 * Provide a delay mechanism (if needed) between record prints in order to avoid
 * congestion.
 * Such mechanism could be useful when printing is handled by a lower priority
 * task which uses a queue.
 *
 * By default, this is set to a delay of 1 tick.
 *
 * This should be set in trace_config.h.
 */
#ifndef TRACE_PRINT_DELAY
#define TRACE_PRINT_DELAY() vTaskDelay(1)
#endif /* TRACE_PRINT_DELAY */

/**
 * User defined groups (there are maximum 32 supported groups)
 * Choose which groups of events to record so that there is not a necessity to
 * remove all TRACE_Register calls.
 *
 * Define TRACE_EVENT_GROUPS as a bitmask in trace_config.h.
 * TRACE_EVENT_GROUPS(i) is set => group i is recorded
 * e.g.: TRACE_EVENT_GROUPS is 0b0001010 => only groups 1 and 3 are registered
 *
 * Group 0 is reserved for context switch component.
 *
 * TRACE_Register(event_id, i) call is recorded if group i is recorded;
 *                                  is not recorded, otherwise.
 *
 * By default, every group is traced.
 */
#ifndef TRACE_EVENT_GROUPS
#include <stdint.h>
#define TRACE_EVENT_GROUPS UINT32_MAX
#endif /* TRACE_EVENT_GROUPS */

/**
 * Choose whether to profile context switch events or not.
 * Set TRACE_CONTEXT_SWITCH to one of the options from trace_config_options.h.
 *
 * By default, tracing these events is deactivated.
 */
#ifndef TRACE_CONTEXT_SWITCH
#define TRACE_CONTEXT_SWITCH TRACE_CONTEXT_SWITCH_NO
#endif /* TRACE_CONTEXT_SWITCH */

#if TRACE_CONTEXT_SWITCH == TRACE_CONTEXT_SWITCH_YES

#ifndef TRACE_PROFILED_TASKS
#define TRACE_PROFILED_TASKS 0
#endif /* TRACE_PROFILED_TASKS */

#ifndef TRACE_DISCARDED_TASKS
#define TRACE_DISCARDED_TASKS 0
#endif /* TRACE_DISCARDED_TASKS */

#endif /* TRACE_CONTEXT_SWITCH */

/**
 * Set MAX_EVENT_PAIR_ID to the maximum number of paired events.
 *
 * This should be defined in trace_config.h.
 */
#ifndef MAX_EVENT_PAIR_ID
#define MAX_EVENT_PAIR_ID 128
#endif /* MAX_EVENT_PAIR_ID */

/**
 * Set MAX_EVENT_ID to the maximum number of events.
 *
 * This should be defined in trace_config.h.
 */
#ifndef MAX_EVENT_ID
#define MAX_EVENT_ID 255
#endif /* MAX_EVENT_ID */

/**
 * The number of paired events should be lower than the total number of events.
 */
#if MAX_EVENT_PAIR_ID >= MAX_EVENT_ID
#error MAX_EVENT_PAIR_ID should be lower than MAX_EVENT_ID
#endif /* MAX_EVENT_PAIR_ID >= MAX_EVENT_ID */

#endif /* TRACE_ENABLE */

/**
 * The enum must be defined in trace_config.h and should contain, in order, the
 * definitions of paired events, the pair events delimiter, then single events
 * and the max id delimiter.
 *
 * For example:
 * enum _trace_event_types
 * {
 *  kTrace_EventExamplePair1Start,
 *  kTrace_EventExamplePair1Stop,
 *  kTrace_EventExamplePair2ISRStart,
 *  kTrace_EventExamplePair2ISRStop,
 *  kTrace_EventTask1Start,
 *  kTrace_EventTask1Stop,

 *  kTrace_EventPairStop         = MAX_EVENT_PAIR_ID,

 *  kTrace_EventExampleSingle1,
 *  kTrace_EventExampleSingle2ISR,

 *  kTrace_EventEnd              = MAX_EVENT_ID
 * };
 *
 * The kTrace_EventPairStop delimiter is mandatory and it must be equal to
 * MAX_EVENT_PAIR_ID.
 *
 * The kTrace_EventEnd delimiter is mandatory and it must be equal to
 * MAX_EVENT_ID.
 */
enum _trace_event_types;

typedef enum _trace_event_types trace_event_types_t;

#endif /* _TRACE_CONFIG_DEFAULT_H_ */
