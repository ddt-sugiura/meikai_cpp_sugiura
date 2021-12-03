//============================================================================
// Name        : cpp-3-1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
/* 演習3-1
 * 組み込んだ際すうちの符号を判別するList2-5を、
 * 好きなだけ何度も入力・表示を繰り返せるようにしたプログラムを作成せよ*/
int main() {
	string retry;
	do{
		int judgeNo;
		cout << "整数値:";
		cin >> judgeNo;
		//judgeNoに数字を入れる
		if (judgeNo > 0)
			cout << "その値は正です\n";
		//正の値の場合の処理
		else if (judgeNo < 0)
			cout << "その値は負です\n";
		//負の値の場合の処理
		else if (judgeNo == 0)
			cout << "その値は0です\n";
		//値0の場合の処理
		cout << "Retry? Y…Yes/N…no:";
		cin >> retry;
		//retryに入る文字によって繰り返すかを判別
	}while(retry=="Y"||retry=="y");
	//Yかyの場合にのみ繰り返す
}
