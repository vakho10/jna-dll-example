#pragma once

#include "Sleeper.h"

#ifdef SLEEPDLL_EXPORTS
#define SLEEPDLL_API __declspec(dllexport)
#else
#define SLEEPDLL_API __declspec(dllimport)
#endif

extern "C" SLEEPDLL_API Sleeper* getSleeper();

extern "C" SLEEPDLL_API long long sleepForSecond(Sleeper* handle);

extern "C" SLEEPDLL_API long long sleepFor(Sleeper* handle, int seconds);

extern "C" SLEEPDLL_API void release(Sleeper* handle);

