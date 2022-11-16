#include<climits>
#include<iomanip>
#include<iostream>
#include <format>
#include <stdio.h>
#include <string>
#include<sstream>
using namespace std;
/*演習6-2
三つのint型引数の中から最小値を求める関数
 min(int a,int b,int c) を作成せよ*/

int min(int a, int b, int c) {
	//返す値を格納する変数に一つ目の引数を暫定的に代入
	int resultInteger = a;
	//一つ目と二つ目の引数を比較
	if (b < resultInteger) {
		//二つ目のほうが小さいならその値を上書き
		resultInteger = b;
	}
	//暫定値と三つ目の引数と比較
	if (c < resultInteger) {
		//三つ目のほうが小さいならその値を上書き
		resultInteger = c;
	}
	//三つの引数の中で一番小さい値を返す
	return resultInteger;
}

int main() {

	//引数の数を固定値で宣言
	const int NUMBER_OF_ARGUMENTS = 3;
	//minのテストを行うための配列
	int testArray[NUMBER_OF_ARGUMENTS];
	//引数の数だけループさせる
	for (int i = 0; i < NUMBER_OF_ARGUMENTS; i++) {
		//変数に整数を入れさせる
		cout << i+1 <<"つめの数字を入力してください";
		//入力した数字が格納される
		cin >> testArray[i];
	}
	//minの処理結果を出力する
	cout << "minは " << min(testArray[0],testArray[1],testArray[2]) << " を返します";
}