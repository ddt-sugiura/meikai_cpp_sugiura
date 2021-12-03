//============================================================================
// Name        : cpp-3-2.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
//============================================================================
// Name        : cpp-3-2.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
/* 演習3-2
 * 2桁の整数値を当てさせる《数あてゲーム》を作成せよ*/
int main() {
	srand(time(NULL));
	//ランダムな2桁の数値を作成
	int randumNo =10 + rand()%90;
	int answerNo;
	cout << "数値あてゲーム:";
	cout << "二桁の数字を当てろ\n";
	do{
		cout << "答え:";
		//予想した数値を入れる
		cin >> answerNo;
		//answerNoとrandumNoを比較し、ヒントを出す
		if (answerNo > randumNo)
			cout << "もっと小さい\n";
		else if (answerNo < randumNo)
			cout << "もっと大きい\n";
	}while(answerNo != randumNo);
	//正解が出たら繰り返しを終える
	cout << "正解です。\n";
}
