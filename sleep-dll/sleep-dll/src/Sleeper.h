#pragma once

#include <iostream>
#include <chrono>
#include <thread>

class Sleeper
{
public:
	long long sleepForSecond();
	long long sleepFor(int seconds);
	void release();
};	