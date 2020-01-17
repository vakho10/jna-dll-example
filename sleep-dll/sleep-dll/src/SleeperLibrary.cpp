#include "SleeperLibrary.h"

Sleeper* getSleeper() {
	return new Sleeper();
}

long long sleepForSecond(Sleeper* handle) {
	return handle->sleepForSecond();
}

long long sleepFor(Sleeper* handle, int seconds) {
	return handle->sleepFor(seconds);
}

void release(Sleeper* handle) {
	handle->release();
}