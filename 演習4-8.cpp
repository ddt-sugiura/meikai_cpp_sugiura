#include<climits>
#include<iostream>

using namespace std;
/*演習4-8
  以下の算術演算を行う各式に
  sizeof演算子やtypeid演算子を適用した値を
  表示するプログラムを作成せよ
  int + int   double + double   int + double   double + int*/
int main() {
	//float型の変数を宣言
	int TypeOf_I = 1;
	//double型の変数を宣言
	double TypeOf_D = 1;
	// int + int の 各演算子による出力結果 int同士の計算なので,int型で出力される
	std::cout << "int + int : sizeof演算子 " << sizeof(TypeOf_I + TypeOf_I) << " typeid演算子 " << typeid(TypeOf_I + TypeOf_I).name() << "\n";
	// double + double の 各演算子による出力結果 double同士の計算なので，double型で出力される
	std::cout << "double + double : sizeof演算子 " << sizeof(TypeOf_D + TypeOf_D) << " typeid演算子 " << typeid(TypeOf_D + TypeOf_D).name() << "\n";
	// int + double の 各演算子による出力結果　double型が含まれているため，計算を成立されるためbouble型で出力される
	std::cout << "int + double : sizeof演算子 " << sizeof(TypeOf_I + TypeOf_D) << " typeid演算子 " << typeid(TypeOf_I + TypeOf_D).name() << "\n";
	// int+int の 各演算子による出力結果　上記と同様
	std::cout << "double + int : sizeof演算子 " << sizeof(TypeOf_D + TypeOf_I) << " typeid演算子 " << typeid(TypeOf_D + TypeOf_I).name() << "\n";
}