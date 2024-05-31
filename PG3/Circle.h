#pragma once
#include "IShape.h"
class Circle : public IShape
{
public:
	//関数オーバーライド
	void Size() override;
	void Draw() override;
private:
	//パラメータ
	float pi_ = 3.14f;
	float radius_ = 2.0f;
};

