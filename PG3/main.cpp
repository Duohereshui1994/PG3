#include <iostream>
#include "Circle.h"
#include "Rectangle.h"

int main() {

	//生成
	Circle* circle = new Circle();
	Rectangle* rectangle = new Rectangle();

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