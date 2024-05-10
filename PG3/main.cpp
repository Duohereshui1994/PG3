#include <iostream>
#include "Enemy.h"
#include <windows.h>

using namespace std;

int main() {

	Enemy enemy;


	for (int i = 0; i < 3; ++i)
	{
		enemy.Update();
		Sleep(1000);
	}


	return 0;
}