#include "DxLib.h"
#include <tuple>
module LengthScrollBG;

LengthScrollBG::LengthScrollBG()
{
	Width = 0.0f;
	Height = 0.0f;
	X = 0.0f;
	Y = 0.0f;
	Handle = 0;
	MoveSpeed = 0.0f;
}

void LengthScrollBG::SetAndGetPosLengthScrollBG(float x, float y, float width, float height)
{
	//セッター
	image.SetPosition(x, y);
	image.SetSize(width, height);

	//ゲッター
	sizetuple = image.GetSize();
	postuple = image.GetPosition();
	Width = get<0>(sizetuple);
	Height = get<1>(sizetuple);
	X = get<0>(postuple);
	Y = get<1>(postuple);
}

void LengthScrollBG::LoadLengthScrollBG(const TCHAR* _T(ImagePath))
{
	Handle = LoadGraph(ImagePath);
}

void LengthScrollBG::DrawUpScrollBG(float MoveSpeed)
{
	DrawExtendGraph(X, Y -= MoveSpeed, Width, Height -= MoveSpeed, Handle, true);
}

void LengthScrollBG::DrawDownScrollBG(float MoveSpeed)
{
	DrawExtendGraph(X, Y += MoveSpeed, Width, Height, Handle += MoveSpeed, true);
}