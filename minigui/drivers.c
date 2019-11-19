///////////////////////////////////////////////////////////////////////////////
//
//                        IMPORTANT LEGAL NOTICE
//
// The following open source license statement does not apply to any
// entity in the Exception List published by FMSoft.
//
// For more information, please visit:
//
// https://www.fmsoft.cn/exception-list
//
//////////////////////////////////////////////////////////////////////////////
/*
** A sample DRM driver for MiniGUI 4.0.
**
** This driver is derived from Mesa.
**
** Copyright (C) 2019 FMSoft (http://www.fmsoft.cn).
**
** Copyright notice of Mesa:
**
** Copyright 2003 VMware, Inc.
** All Rights Reserved.
**
** Permission is hereby granted, free of charge, to any person obtaining a
** copy of this software and associated documentation files (the
** "Software"), to deal in the Software without restriction, including
** without limitation the rights to use, copy, modify, merge, publish,
** distribute, sub license, and/or sell copies of the Software, and to
** permit persons to whom the Software is furnished to do so, subject to
** the following conditions:
**
** The above copyright notice and this permission notice (including the
** next paragraph) shall be included in all copies or substantial portions
** of the Software.
**
** THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
** OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
** MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT.
** IN NO EVENT SHALL VMWARE AND/OR ITS SUPPLIERS BE LIABLE FOR
** ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
** TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
** SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
**
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "config.h"

#undef _DEBUG
#include <minigui/common.h>

#ifdef __TARGET_EXTERNAL__

#include <minigui/minigui.h>
#include <minigui/gdi.h>
#include <minigui/exstubs.h>

#ifdef _MGGAL_DRI

#include "drivers.h"

DriDriverOps* __dri_ex_driver_get(const char* driver_name)
{
    _MG_PRINTF("%s called with driver name: %s\n", __func__, driver_name);

    if (strcmp(driver_name, "i915") == 0) {
#ifdef HAVE_INTEL
        return _cairo_minigui_device_drm_get_i915_driver();
#endif
    }

    _MG_PRINTF("%s unknown DRM driver: %s\n", __func__, driver_name);
    return NULL;
}

#endif /* _MGGAL_DRI */

#endif /* __TARGET_EXTERNAL__ */
