#include<climits>
#include<iostream>

using namespace std;
/*演習4-7
  浮動小数点型の情報を
  typeid演算子によって表示するプログラムを作成せよ*/
int main() {
	//float型の変数を宣言
	float TypeOf_F = 0;
	//double型の変数を宣言
	double TypeOf_D = 0;
	//long double型の変数を宣言
	long double TypeOf_L = 0;
	//float型の型の名前を出力
	cout << "TypeOf_Fの型の名前: " << typeid(TypeOf_F).name() << "\n";
	//double型の型の名前を出力
	cout << "TypeOf_Dの型の名前: " << typeid(TypeOf_D).name() << "\n";
	//long doublet型の型の名前を出力
	cout << "TypeOf_Lの型の名前: " << typeid(TypeOf_L).name() << "\n";
}