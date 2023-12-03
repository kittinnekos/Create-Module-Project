#include <tuple>
#include "DxLib.h"
export module NoMoveBackGround;
import ImageCommon;

export class NoMoveBackGround {
public:
	NoMoveBackGround();
	float Width, Height, X, Y;
	int Handle;
	Image image;
	std::tuple<float, float> sizetuple;
	std::tuple<float, float> postuple;

	void SetAndGetPositionBackGround(int x, int y, int width, int height);
	void LoadBackGround(const TCHAR* _T(ImagePath));
	void DrawBackGround();
};