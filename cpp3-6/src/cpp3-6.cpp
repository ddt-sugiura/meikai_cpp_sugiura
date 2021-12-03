//============================================================================
// Name        : cpp3-6.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
/* 演習3-6
 * 読み込んだ数値の個数だけ記号文字を表示するプログラムを作成せよ。
 * +と-を交互に表示すること*/
int main() {
	int Drowcount;
	cout <<"何個表示しますか:";
	cin >> Drowcount;
	while(--Drowcount>0){
		cout<<"+-";
		//この一度のループで+と-を両方描写する
		Drowcount--;
		//一度のループで二回デクリメントが起きる
	}
	if(Drowcount==0){
		//最初のDrowcountの値が1以上かつ、奇数の場合のみ最後に+を描写する
		cout <<"+\n";
	}
}
