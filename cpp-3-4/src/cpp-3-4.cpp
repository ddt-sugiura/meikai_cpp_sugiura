//============================================================================
// Name        : cpp-3-4.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
/* 演習3-4
 * List3-4のwhile終了時にxの値が-1になることを確認できるように、
 * 書き換えたプログラムを作成せよ
 * (List3-4は正の整数値が読み込まれたらその値を
 * 0までカウントダウンするよう出力するプログラム)*/
int main() {
	int x;
	cout << "カウントダウンします。\n";
	do{
		cout << "正の整数値:";
		cin >> x;
	}while(x<=0);
	while(x>=0){
		cout << x << "\n";
		//xの値を表示
		x--;
		//xの値をデクリメント
	}
	cout << "確認:x=" << x;
	//List3-4との相違点,終了時のxの値を確認
}
