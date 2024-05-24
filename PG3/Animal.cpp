#include "Animal.h"


Animal::Animal(const std::string& name) : _name(name)
{
	std::cout << _name << " is Disappear !" << std::endl;
}

Animal::~Animal()
{
	std::cout << _name << " is delete !"  << std::endl;
}

void Animal::Call()
{
}
