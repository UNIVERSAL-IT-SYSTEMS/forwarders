// Copyright (c) Microsoft Open Technologies, Inc.  All rights reserved.  
// Licensed under the BSD 2-Clause License.  
// See License.txt in the project root for license information.

// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#include "targetver.h"

#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers
// Un-#define WINUSERAPII as it normally means declspec(dllimport) but we're providing implementations instead
#undef WINUSERAPI
#define WINUSERAPI

// Windows Header Files:
#include <windows.h>



// TODO: reference additional headers your program requires here
