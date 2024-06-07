#include "Circle.h"

template<typename T>
Circle<T>::Circle(T pi, T radius) : pi_(pi), radius_(radius)
{

}

template<typename T>
void Circle<T>::Size()
{
	//面積計算
	this->size_ = radius_ * radius_ * pi_;
}

template<typename T>
void Circle<T>::Draw()
{
	//出力
	std::cout << "Radius = " << radius_ << " Circle's size = " << this->size_ << std::endl;
}

// 模板显式实例化
template class Circle<int>;
template class Circle<float>;
template class Circle<double>;