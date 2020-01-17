#include "Sleeper.h"

long long Sleeper::sleepForSecond()
{
	return sleepFor(1);
}

long long Sleeper::sleepFor(int seconds)
{
	auto st = std::chrono::high_resolution_clock::now();
	std::this_thread::sleep_for(std::chrono::seconds(seconds));
	auto diff = std::chrono::high_resolution_clock::now() - st;
	auto time = std::chrono::duration_cast<std::chrono::microseconds>(diff);
	return time.count();
}

void Sleeper::release()
{
	std::cout << "Realeased resources :)" << std::endl;
}