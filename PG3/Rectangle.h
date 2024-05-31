#pragma once
#include "IShape.h"
class Rectangle : public IShape
{
public:
	//関数オーバーライド
	void Size() override;
	void Draw() override;
private:
	//パラメータ
	float width_ = 3.0f;
	float height_ = 4.0f;
	
};

