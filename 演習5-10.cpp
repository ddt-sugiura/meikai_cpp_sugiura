#include<climits>
#include<iomanip>
#include<iostream>
#include <format>
#include <stdio.h>
#include <string>
#include<sstream>
using namespace std;
/*演習5-10
4行3列の行列と3行4列の行列の積を求めるプログラムを作成せよ*/
int main() {
	//行列Aの列数と行列Bの行数を宣言
	int const COMMON_NUMBER = 3;
	//行列Aの行数と行列Bの列数を宣言
	int const OTHER_NUMBER = 4;
	//int型の行列Aを宣言
	int deteLine[OTHER_NUMBER][COMMON_NUMBER];
	//int型の行列Bを宣言
	int deterColumn[COMMON_NUMBER][OTHER_NUMBER];
	//積を格納する行列Mを宣言
	int deterMultiply[OTHER_NUMBER][OTHER_NUMBER] = { 0 };
	//forループのカウントと行数を指定する数字
	int countLine = 0;
	//forループのカウントと列数を指定する数字
	int countColumn = 0;
	//2重のループで行列Aに数字を入力
	for (countLine = 0; countLine < OTHER_NUMBER; countLine++) {
		for (countColumn = 0; countColumn < COMMON_NUMBER; countColumn++) {
			//各要素の中身を順に入力
			cout << "a[" << countLine << "][" << countColumn << "] : ";
			//任意の値を要素に挿入
			cin >> deteLine[countLine][countColumn];
		}
	}
	//2重のループで行列Bに数字を入力
	for (countLine = 0; countLine < COMMON_NUMBER; countLine++) {
		for (countColumn = 0; countColumn < OTHER_NUMBER; countColumn++) {
			//各要素の中身を順に入力
			cout << "b[" << countLine << "][" << countColumn << "] : ";
			//任意の値を要素に挿入
			cin >> deterColumn[countLine][countColumn];
		}
	}
	//掛け算のためにカウント変数をもう一つ宣言
	int countForMul = 0;
	//2重のループで行列Mに値を入れていく
	for (countLine = 0; countLine < OTHER_NUMBER; countLine++) {
		for (countColumn = 0; countColumn < OTHER_NUMBER; countColumn++) {
			//
			for (countForMul = 0; countForMul < 3; countForMul++) {
				deterMultiply[countLine][countColumn]
					+= deteLine[countLine][countForMul] * deterColumn[countForMul][countColumn];
			}
		}
	}

	for (countLine = 0; countLine < OTHER_NUMBER; countLine++) {
		for (countColumn = 0; countColumn < OTHER_NUMBER; countColumn++) {
			//各要素の中身を順に入力
			cout << "m[" << countLine << "][" << countColumn << "] = "
				<< deterMultiply[countLine][countColumn] << ", ";
		}
		cout << "\n";
	}

}


/*要素数分のループを起こし，配列aの各要素に値を入れていく
for (countLine = 0; countLine < COMMON_NUMBER; countLine++) {
		cout << "  | ";
	for (countColumn = 0; countColumn < OTHER_NUMBER; countColumn++) {
		//各要素の中身を順に入力
		cout << dete4L3C[countLine][countColumn] << " ";
	}
	cout << "| ";
	if (countLine == 1) {
		cout << "* | ";
	}
	else {
		cout << "  | ";
	}
	for (countColumn = 0; countColumn < COMMON_NUMBER; countColumn++) {
		//各要素の中身を順に入力
		if (countLine != COMMON_NUMBER - 1) {
			cout << deter3L4C[countLine][countColumn] << " ";
		}
		else {
			cout << "  ";
		}

	}
	cout << "| ";
	if (countLine == 1) {
		cout << "= | ";
	}
	else {
		cout << "  | ";
	}
	for (countColumn = 0; countColumn < COMMON_NUMBER; countColumn++) {
		//各要素の中身を順に入力
		cout << deterMultiply[countLine][countColumn] << " ";
	}
	cout << "| \n";
}*/