#pragma once
#include <iostream>
using namespace std;

//行為リスト
enum class Phase {
	Approach,			//接近
	Shoot,				//射撃
	Leave				//離脱
};
class Enemy
{
public:
	Enemy();
	~Enemy();
	void Approach();	//接近
	void Shoot();		//射撃
	void Leave();		//離脱
	void Update();
private:
	//メンバー関数ポインタのテーブル
	static void(Enemy::* actionTable[])();

	//配列インデックス
	Phase _phase = Phase::Approach;
};

