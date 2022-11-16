#include<climits>
#include<iomanip>
#include<iostream>
#include <format>
#include <stdio.h>
#include <string>
#include<sstream>
using namespace std;
/*演習6-3
三つのint型引数の中から中央値を求める関数
 med(int a,int b,int c) を作成せよ*/

int med(int a, int b, int c) {
	//返す値を格納する変数を宣言
	int resultInteger = -1;
	//一つ目と二つ目の引数を比較
	if (a <= b) {
		//二つ目と三つ目の引数を比較
		if (b <= c) {
			//二つ目の値が中央値になる
			resultInteger = b;
		}
		//一つ目と三つ目の引数を比較
		else if(c <= a){
			//一つ目の値が中央値になる
			resultInteger = a;
		}
		//上記二つの分岐に引っかからなかった場合
		else {
			//三つ目の値が中央値になる
			resultInteger = c;
		}
	}
	else{
		//一つ目と三つ目の引数を比較
		if (a <= c) {
			//一つ目の値が中央値になる
			resultInteger = a;
		}
		//二つ目と三つ目の引数を比較
		else if (c <= b) {
			//二つ目の値が中央値になる
			resultInteger = b;
		}
		//上記二つの分岐に引っかからなかった場合
		else {
			//三つ目の値が中央値になる
			resultInteger = c;
		}
	}
	//三つの引数の中央値を返す
	return resultInteger;
}

int main() {

	//引数の数を固定値で宣言
	const int NUMBER_OF_ARGUMENTS = 3;
	//medのテストを行うための配列
	int testArray[NUMBER_OF_ARGUMENTS];
	//引数の数だけループさせる
	for (int i = 0; i < NUMBER_OF_ARGUMENTS; i++) {
		//変数に整数を入れさせる
		cout << i + 1 << "つめの数字を入力してください";
		//入力した数字が格納される
		cin >> testArray[i];
	}
	//medの処理結果を出力する
	cout << "medは " << med(testArray[0], testArray[1], testArray[2]) << " を返します";
}