#pragma once
#include <iostream>
#include <string>
/// <summary>
/// 基底クラス
/// </summary>
class Animal
{
protected:
	// 名前
	std::string _name;

public:
	// コンストラクタ
	Animal(const std::string& name);
	// デストラクタ
	virtual ~Animal();
	// 「叫ぶ」関数
	virtual void Call();
};

