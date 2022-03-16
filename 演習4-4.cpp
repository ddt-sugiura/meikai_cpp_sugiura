#include<climits>
#include<iostream>

using namespace std;
/*演習4-4
  文字リテラルと整数リテラルに対して
  sizeof演算子を適用したプログラムを作成せよ*/
int main() {
	//文字リテラルに対してsizeofを適用した場合
	cout << "文字リテラルの大きさ：" << sizeof(char) << "\n";
	//整数リテラルに対してsizeofを適用した場合
	cout << "整数リテラルの大きさ：" << sizeof(int);
}