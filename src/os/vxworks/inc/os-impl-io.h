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
 * \file     os-impl-io.h
 * \ingroup  vxworks
 * \author   joseph.p.hickey@nasa.gov
 *
 */

#ifndef OS_IMPL_IO_H
#define OS_IMPL_IO_H

#include "osconfig.h"
#include "common_types.h"
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>

typedef struct
{
    int  fd;
    bool selectable;
} OS_impl_file_internal_record_t;

/*
 * The global file handle table.
 *
 * This table is shared across multiple units (files, sockets, etc) and they will share
 * the same file handle table from the basic file I/O.
 */
extern OS_impl_file_internal_record_t OS_impl_filehandle_table[OS_MAX_NUM_OPEN_FILES];

/*
 * VxWorks needs to cast the argument to "write()" to avoid a warning.
 * This can be turned off in a future version if the vendor fixes the
 * prototype to be standards-compliant
 */
#define GENERIC_IO_CONST_DATA_CAST (void *)

#endif  /* OS_IMPL_IO_H  */
