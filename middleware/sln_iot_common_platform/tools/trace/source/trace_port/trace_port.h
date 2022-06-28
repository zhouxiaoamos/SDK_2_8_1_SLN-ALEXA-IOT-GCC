/*
 * Copyright 2020 NXP.
 * This software is owned or controlled by NXP and may only be used strictly in accordance with the
 * license terms that accompany it. By expressly accepting such terms or by downloading, installing,
 * activating and/or otherwise using the software, you are agreeing that you have read, and that you
 * agree to comply with and are bound by, such license terms. If you do not agree to be bound by the
 * applicable license terms, then you may not retain, install, activate or otherwise use the software.
 */

#ifndef _TRACE_PORT_H_
#define _TRACE_PORT_H_

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

#include "trace_record.h"
#include "trace_results.h"

/*******************************************************************************
 * API
 ******************************************************************************/

/*!
 * @brief Initialize synchronization element
 *
 * Initialize synchronization primitives needed for profiling.
 *
 * @return kTrace_Success,  in case of success
 *         error code,      otherwise
 */
trace_results_t sync_init(void);

/*!
 * @brief Unitialize synchronization element
 *
 * This should be the last step, after every resource has released the
 * synchronization element.
 *
 * Release all resources used.
 *
 * @return kTrace_Success,  in case of success
 *         error code,      otherwise
 */
trace_results_t sync_uninit(void);

/*!
 * @brief Start exclusive access
 *
 * @return kTrace_Success,  in case of success
 *         error code,      otherwise
 */
trace_results_t sync_lock(void);

/*!
 * @brief Stop exclusive access
 *
 * @return kTrace_Success,  in case of success
 *         error code,      otherwise
 */
trace_results_t sync_unlock(void);

/*!
 * @brief Start exclusive access from an ISR
 *
 * @return kTrace_Success,  in case of success
 *         error code,      otherwise
 */
trace_results_t sync_lockISR(void);

/*!
 * @brief Stop exclusive access from an ISR
 *
 * @return kTrace_Success,  in case of success
 *         error code,      otherwise
 */
trace_results_t sync_unlockISR(void);

#if TRACE_TIME_ACCURACY != TRACE_TIME_ACCURACY_NONE

/*!
 * @brief Initialize the timer
 *
 * Can be used unless TRACE_TIME_ACCURACY is set to TRACE_TIME_ACCURACY_NONE.
 * This function is weak, rewrite it if changin the timer.
 *
 * @return kTrace_Success,  in case of success
 *         error code,      otherwise
 */
trace_results_t timer_init(void);

/*!
 * @brief Uninitialize the timer
 *
 * Can be used unless TRACE_TIME_ACCURACY is set to TRACE_TIME_ACCURACY_NONE.
 * This function is weak, rewrite it if changin the timer.
 *
 * @return kTrace_Success,  in case of success
 *         error code,      otherwise
 */
trace_results_t timer_uninit(void);

/*!
 * @brief Get current time/ticks from the timer
 *
 * Can be used unless TRACE_TIME_ACCURACY is set to TRACE_TIME_ACCURACY_NONE.
 * This function is weak, rewrite it if changin the timer.
 *
 * @param time_val pointer to an event struct
 * @return kTrace_Success,  in case of success
 *         error code,      otherwise
 */
trace_results_t timer_get(trace_record_t *time_val);

/*!
 * @brief Get current time/ticks from the timer from an ISR
 *
 * Can be used unless TRACE_TIME_ACCURACY is set to TRACE_TIME_ACCURACY_NONE.
 * This function is weak, rewrite it if changin the timer.
 *
 * @param time_val pointer to an event struct
 * @return kTrace_Success,  in case of success
 *         error code,      otherwise
 */
trace_results_t timer_getISR(trace_record_t *time_val);

#endif /* TRACE_TIME_ACCURACY */

/*!
 * @brief Use platform specific tools to dump an event data to the serial
 * interface.
 *
 * @param event pointer to a trace_record_t entry
 * @return kTrace_Success,  in case of success
 *         error code,      otherwise
 */
trace_results_t serial_print_event(trace_record_t *event);

/*!
 * @brief Use platform specific tools to print a string to the serial interface.
 *
 * @param str pointer to a string
 * @return kTrace_Success,  in case of success
 *         error code,      otherwise
 */
trace_results_t serial_print_str(char *str);

#endif /* TRACE_ENABLE */

#endif /* _TRACE_PORT_H_ */
