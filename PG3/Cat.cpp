#include "Cat.h"

Cat::Cat(const std::string& name) : Animal(name)
{

}

Cat::~Cat()
{

}

/// <summary>
/// 「叫ぶ」関数のオーバーライド
/// </summary>
void Cat::Call()
{
	std::cout << _name << " Says Meow Meow ！" << std::endl;
}
