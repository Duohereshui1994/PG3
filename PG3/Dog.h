#pragma once
#include "Animal.h"
/// <summary>
/// 派生クラス：犬
/// </summary>
class Dog : public Animal
{
public:
	// コンストラクタ
	Dog(const std::string& name);
	// デストラクタ
	~Dog();
	/// <summary>
	/// 「叫ぶ」関数のオーバーライド
	/// </summary>
	void Call() override;
};

