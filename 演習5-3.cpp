#include<climits>
#include<iomanip>
#include<iostream>

using namespace std;
/*演習5-3
  要素型がint型で要素数が６の配列の全要素に対して
  １～１０の乱数を代入して出力するプログラムを作成せよ*/
int main() {
	//乱数を設定
	srand(time(NULL));
	//配列の要素数を定数で宣言
	const int LENGHT_INTEGER = 6;
	//int型の配列を宣言
	int arrengeRand[LENGHT_INTEGER];
	//要素数分のループを起こす
	for (int i = 0; i < LENGHT_INTEGER; i++) {
		//各要素に1～10のランダムな数値を代入
		arrengeRand[i] = 1 + rand()%10;
	}
	//要素数分のループを起こす
	for (int i = 0; i < LENGHT_INTEGER; i++) {
		//各要素を順に出力する
		cout << "a[" << i << "] = " << arrengeRand[i] << "\n";
	}
}