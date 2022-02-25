#pragma once

#ifdef CMP_PLATFORM_WINDOWS
	#ifdef CMP_BUILD_DLL
		#define CMP_API __declspec(dllexport)
	#else
		#define CMP_API __declspec(dllimport)
	#endif
#else
	#error cmp only supports windows
#endif