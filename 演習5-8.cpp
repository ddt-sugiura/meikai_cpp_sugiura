#include<climits>
#include<iomanip>
#include<iostream>
#include <format>
#include <stdio.h>
#include <string>
#include<sstream>
using namespace std;
/*演習5-8
配列の並びをランダムにシャッフルするプログラムを作成せよ*/
int main() {
	//乱数を設定
	srand(time(NULL));
	//配列の要素数を定数で宣言
	const int LENGHT_INTEGER = 10;
	//int型の配列を宣言
	int arrengeOrder[LENGHT_INTEGER];
	//forループのカウントと配列の要素を指定する数字
	int countArrenge = 0;
	//要素数分のループを起こす
	for (countArrenge = 0; countArrenge < LENGHT_INTEGER; countArrenge++) {
		//各要素へ順に1～10を挿入
		arrengeOrder[countArrenge] = countArrenge + 1;
		//各要素の中身を順に出力
		cout << "a[" << countArrenge << "] = " << arrengeOrder[countArrenge] << "\n";
	}
	//入れ替え用の配列を同じ条件で宣言
	int arrengeShuf[LENGHT_INTEGER];
	//配列の要素に入っていない固定値を宣言
	const int DUMMY_INTEGER = 20;
	//whileループのカウントと配列の要素を指定する数字
	int countShuf = 0;
	//カウント変数が配列の要素数になるまでループする
	while (countShuf < LENGHT_INTEGER) {
		//0～9のランダムな数字を宣言
		int randElement = rand() % 10;
		//arrengeOrdeの指定されたランダムな要素が処理済み出ない場合に処理を行う
		if (arrengeOrder[randElement] != DUMMY_INTEGER) {
			//arrengeShufへ順に要素の値を代入していく
			arrengeShuf[countShuf] = arrengeOrder[randElement];
			//処理済みの要素としてarrengeOrderの要素を変える
			arrengeOrder[randElement] = DUMMY_INTEGER;
			//一連の処理をした場合にカウント変数を加算する
			countShuf++;
		}
	}
	//要素数分のループを起こす
	for (countArrenge = 0; countArrenge < LENGHT_INTEGER; countArrenge++) {
		//各要素へ順に1～10を挿入
		arrengeOrder[countArrenge] = arrengeShuf[countArrenge];
	}
	//並び変えたことをつたえる出力
	cout << "要素の並びをシャッフルしました\n";
	//要素数分のループを起こす
	for (countArrenge = 0; countArrenge < LENGHT_INTEGER; countArrenge++) {
		//各要素の中身を順に出力
		cout << "a[" << countArrenge << "] = " << arrengeOrder[countArrenge] << "\n";
	}
}