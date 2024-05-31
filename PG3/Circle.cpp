#include "Circle.h"

void Circle::Size()
{
	//面積計算
	size_ = radius_ * pi_;
}

void Circle::Draw()
{
	//出力
	std::cout << "Radius = " << radius_ << " Circle's size = " << size_ << std::endl;
}
