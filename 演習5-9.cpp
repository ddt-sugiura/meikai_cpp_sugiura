#include<climits>
#include<iomanip>
#include<iostream>
#include <format>
#include <stdio.h>
#include <string>
#include<sstream>
using namespace std;
/*演習5-9
配列aの全要素を配列bに対して逆順にコピーするプログラムを作成せよ*/
int main() {

	//配列の要素数を定数で宣言
	const int LENGHT_INTEGER = 5;
	//int型の配列aを宣言
	int arrengeA[LENGHT_INTEGER];
	//int型の配列bを配列aと同じ条件で宣言
	int arrengeB[LENGHT_INTEGER] = { 0 };
	//forループのカウントと配列の要素を指定する数字
	int countArrenge = 0;
	//要素数分のループを起こし，配列aの各要素に値を入れていく
	for (countArrenge = 0; countArrenge < LENGHT_INTEGER; countArrenge++) {
		//各要素の中身を順に入力
		cout << "a[" << countArrenge << "] : ";
		//任意の値を要素に挿入
		cin >> arrengeA[countArrenge];
	}
	//要素数分のループを起こし，配列bへのコピーを行う
	for (countArrenge = 0; countArrenge < LENGHT_INTEGER; countArrenge++) {
		//配列bの各要素へ配列aの各要素を逆順で挿入
		arrengeB[countArrenge] = arrengeA[LENGHT_INTEGER - countArrenge - 1];
	}
	//要素数分のループを起こす
	for (countArrenge = 0; countArrenge < LENGHT_INTEGER; countArrenge++) {
		//配列bの各要素の中身を順に出力
		cout << "b[" << countArrenge << "] = " << arrengeB[countArrenge] << "\n";
	}
}