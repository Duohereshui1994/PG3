#include <iostream>
#include <list>
using namespace std;

int main() {

	//list宣言
	list<const char*> yamanoteLineStation;

	//1970年代前の山手線の駅一覧
	yamanoteLineStation.push_back("Tokyo");
	yamanoteLineStation.push_back("Kanda");
	yamanoteLineStation.push_back("Akihabara");
	yamanoteLineStation.push_back("Okachimachi");
	yamanoteLineStation.push_back("Ueno");
	yamanoteLineStation.push_back("Uguisudani");
	yamanoteLineStation.push_back("Nippori");
	yamanoteLineStation.push_back("Tabata");
	yamanoteLineStation.push_back("Komagoe");
	yamanoteLineStation.push_back("Sugamo");
	yamanoteLineStation.push_back("Otsuka");
	yamanoteLineStation.push_back("Ikebukuro");
	yamanoteLineStation.push_back("Mejiro");
	yamanoteLineStation.push_back("Takadanobaba");
	yamanoteLineStation.push_back("Shin-Okubo");
	yamanoteLineStation.push_back("Shinjuku");
	yamanoteLineStation.push_back("Yoyogi");
	yamanoteLineStation.push_back("Harajuku");
	yamanoteLineStation.push_back("Shibuya");
	yamanoteLineStation.push_back("Ebisu");
	yamanoteLineStation.push_back("Meguro");
	yamanoteLineStation.push_back("Gotanda");
	yamanoteLineStation.push_back("Osaki");
	yamanoteLineStation.push_back("Shinagawa");
	yamanoteLineStation.push_back("Tamachi");
	yamanoteLineStation.push_back("Hamamatsucho");
	yamanoteLineStation.push_back("Shimbashi");
	yamanoteLineStation.push_back("Yurakucho");

	// 出力
	cout << "1970年山手線駅一覧" << endl;
	for (auto station = yamanoteLineStation.begin(); station != yamanoteLineStation.end(); ++station) {
		cout << *station << endl;
	}
	cout << endl;

	// 田端駅前に西日暮里駅を挿入
	for (list<const char*>::iterator itr = yamanoteLineStation.begin(); itr != yamanoteLineStation.end(); ++itr) {
		//田端駅前に
		if (*itr == "Tabata") {
			yamanoteLineStation.insert(itr, "Nishi-Nippori");
			++itr;
		}
	}

	// 出力
	cout << "2019年山手線駅一覧" << endl;
	for (auto station = yamanoteLineStation.begin(); station != yamanoteLineStation.end(); ++station) {
		cout << *station << endl;
	}
	cout << endl;

	// 田町駅前に高輪ゲートウェイ駅を挿入
	for (list<const char*>::iterator itr = yamanoteLineStation.begin(); itr != yamanoteLineStation.end(); ++itr) {
		//田町駅前に
		if (*itr == "Tamachi") {
			yamanoteLineStation.insert(itr, "Takanawa GateWay");
			++itr;
		}
	}

	// 出力
	cout << "2022年山手線駅一覧" << endl;
	for (auto station = yamanoteLineStation.begin(); station != yamanoteLineStation.end(); ++station) {
		cout << *station << endl;
	}
	cout << endl;

	return 0;
}