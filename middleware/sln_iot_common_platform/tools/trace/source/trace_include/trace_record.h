/*
 * Copyright 2020 NXP.
 * This software is owned or controlled by NXP and may only be used strictly in accordance with the
 * license terms that accompany it. By expressly accepting such terms or by downloading, installing,
 * activating and/or otherwise using the software, you are agreeing that you have read, and that you
 * agree to comply with and are bound by, such license terms. If you do not agree to be bound by the
 * applicable license terms, then you may not retain, install, activate or otherwise use the software.
 */

#ifndef _TRACE_RECORD_H_
#define _TRACE_RECORD_H_

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

/*******************************************************************************
 * Definitions
 ******************************************************************************/

/*!
 * @brief Recorded event structure
 *
 * Its size varies with time accuracy used:
 *  - TRACE_TIME_ACCURACY_NONE - 1B
 *  - TRACE_TIME_ACCURACY_S    - 3B
 *  - TRACE_TIME_ACCURACY_MS   - 5B
 *  - TRACE_TIME_ACCURACY_NS   - 7B
 */
typedef struct __attribute__((packed, aligned(1))) _trace_record
{
    uint8_t event_id;

#if TRACE_TIME_ACCURACY != TRACE_TIME_ACCURACY_NONE
    uint16_t time_s;
#endif /* TRACE_TIME_ACCURACY */

#if TRACE_TIME_ACCURACY == TRACE_TIME_ACCURACY_MS
    uint16_t time_ms;
#elif TRACE_TIME_ACCURACY == TRACE_TIME_ACCURACY_NS
    uint32_t time_ns;
#endif /* TRACE_TIME_ACCURACY */
} trace_record_t;

#endif /* TRACE_ENABLE */

#endif /* _TRACE_RECORD_H_ */
