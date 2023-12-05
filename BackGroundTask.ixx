#include <thread>
export module BackGroundTask;
import CollisionDrawString;

export class BGTask
{
public:
	std::thread bgThread;
	CollisionDrawString collisionDrawString;

	void BackGroundTask();
	void StartBGTask();
	void EndBGTask();
};