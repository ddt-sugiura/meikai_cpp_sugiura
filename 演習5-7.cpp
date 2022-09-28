#include<climits>
#include<iomanip>
#include<iostream>
#include <format>
#include <stdio.h>
#include <string>
#include<sstream>
using namespace std;
/*演習5-7
全門を書き換えて，縦方向の棒グラフを出力するプログラムを作成せよ

演習5-6
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
		arrengeRand[i] = rand() % 11;
	}
	//12列分のループを起こし，各行の出力を行う
	for (int j = 0; j < 12; j++) {
		//個の分岐で10列分の出力処理
		if (j < 10) {
			//要素数分のループを起こす
			for (int i = 0; i < LENGHT_INTEGER; i++) {
				//挿入されてる数値が下から数えて今の列に届く場合
				if (arrengeRand[i] >= 10 - j) {
					//*を出力
					cout << " *";
				}
				else {
					//空白を出力
					cout << "  ";
				}
			}
		}
		//11列目の出力処理
		else if (j == 10) {
			//要素数分のループを起こす
			for (int i = 0; i < LENGHT_INTEGER; i++) {
				//横の線を出力
				cout << "--";
			}
			//長さを調節
			cout << "-";
		}
		//12列目の出力処理
		else {
			//要素数分のループを起こす
			for (int i = 0; i < LENGHT_INTEGER; i++) {
				//10で割った余剰を出力する
				cout << " " << i%10 ;
			}
		}
		//ループ前に改行をする
		cout << "\n";
	}
}