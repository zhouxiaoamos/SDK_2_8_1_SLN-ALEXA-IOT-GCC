/*
 * Copyright 2020 NXP.
 * This software is owned or controlled by NXP and may only be used strictly in accordance with the
 * license terms that accompany it. By expressly accepting such terms or by downloading, installing,
 * activating and/or otherwise using the software, you are agreeing that you have read, and that you
 * agree to comply with and are bound by, such license terms. If you do not agree to be bound by the
 * applicable license terms, then you may not retain, install, activate or otherwise use the software.
 */

#ifndef _TRACE_RESULTS_H_
#define _TRACE_RESULTS_H_

/*******************************************************************************
 * Definitions
 ******************************************************************************/

/*! @brief enum for different results */
typedef enum _trace_results
{
    kTrace_Success,
    kTrace_MemoryFailed,
    kTrace_SyncFailed,
    kTrace_DumpFailed,
    kTrace_TimerError,
    kTrace_WrongState,
    kTrace_WrongParam
} trace_results_t;

#endif /* _TRACE_RESULTS_H_ */
