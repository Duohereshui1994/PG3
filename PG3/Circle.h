#pragma once
#include "IShape.h"
template<typename T>
class Circle : public IShape<T>
{
public:
	Circle(T pi, T radius);
	//関数オーバーライド
	void Size() override;
	void Draw() override;
private:
	//パラメータ
	T pi_;
	T radius_;
};
