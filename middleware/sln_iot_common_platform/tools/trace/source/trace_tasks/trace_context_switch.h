/*
 * Copyright 2020 NXP.
 * This software is owned or controlled by NXP and may only be used strictly in accordance with the
 * license terms that accompany it. By expressly accepting such terms or by downloading, installing,
 * activating and/or otherwise using the software, you are agreeing that you have read, and that you
 * agree to comply with and are bound by, such license terms. If you do not agree to be bound by the
 * applicable license terms, then you may not retain, install, activate or otherwise use the software.
 */

#ifndef _TRACE_CONTEXT_SWITCH_H_
#define _TRACE_CONTEXT_SWITCH_H_

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

/**
 * Choose whether to profile context switch events or not.
 *
 * In trace_config.h choose an option (trace_config_options.h) for
 * TRACE_CONTEXT_SWITCH.
 */
#if TRACE_CONTEXT_SWITCH == TRACE_CONTEXT_SWITCH_YES

#include <stdint.h>

/*******************************************************************************
 * Definitions
 ******************************************************************************/

#define traceTASK_SWITCHED_IN() register_switch_event_in(pxCurrentTCB->uxTCBNumber);

#define traceTASK_SWITCHED_OUT() register_switch_event_out(pxCurrentTCB->uxTCBNumber);

/*******************************************************************************
 * API
 ******************************************************************************/

/*!
 * @brief Use platform specific tools to register task switch in events.
 *
 * On FreeRTOS, this function will be called from traceTASK_SWITCHED_IN() macro.
 * @param tid  switched task id
 */
void register_switch_event_in(uint32_t tid);

/*!
 * @brief Use platform specific tools to register task switch out events.
 *
 * On FreeRTOS, this function will be called from traceTASK_SWITCHED_OUT()
 * macro.
 * @param tid  switched task id
 */
void register_switch_event_out(uint32_t tid);

#endif /* TRACE_CONTEXT_SWITCH */

#endif /* TRACE_ENABLE */

#endif /* _TRACE_CONTEXT_SWITCH_H_ */
