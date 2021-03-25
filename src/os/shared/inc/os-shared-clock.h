/*
 *  NASA Docket No. GSC-18,370-1, and identified as "Operating System Abstraction Layer"
 *
 *  Copyright (c) 2019 United States Government as represented by
 *  the Administrator of the National Aeronautics and Space Administration.
 *  All Rights Reserved.
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 */

/**
 * \file
 *
 * \ingroup  shared
 * \author   joseph.p.hickey@nasa.gov
 *
 */

#ifndef OS_SHARED_CLOCK_H
#define OS_SHARED_CLOCK_H

#include "osapi-clock.h"
#include "os-shared-globaldefs.h"

/*
 * Clock API low-level handlers
 * These simply get/set the kernel RTC (if it has one)
 */

/*----------------------------------------------------------------
   Function: OS_GetLocalTime_Impl

    Purpose: Get the time from the RTC

    Returns: OS_SUCCESS on success, or relevant error code
 ------------------------------------------------------------------*/
int32 OS_GetLocalTime_Impl(OS_time_t *time_struct);

/*----------------------------------------------------------------
   Function: OS_SetLocalTime_Impl

    Purpose: Set the time in the RTC

    Returns: OS_SUCCESS on success, or relevant error code
 ------------------------------------------------------------------*/
int32 OS_SetLocalTime_Impl(const OS_time_t *time_struct);

#endif /* OS_SHARED_CLOCK_H */
