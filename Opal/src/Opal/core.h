#pragma once

#ifdef OP_PLATFORM_WINDOWS
#ifdef OP_BUILD_DLL
#define OPAL_API __declspec(dllexport)
#else
#define OPAL_API __declspec(dllimport)
#endif
#else
#error Opal only work on Windows.
#endif