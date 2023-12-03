#include <tuple>
export module ImageCommon;

class Size {
public:
	float width, height;
	Size();
};

class Vector2 {
public:
	float x, y;
	Vector2();
};

export class Image {
private:
	Size size;
	Vector2 position;
	int imageHandle;
public:
	Image();
	void SetSize(float width, float height);
	std::tuple<float, float> GetSize();
	void SetPosition(float x, float y);
	std::tuple<float, float> GetPosition();
	void SetImageHandle(int handle);
	int GetImageHandle();

};