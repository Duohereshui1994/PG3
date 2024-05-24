#include <iostream>
#include <vector>
#include "Animal.h"
#include "Dog.h"
#include "Cat.h"

int main() {

	//ベクトルコンテナ
	std::vector<Animal*> animals;

	//動物の作成
	animals.push_back(new Dog("Dog 1"));
	animals.push_back(new Cat("Cat 1"));

	//動物の呼び出し
	for (Animal* animal : animals) {
			animal->Call();
	}

	//動物の削除
	for (Animal* animal : animals) {
		delete animal;
	}

	return 0;
}