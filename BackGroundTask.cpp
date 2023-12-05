#include <thread>
module BackGroundTask;

void BGTask::BackGroundTask()
{
	// バックグラウンドでする処理を書く
	collisionDrawString.collisionDrawString();
}

void BGTask::StartBGTask()
{
	bgThread = std::thread(&BGTask::BackGroundTask, this);
}

void BGTask::EndBGTask()
{
	bgThread.join();
}