#include<climits>
#include<iomanip>
#include<iostream>

using namespace std;
/*演習5-4
連続する要素が同じ値とならないように
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
	//連続する要素が同じ値か確認するための数字
	int chackBooking = 0;
	while (countArrenge < LENGHT_INTEGER) {
		//各要素に1～10のランダムな数値を宣言
		int randNumeric = 1 + rand() % 10;
		//チェック用の数字と比較（初回時のみ0が入っているため必ず通過できる）
		if (randNumeric != chackBooking) {
			//宣言した値を配列に代入する
			arrengeRand[countArrenge] = randNumeric;
			//同じ値をチェック用変数に格納し次の配列の要素に使う
			chackBooking = arrengeRand[countArrenge];
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