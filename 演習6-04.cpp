#include<climits>
#include<iomanip>
#include<iostream>
#include <format>
#include <stdio.h>
#include <string>
#include<sstream>
using namespace std;
/*演習6-4
* 半径rの面積を求めて返却する関数
 cric_area(double r) を作成せよ*/

double cric_area(double r) {
	//円周率を固定値で宣言
	double DEFAULTE_PI = 3.14;
	//半径×半径×円周率を返却
	return r * r * DEFAULTE_PI;
}

int main() {
	//cric_areaのテストを行うための変数
	double testVariable;
	//変数に整数を入れさせる
	cout << "半径となる数値を入力してください";
	//入力した数字が格納される
	cin >> testVariable;
	//cric_areaの処理結果を出力する
	cout << "cric_areaは円の面積として " << cric_area(testVariable) << " を返します";
}