#include <chrono>
#include <thread>
module StopProcessing;

StopProcessing::StopProcessing()
{
	StopTime = std::chrono::seconds(0);
}

void StopProcessing::SetStopTime(int stopTime)
{
	StopTime = std::chrono::seconds(stopTime);
}

void StopProcessing::stopProcessing()
{
	std::this_thread::sleep_for(StopTime);
}