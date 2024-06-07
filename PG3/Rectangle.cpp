#include "Rectangle.h"

template<typename T>
Rectangle<T>::Rectangle(T width, T height) : width_(width), height_(height)
{

}

template<typename T>
void Rectangle<T>::Size()
{
	//面積計算
	this->size_ = width_ * height_;
}

template<typename T>
void Rectangle<T>::Draw()
{
	//出力
	std::cout << "Width = " << width_ << " Height = " << height_ << " Rectangle's size = " << this->size_ << std::endl;
}

// 模板显式实例化
template class Rectangle<int>;
template class Rectangle<float>;
template class Rectangle<double>;
