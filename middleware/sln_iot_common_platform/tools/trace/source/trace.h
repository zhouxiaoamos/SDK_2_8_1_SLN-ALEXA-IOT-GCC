/*
 * Copyright 2020 NXP.
 * This software is owned or controlled by NXP and may only be used strictly in accordance with the
 * license terms that accompany it. By expressly accepting such terms or by downloading, installing,
 * activating and/or otherwise using the software, you are agreeing that you have read, and that you
 * agree to comply with and are bound by, such license terms. If you do not agree to be bound by the
 * applicable license terms, then you may not retain, install, activate or otherwise use the software.
 */

#ifndef _TRACE_H_
#define _TRACE_H_

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/*******************************************************************************
 * Includes
 ******************************************************************************/

#include <stdint.h>

#include "trace_config_default.h"
#include "trace_config_options.h"
#include "trace_results.h"

/**
 * Choose via trace_config.h (with options from trace_config_options.h) whether
 * to disable the tracer or not.
 */
#if TRACE_ENABLE == TRACE_YES

/*******************************************************************************
 * API
 ******************************************************************************/

/*!
 * @brief Starts the profiler.
 *
 * Initializes the (circular) buffer, the timer, if necessary, and the
 * synchronization elements and returns the status of the operation.
 * This function should be called before any other trace call. Calling other
 * functions before init can result in unpredictable behaviour.
 * The configurations of the resources used are chosen via trace_config.h.
 *
 * @retval Returns kTrace_Success in case of success or error code otherwise
 */
trace_results_t TRACE_Init(void);

/*!
 * @brief Stops the profiler.
 *
 * Uninitializes the profiler and releases all resources.
 * Returns the status of the operation.
 * This function should be called after any other trace call. Calling other
 * functions except TRACE_Init after uninit can result in unpredictable
 * behaviour.
 *
 * @retval Returns kTrace_Success in case of success or error code otherwise
 */
trace_results_t TRACE_Uninit(void);

/*!
 * @brief Profiles the given event
 *
 * Collects necessary data for the event given by parameter, stores it into a
 * (circular) buffer and returns the status of the operation.
 * This function can register the latest events, discarding the old ones, or it
 * can store the first events that occured, discrding the rest after the buffer
 * is full. The necessary configuration is made via trace_config.h.
 *
 * Each register call can be assigned to a group and the user can choose which
 * groups to record or ignore, without deleting the TRACE_Register calls.
 *
 * This function works only for task context and should NOT be called from an
 * interrupt handler.
 * For ISR context use TRACE_RegisterISR.
 *
 * @param event_id ID for given event
 * @param group_id user defined group ID, which should be lower than 32
 * @retval Returns kTrace_Success in case of success or error code otherwise
 */
trace_results_t TRACE_Register(trace_event_types_t event_id, uint8_t group_id);

/*!
 * @brief Profiles the given event
 *
 * Collects necessary data for the event given by parameter, stores it into a
 * (circular) buffer and returns the status of the operation.
 * This function can register the latest events, discarding the old ones, or it
 * can store the first events that occured, discrding the rest after the buffer
 * is full. The necessary configuration is made via trace_config.h.
 *
 * Each register call can be assigned to a group and the user can choose which
 * groups to record or ignore, without deleting the TRACE_Register calls.
 *
 * This function works only for interrupts context and should NOT be called from
 * a task context.
 * For task context use TRACE_Register.
 *
 * @param event_id ID for given event
 * @param group_id user defined group ID, which should be lower than 32
 * @retval Returns kTrace_Success in case of success or error code otherwise
 */
trace_results_t TRACE_RegisterISR(trace_event_types_t event_id, uint8_t group_id);

/*!
 * @brief Dumps the data to the interpreter.
 *
 * Sends the buffer to the interpreter over serial communication and returns
 * the status of the operation.
 * TRACE_Dump is a blocking function, so the task calling TRACE_Dump will block
 * until all the records are printed. Recording new events during dumping
 * will be unavailable (will fail).
 *
 * @retval Returns kTrace_Success in case of success or error code otherwise
 */
trace_results_t TRACE_Dump(void);

#else

inline trace_results_t TRACE_Init(void)
{
    return kTrace_Success;
}

inline trace_results_t TRACE_Uninit(void)
{
    return kTrace_Success;
}

inline trace_results_t TRACE_Register(trace_event_types_t event_id, uint8_t group_id)
{
    return kTrace_Success;
}

inline trace_results_t TRACE_RegisterISR(trace_event_types_t event_id, uint8_t group_id)
{
    return kTrace_Success;
}

inline trace_results_t TRACE_Dump(void)
{
    return kTrace_Success;
}

#endif /* TRACE_ENABLE */

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* _TRACE_H_ */
