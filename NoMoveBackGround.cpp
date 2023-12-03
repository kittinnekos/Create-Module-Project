#include <tuple>
#include"DxLib.h"
module NoMoveBackGround;

NoMoveBackGround::NoMoveBackGround() 
{
	Width = 0.0f;
	Height = 0.0f;
	X = 0.0f;
	Y = 0.0f;
	sizetuple = std::make_tuple(0, 0);
	postuple = std::make_tuple(0, 0);
}

void NoMoveBackGround::SetAndGetPositionBackGround(int x, int y, int width, int height) {
	//セッター
	image.SetPosition(x, y);
	image.SetSize(width, height);
}