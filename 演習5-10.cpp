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
	int const NUM_OF_A = 3;
	//行列Aの行数と行列Bの列数を宣言
	int const NUM_OF_B = 4;
	//int型の行列Aを宣言
	int firstMatrix[NUM_OF_B][NUM_OF_A];
	//int型の行列Bを宣言
	int secondMatrix[NUM_OF_A][NUM_OF_B];
	//積を格納する行列Mを宣言
	int multiMatrix[NUM_OF_B][NUM_OF_B] = { 0 };
	//forループのカウントと行数を指定する数字
	int countLine = 0;
	//forループのカウントと列数を指定する数字
	int countColumn = 0;
	//2重のループで行列Aに数字を入力
	for (countLine = 0; countLine < NUM_OF_B; countLine++) {
		for (countColumn = 0; countColumn < NUM_OF_A; countColumn++) {
			//各要素の中身を順に入力
			cout << "a[" << countLine << "][" << countColumn << "] : ";
			//任意の値を要素に挿入
			cin >> firstMatrix[countLine][countColumn];
		}
	}
	//2重のループで行列Bに数字を入力
	for (countLine = 0; countLine < NUM_OF_A; countLine++) {
		for (countColumn = 0; countColumn < NUM_OF_B; countColumn++) {
			//各要素の中身を順に入力
			cout << "b[" << countLine << "][" << countColumn << "] : ";
			//任意の値を要素に挿入
			cin >> secondMatrix[countLine][countColumn];
		}
	}
	//掛け算のためにカウント変数をもう一つ宣言
	int countForMul = 0;
	//2重のループで行列Mに値を入れていく
	for (countLine = 0; countLine < NUM_OF_B; countLine++) {
		for (countColumn = 0; countColumn < NUM_OF_B; countColumn++) {
			//
			for (countForMul = 0; countForMul < 3; countForMul++) {
				multiMatrix[countLine][countColumn]
					+= firstMatrix[countLine][countForMul] * secondMatrix[countForMul][countColumn];
			}
		}
	}

	for (countLine = 0; countLine < NUM_OF_B; countLine++) {
		for (countColumn = 0; countColumn < NUM_OF_B; countColumn++) {
			//各要素の中身を順に入力
			cout << "m[" << countLine << "][" << countColumn << "] = "
				<< multiMatrix[countLine][countColumn] << ", ";
		}
		cout << "\n";
	}

}


/*要素数分のループを起こし，配列aの各要素に値を入れていく
for (countLine = 0; countLine < NUM_OF_A; countLine++) {
		cout << "  | ";
	for (countColumn = 0; countColumn < NUM_OF_B; countColumn++) {
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
	for (countColumn = 0; countColumn < NUM_OF_A; countColumn++) {
		//各要素の中身を順に入力
		if (countLine != NUM_OF_A - 1) {
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
	for (countColumn = 0; countColumn < NUM_OF_A; countColumn++) {
		//各要素の中身を順に入力
		cout << multiMatrix[countLine][countColumn] << " ";
	}
	cout << "| \n";
}*/