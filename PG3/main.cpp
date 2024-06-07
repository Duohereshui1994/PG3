#include <iostream>
#include "Circle.h"
#include "Rectangle.h"

int main() {

	//生成
	Circle<float>* circle = new Circle<float>(3.14f, 2.0f);
	Rectangle<float>* rectangle = new Rectangle<float>(4.0f, 5.0f);

	//運行
	circle->Size();
	circle->Draw();

	rectangle->Size();
	rectangle->Draw();

	//解放
	delete circle;
	delete rectangle;

	return 0;
}