/*
 * Copyright 2012 Red Hat, Inc.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software")
 * to deal in the software without restriction, including without limitation
 * on the rights to use, copy, modify, merge, publish, distribute, sub
 * license, and/or sell copies of the Software, and to permit persons to whom
 * them Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice (including the next
 * paragraph) shall be included in all copies or substantial portions of the
 * Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTIBILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS BE LIABLE FOR ANY CLAIM, DAMAGES, OR OTHER LIABILITY, WHETHER
 * IN AN ACTION OF CONTRACT, TORT, OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

#ifndef MGA_RANDR_H
#define MGA_RANDR_H

#include "config.h"
#include "xf86.h"
#include "xf86Crtc.h"
#include "xf86RandR12.h"

#define MGACRTCDATAPTR(p) ((MgaCrtcDataPtr) ((p)->driver_private))

extern void MGAGRestorePalette(ScrnInfoPtr pScrn, unsigned char* pntr);
extern void MGAGLoadPalette(ScrnInfoPtr, int, int*, LOCO*, VisualPtr);
extern void MGAGSavePalette(ScrnInfoPtr pScrn, unsigned char* pntr);

extern Bool MGAGCrtc1Init(ScrnInfoPtr scrn);
extern xf86OutputPtr MGAG200EOutputInit(ScrnInfoPtr scrn);

extern void MGAG200SEComputePLLParam(long lFo, int *M, int *N, int *P);
extern void MGAG200EVComputePLLParam(long lFo, int *M, int *N, int *P);
extern void MGAG200WBComputePLLParam(long lFo, int *M, int *N, int *P);
extern void MGAG200EHComputePLLParam(long lFo, int *M, int *N, int *P);
extern void MGAG200ERComputePLLParam(long lFo, int *M, int *N, int *P);
#endif
