#include <chrono>
export module StopProcessing;

export class StopProcessing
{
public:
	std::chrono::seconds StopTime;

	StopProcessing();
	void SetStopTime(int stopTime);
	void stopProcessing();
};