#include "DxLib.h"
module CollisionDrawString;

CollisionDrawString::CollisionDrawString()
{
	Decision = 3;
}

void CollisionDrawString::GetDecision(int decision)
{
	Decision = decision;
}

void CollisionDrawString::collisionDrawString()
{
	stopProcessing.SetStopTime(1);
	switch (Decision) {
	case 0:
		DrawString(320, 240, "Perfect", GetColor(255, 255, 255));
		stopProcessing.stopProcessing();
		Decision = 3;
		break;

	case 1:
		DrawString(320, 240, "OK", GetColor(255, 255, 255));
		stopProcessing.stopProcessing();
		Decision = 3;
		break;

	case 2:
		DrawString(320, 240, "Miss", GetColor(255, 255, 255));
		stopProcessing.stopProcessing();
		Decision = 3;
		break;
	default:
		break;
	}
}