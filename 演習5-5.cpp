#include<climits>
#include<iomanip>
#include<iostream>

using namespace std;
/*演習5-5
異なる要素が同じ値とならないように
演習5-3のプログラムを改変せよ
(演習5-3)
  要素型がint型で要素数が６の配列の全要素に対して
  １～１０の乱数を代入して出力するプログラムを作成せよ*/
int main() {
	//乱数を設定
	srand(time(NULL));
	//配列の要素数を定数で宣言
	const int LENGHT_INTEGER = 6;
	//int型の配列を宣言
	int arrengeRand[LENGHT_INTEGER];
	//ループのカウントと配列の要素を指定する数字
	int countArrenge = 0;
	//カウントが配列の要素数になるまでループ
	while (countArrenge < LENGHT_INTEGER) {
		//値の重複の確認結果を格納する変数
		bool bookingFlg = true;
		//値の重複の確認用カウント変数
		int countCheck = 0;
		//各要素に1～10のランダムな数値を宣言
		int randNumeric = 1 + rand() % 10;
		//値が代入されている配列の要素分はループできる様にする
		while (countCheck < countArrenge && bookingFlg) {
			//値が重複しているか確認する
			if (arrengeRand[countCheck] == randNumeric) {
				//重複している場合はループの中断も兼ねてflgをfalseにする
				bookingFlg = false;
			}
			//確認用カウントを加算させる;
			countCheck++;
		}
		//重複チェックをすべて通過できた場合に処理する
		if (bookingFlg) {
			//宣言したランダムな値を配列に代入する
			arrengeRand[countArrenge] = randNumeric;
			//配列に要素を代入できた場合のみカウント変数を加算する
			countArrenge++;
		}
	}
	//要素数分のループを起こす
	for (int i = 0; i < LENGHT_INTEGER; i++) {
		//各要素を順に出力する
		cout << "a[" << i << "] = " << arrengeRand[i] << "\n";
	}
}