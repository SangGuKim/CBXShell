#ifndef _STDAFX_C5E3BAAB_1D97_4C7F_AB90_2D4397D95F13_
#define _STDAFX_C5E3BAAB_1D97_4C7F_AB90_2D4397D95F13_
#pragma once

#ifndef UNICODE
#define UNICODE// UNICODE-only project
#endif

#define STRICT

#include "targetver.h"

#define _ATL_APARTMENT_THREADED

#ifndef WINVER
#   define WINVER 0x0A00        // Windows 10 이상
#endif

#ifndef _WIN32_WINNT
#   define _WIN32_WINNT 0x0A00  // Windows 10 이상의 API 지원
#endif

#ifndef _WIN32_IE
#   define _WIN32_IE 0x0A00     // IE 10.0 이상의 컴포넌트
#endif

#include <atlbase.h>
#include <atlapp.h>// WTL project

extern CComModule _Module;

#include <atlcom.h>


#endif//_STDAFX_C5E3BAAB_1D97_4C7F_AB90_2D4397D95F13_
