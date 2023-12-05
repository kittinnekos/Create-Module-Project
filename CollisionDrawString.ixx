export module CollisionDrawString;
import StopProcessing;

export class CollisionDrawString
{
private:
	StopProcessing stopProcessing;
public:
	int Decision;

	CollisionDrawString();
	void GetDecision(int decision);
	void collisionDrawString();
};