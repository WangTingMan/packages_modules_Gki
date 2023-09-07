#pragma once

#if defined(WIN32) || defined(_MSC_VER)

#if defined(LIBKVER_EXPORTS_IMPL)
#define LIBKVER_API __declspec(dllexport)
#else
#define LIBKVER_API __declspec(dllimport)
#endif  // defined(LIBKVER_EXPORTS_IMPL)

#else  // defined(WIN32)
#if defined(LIBKVER_EXPORTS_IMPL)
#define LIBKVER_API __attribute__((visibility("default")))
#else
#define LIBKVER_API
#endif  // defined(LIBKVER_EXPORTS_IMPL)
#endif

#ifdef _WIN32
#ifdef interface
#undef interface
#endif
#endif
