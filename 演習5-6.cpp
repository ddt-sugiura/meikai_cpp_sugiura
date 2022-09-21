#include<climits>
#include<iomanip>
#include<iostream>
#include <format>
#include <stdio.h>
#include <string>
#include<sstream>
using namespace std;
/*演習5-6
要素型がint型で要素数が１５の配列全要素に
１～１０の乱数を代入し，*の棒グラフで値を表示するプログラムを作成せよ*/
int main() {
	//乱数を設定
	srand(time(NULL));
	//配列の要素数を定数で宣言
	const int LENGHT_INTEGER = 15;
	//int型の配列を宣言
	int arrengeRand[LENGHT_INTEGER];
	//ループのカウントと配列の要素を指定する数字
	int countArrenge = 0;
	//要素数分のループを起こす
	for (int i = 0; i < LENGHT_INTEGER; i++) {
		//各要素に1～10のランダムな数値を代入
		arrengeRand[i] = 1 + rand() % 10;
	}
	//要素数分のループを起こす
	for (int i = 0; i < LENGHT_INTEGER; i++) {
		//出力する文字列を格納する変数
		string exertTxt;
		//iが一桁の場合
		if (i < 10) {
			//空白で右寄せさせる
			exertTxt = " " + to_string(i);
		}
		//iが二桁の場合
		else {
			//iをそのままstring型に
			exertTxt = to_string(i);
		}
		//表の行に当たる個所を出力する
		cout << "a[" << exertTxt << "] = :";
		//各要素に挿入されている数値分のループを起こす
		for (int j = 0; j < arrengeRand[i]; j++) {
			//ループ毎に*を出力する
			cout << "*";
		}
		//ループ終了前に改行をする
		cout << "\n";
	}
}