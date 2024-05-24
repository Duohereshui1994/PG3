#include "Dog.h"

Dog::Dog(const std::string& name) : Animal(name)
{

}

Dog::~Dog()
{

}

/// <summary>
/// 「叫ぶ」関数のオーバーライド
/// </summary>
void Dog::Call()
{
	std::cout << _name << " Says Bark Bark ！" << std::endl;
}
