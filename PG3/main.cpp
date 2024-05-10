#include <iostream>
using namespace std;
//複数の種類の関数テンプレート
template<typename T1, typename T2>

//二つの引数を比べて小さい値を返す関数を持つクラス
class MinCalculator {
public:
	T1 Min(T1 a, T2 b) {
		return (a < b) ? a : static_cast<T1>(b);
	}
};


int main() {

	//intとint
	MinCalculator<int, int> Cal1;
	cout << Cal1.Min(15, 20) << endl;

	//intとfloat
	MinCalculator<int, float> Cal2;
	cout << Cal2.Min(15, 7.3f) << endl;

	//intとdouble
	MinCalculator<int, double> Cal3;
	cout << Cal3.Min(15, 22.2) << endl;

	//floatとint
	MinCalculator<float, int> Cal4;
	cout << Cal4.Min(21.5f, 20) << endl;

	//floatとfloat
	MinCalculator<float, float> Cal5;
	cout << Cal5.Min(21.5f, 7.3f) << endl;

	//floatとdouble
	MinCalculator<float, double> Cal6;
	cout << Cal6.Min(21.5f, 22.2) << endl;

	//doubleとint
	MinCalculator<double, int> Cal7;
	cout << Cal7.Min(11.1, 20) << endl;

	//doubleとfloat
	MinCalculator<double, float> Cal8;
	cout << Cal8.Min(11.1, 7.3f) << endl;

	//doubleとdouble
	MinCalculator<double, double> Cal9;
	cout << Cal9.Min(11.1, 22.2) << endl;

	return 0;
}