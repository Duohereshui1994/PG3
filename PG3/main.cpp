#include <iostream>
#include <string>
#include <chrono>

auto CopyTime(const std::string& str) {
	//開始時間
	auto startTime = std::chrono::high_resolution_clock::now();
	//内容をコピーする
	std::string copy = str;
	//終了時間
	auto endTime = std::chrono::high_resolution_clock::now();
	//時間計算
	return std::chrono::duration_cast<std::chrono::microseconds>(endTime - startTime);
}

auto MoveTime(std::string&& str) {
	//開始時間
	auto startTime = std::chrono::high_resolution_clock::now();
	//内容を移動する
	std::string move = std::move(str);
	//終了時間
	auto endTime = std::chrono::high_resolution_clock::now();
	//時間計算
	return std::chrono::duration_cast<std::chrono::microseconds>(endTime - startTime);
}

int main() {

	//文字列を作成した
	std::string a(10000000, 'a');
	//コピーでかかった時間
	auto copyTime = CopyTime(a);
	//移動でかかった時間
	auto moveTime = MoveTime(std::move(a));

	//出力
	std::cout << "文字を移動とコピーで比較しました。" << std::endl;

	std::cout << "コピー：" << copyTime.count() << "μs" << std::endl;

	std::cout << "移動：" << moveTime.count() << "μs" << std::endl;

	return 0;
}