#pragma once
#include <iostream>
template<typename T>
class IShape
{
public:
	//純粋仮想関数
	virtual void Size() = 0;
	virtual void Draw() = 0;
protected:
	//面積
	T size_;
};

