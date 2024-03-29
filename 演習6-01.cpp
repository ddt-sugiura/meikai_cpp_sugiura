#include<climits>
#include<iomanip>
#include<iostream>
#include <format>
#include <stdio.h>
#include <string>
#include<sstream>
using namespace std;
/*演習6-1
受け取ったint型引数の値が負の値であれば−１を,０であれば０を,
正の値であれば１を返却する関数 int sign_of(int n) を作成せよ*/

int sign_of(int n) {
	//nが負の値の場合
	if (n < 0) {
		// -1 を返す
		return -1;
	}
	//nが0の場合
	else if (n == 0) {
		// 0 を返す
		return 0;
	}
	//nが正の値の場合
	else {
		// 1 を返す
		return 1;
	}
}

int main() {
	//sign_ofのテストを行うための変数
	int testVariable;
	//変数に整数を入れさせる
	cout << "数字を入力してください";
	//入力した数字が格納される
	cin >> testVariable;
	//sign_ofの処理結果を出力する
	cout << "sign_ofは " << sign_of(testVariable) << " を返します";
}