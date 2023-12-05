#include "DxLib.h"
#include <tuple>

export module LengthScrollBG;

import ImageCommon;

export class LengthScrollBG
{
public:
	float Width, Height, X, Y, MoveSpeed;
	int Handle;
	Image image;
	std::tuple<float, float> sizetuple{};
	std::tuple<float, float> postuple{};

	LengthScrollBG();
	void SetAndGetPosLengthScrollBG(float x, float y, float width, float height);
	void LoadLengthScrollBG(const TCHAR* _T(ImagePath));
	void DrawUpScrollBG(float MoveSpeed);
	void DrawDownScrollBG(float MoveSpeed);
};