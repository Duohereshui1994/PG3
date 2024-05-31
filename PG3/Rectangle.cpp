#include "Rectangle.h"

void Rectangle::Size()
{
	//面積計算
	size_ = width_ * height_;
}

void Rectangle::Draw()
{
	//出力
	std::cout << "Width = " << width_ << " Height = " << height_ << " Rectangle's size = " << size_ << std::endl;
}
