#include <tuple>
module ImageCommon;


//コンストラクタ
Size::Size() {
	width = 0.0f;
	height = 0.0f;
}

Vector2::Vector2() {
	x = 0.0f;
	y = 0.0f;
}

Image::Image() {
	imageHandle = 0.0f;
}

//ゲッターとセッター
void Image::SetSize(float width, float height) {
	size.width = position.x + width;
	size.height = position.y + height;
}

std::tuple<float, float> Image::GetSize() {
	return std::forward_as_tuple(size.width, size.height);
}

void Image::SetPosition(float x, float y) {
	position.x = x;
	position.y = y;
}

std::tuple<float, float> Image::GetPosition() {
	return std::forward_as_tuple(position.x, position.y);
}

void Image::SetImageHandle(int handle) {
	imageHandle = handle;
}

int Image::GetImageHandle() {
	return imageHandle;
}