#ifndef _STDAFX_2AA16305_D8E3_4296_9A26_5407C9BF9DEC_
#define _STDAFX_2AA16305_D8E3_4296_9A26_5407C9BF9DEC_
#pragma once

#ifndef UNICODE
#define UNICODE// UNICODE-only project
#endif

//runs on min win2k
#ifdef WINVER
#   define WINVER 0x0A00        // Windows 10 이상
#endif

#ifndef _WIN32_WINNT
#   define _WIN32_WINNT 0x0A00  // Windows 10 이상의 API 지원
#endif

#ifndef _WIN32_IE
#   define _WIN32_IE 0x0A00     // IE 10.0 이상의 컴포넌트
#endif


//#define _WTL_SUPPORT_SDK_ATL3
#pragma comment(linker, "/NODEFAULTLIB:atlthunk.lib")


#include <atlbase.h>
#include <atlstdthunk.h>


  namespace ATL
  {
	inline void * __stdcall __AllocStdCallThunk()
	{
		return ::VirtualAlloc(0, sizeof(_stdcallthunk), MEM_COMMIT | MEM_RESERVE, PAGE_EXECUTE_READWRITE);
	}

	inline void __stdcall __FreeStdCallThunk(void *p)
	{
		if (p!=NULL) ::VirtualFree(p, 0, MEM_RELEASE);
	}
  };


#ifndef WINVER
#   define WINVER 0x0A00        // Windows 10 이상
#endif

#ifndef _WIN32_WINNT
#   define _WIN32_WINNT 0x0A00  // Windows 10 이상의 API 지원
#endif

#ifndef _WIN32_IE
#   define _WIN32_IE 0x0A00     // IE 10.0 이상의 컴포넌트
#endif

#include <atlapp.h>

extern CAppModule _Module;

#include <atlwin.h>

#include <atlframe.h>
#include <atlctrls.h>
#include <atldlgs.h>
#include <Windowsx.h>


#if defined _M_IX86
  #pragma comment(linker, "/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='x86' publicKeyToken='6595b64144ccf1df' language='*'\"")
#elif defined _M_IA64
  #pragma comment(linker, "/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='ia64' publicKeyToken='6595b64144ccf1df' language='*'\"")
#elif defined _M_X64
  #pragma comment(linker, "/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='amd64' publicKeyToken='6595b64144ccf1df' language='*'\"")
#else
  #pragma comment(linker, "/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='*' publicKeyToken='6595b64144ccf1df' language='*'\"")
#endif

#endif//_STDAFX_2AA16305_D8E3_4296_9A26_5407C9BF9DEC_
