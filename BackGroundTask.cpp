#include <thread>
module BackGroundTask;

void BGTask::BackGroundTask()
{
	// �o�b�N�O���E���h�ł��鏈��������
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