#pragma once
#include "IShape.h"
template<typename T>
class Rectangle : public IShape<T>
{
public:
	Rectangle(T width, T height);
	//関数オーバーライド
	void Size() override;
	void Draw() override;
private:
	//パラメータ
	T width_;
	T height_;
	
};

