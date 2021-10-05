#pragma once
#ifdef MATHBLIB_EXPORTS
#define MATHBLIB_API __declspec(dllexport)
#else
#define MATHBLIB_API __declspec(dllimport)
#endif

extern "C" MATHBLIB_API void CHfromN(int a, int b, int n);
