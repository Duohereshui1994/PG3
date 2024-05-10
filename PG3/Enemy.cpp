#include "Enemy.h"

Enemy::Enemy()
{

}

Enemy::~Enemy()
{

}

void Enemy::Approach()
{
	cout << "接近" << endl;
}

void Enemy::Shoot()
{
	cout << "射撃" << endl;
}

void Enemy::Leave()
{
	cout << "離脱" << endl;
}

void Enemy::Update()
{
	//メンバー関数ポインタ 呼び出し
	(this->*actionTable[static_cast<size_t>(_phase)])();


	//次のフェーズに移行
	int nextPhase = static_cast<int>(_phase) + 1;

	if (nextPhase > static_cast<int>(Phase::Leave))
	{
		_phase = Phase::Approach;
	}
	else
	{
		_phase = static_cast<Phase>(nextPhase);
	}

}

//staticで宣言したメンバー関数ポインタのテーブルの実体
void(Enemy::* Enemy::actionTable[])() =
{
	&Enemy::Approach,	//接近
	&Enemy::Shoot,		//射撃
	&Enemy::Leave		//離脱
};