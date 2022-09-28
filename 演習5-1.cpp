#include<climits>
#include<iomanip>
#include<iostream>

using namespace std;
/*演習5-1
  要素型がint型で要素数が５の配列に対して,先頭から順に
  ５～１を代入して表示するプログラムを作成せよ*/
int main() {
	//配列の要素数を定数で宣言
	const int LENGHT_INTEGER = 5;
	//int型の配列を宣言
	int arrengeCountDwon[LENGHT_INTEGER];
	//要素数分のループを起こす
	for (int i = 0; i < LENGHT_INTEGER; i++) {
		//各要素にカウントダウン形式で代入する
		arrengeCountDwon[i] = LENGHT_INTEGER - i;
	}
	//要素数分のループを起こす
	for (int i = 0; i < LENGHT_INTEGER; i++) {
		//各要素を順に出力する
		cout <<"a["<<i<<"] = " << arrengeCountDwon[i] << "\n";
	}
}