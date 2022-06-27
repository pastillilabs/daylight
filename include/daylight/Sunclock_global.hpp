#ifndef DAYLIGHT_SUNCLOCK_GLOBAL_HPP
#define DAYLIGHT_SUNCLOCK_GLOBAL_HPP

#if defined(_MSC_VER) || defined(WIN64) || defined(_WIN64) || defined(__WIN64__) || defined(WIN32) || defined(_WIN32) || defined(__WIN32__) || defined(__NT__)
#define DAYLIGHT_DECL_EXPORT __declspec(dllexport)
#define DAYLIGHT_DECL_IMPORT __declspec(dllimport)
#else
#define DAYLIGHT_DECL_EXPORT __attribute__((visibility("default")))
#define DAYLIGHT_DECL_IMPORT __attribute__((visibility("default")))
#endif

#if defined(DAYLIGHT_LIBRARY)
#define DAYLIGHT_EXPORT DAYLIGHT_DECL_EXPORT
#else
#define DAYLIGHT_EXPORT DAYLIGHT_DECL_IMPORT
#endif

#endif // DAYLIGHT_SUNCLOCK_GLOBAL_HPP
