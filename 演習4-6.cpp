#include<climits>
#include<iostream>

using namespace std;
/*演習4-6
  3種類の浮動小数点型の大きさを
  sizeof演算子によって表示するプログラムを作成せよ*/
int main() {
	//float型の変数を宣言
	float floatpoint;
	//double型の変数を宣言
	double doublepoint;
	//long double型の変数を宣言
	long double longpoint;
	//float型のbyte数を出力
	cout << "float型の大きさ: " << sizeof(floatpoint) << "\n";
	//double型のbyte数を出力
	cout << "double型の大きさ: " << sizeof(doublepoint) << "\n";
	//long doublet型のbyte数を出力
	cout << "long double型の大きさ: " << sizeof(longpoint) << "\n";
}