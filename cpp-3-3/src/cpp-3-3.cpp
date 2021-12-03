//============================================================================
// Name        : cpp-3-3.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
/* 演習3-3
 * 二つの整数値を読み込み、小さい方の数以上で大木法の数以下の
 * 全整数を、小さい方から順に表示するプログラムを作成せよ*/
int main() {
	int startNo,finishNo;
	cout << "整数A:";
	cin >> startNo;
	cout << "整数B:";
	cin >> finishNo;
	//2つの数字を入れる
	if (startNo > finishNo){
		int dummyNo = startNo;
		startNo = finishNo;
		finishNo = dummyNo;
		//startNoの方が大きい場合は入れ替える
	}
	do{
		cout << startNo << " ";
		startNo++;
		//出力毎にstartNoを加算する
	}while(startNo <= finishNo);
	//startNoがfinishNoを超えるまで続ける
}
