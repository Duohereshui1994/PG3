#pragma once
#include "Animal.h"
/// <summary>
/// 派生クラス：猫
/// </summary>
class Cat : public Animal
{
public:
	// コンストラクタ
	Cat(const std::string& name);
	// デストラクタ
	~Cat();
	/// <summary>
	/// 「叫ぶ」関数のオーバーライド
	/// </summary>
	void Call() override;
};

