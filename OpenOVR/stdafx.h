// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#ifdef WIN32
    #include "targetver.h"

    #define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers
    // Windows Header Files:
    #include <windows.h>
#endif



// TODO: reference additional headers your program requires here

#define VR_API_EXPORT 1
//#include "OpenVR/openvr.h"
#include "OpenVR/interfaces/vrtypes.h"
#include "OpenVR/interfaces/vrannotation.h"
#include "custom_types.h"

#include "logging.h"

#include "Misc/xrutil.h"

#include <string>

#ifdef WIN32
    // This module's ID, from DLLMain
    extern HMODULE openovr_module_id;
#else
    // The handle returned from dlopen()
    __attribute__((constructor))
    void openovr_module_id();

    // TODO Turtle1331 figure out how to write the shared library entry point (replacement for dllmain.cpp)
#endif

#ifndef WIN32
    #include <linux/limits.h>

    typedef int errno_t;

    // Source: https://ubuntuforums.org/showthread.php?t=533304
    typedef unsigned long DWORD;
    typedef short WCHAR;
    typedef void * HANDLE;
    #define MAX_PATH PATH_MAX
    typedef unsigned char BYTE;
    typedef unsigned short WORD;
    typedef unsigned int BOOL;
#endif