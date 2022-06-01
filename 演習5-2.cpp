#include<climits>
#include<iomanip>
#include<iostream>

using namespace std;
/*演習5-2
  要素型がdouble型で要素数が５の配列の全要素に対して
  0.0を代入して出力するプログラムを作成せよ*/
int main() {
	//配列の要素数を定数で宣言
	const int LENGHT_INTEGER = 5;
	//int型の配列を宣言
	double arrengeCountDwon[LENGHT_INTEGER];
	double elementDouble;
	//要素数分のループを起こす
	for (int i = 0; i < LENGHT_INTEGER; i++) {
		//各要素に0.0を代入する
		arrengeCountDwon[i] = 0.0;
	}
	//要素数分のループを起こす
	for (int i = 0; i < LENGHT_INTEGER; i++) {
		//各要素を順に出力する
		cout << "a[" << i << "] = " << arrengeCountDwon[i] << "\n";
	}
}