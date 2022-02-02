#include<climits>
#include<iostream>

using namespace std;
/*演習4-1
 以下のプログラムを作成せよ
 ・int型の最小値から最大値までの全整数値を8進行・10進行・16進行で表示
 ・unsigned型の最小値から最大値までの全盛数値を8進行・10進行・16進行で表示*/
int main() {
	cout << "一覧表\n";
	//intの8進行を出力する列
	cout << "int型8進行\n";
	//処理が終わらないため，最後の20個のみを表示させる
	int StartIntNo = INT_MAX - 20;
	//for (int Int_go8 = 0; ; Int_go8++) {　本来のfor分
	for (int Int_go8 = StartIntNo; ; Int_go8++) {
		//8進行に変換する
		cout << oct << Int_go8;
		//最大値になったら処理を終了する
		if(Int_go8 == INT_MAX) break;
		//ループに戻る前にコンマを出力
		else cout << ",";
	}
	cout << "\n";
	//intの10進行を出力する列
	cout << "int型10進行\n";
	//for (int Int_go10 = 0; ; Int_go10++) {
	for (int Int_go10 = StartIntNo; ; Int_go10++) {
		//10進行に変換する
		cout << dec << Int_go10;
		if (Int_go10 == INT_MAX) break;
		else cout << ",";
	}
	cout << "\n";
	//intの16進行を出力する列
	cout << "int型16進行\n";
	//for (int Int_go16 = 0; ; Int_go16++) {
	for (int Int_go16 = StartIntNo; ; Int_go16++) {
		//16進行に変換する
		cout << hex <<Int_go16;
		if (Int_go16 == INT_MAX) break;
		else cout << ",";
	}
	cout << "\n";
	//unsingintの8進行を出力する列
	cout << "unsigned型8進行\n";
	for (int UnsignInt_go8 = 20; UnsignInt_go8 >= 0 ; UnsignInt_go8--) {
		//最大値からカウント関数を引いた値を8進行に変換する
		cout << oct << unsigned(UINT_MAX - UnsignInt_go8);
		cout << ",";
	}
	cout << "\n";
	///unsingintの10進行を出力する列
	cout << "unsigned型10進行\n";
	for (int UnsignInt_go10 = 20; UnsignInt_go10 >= 0; UnsignInt_go10--) {
		//最大値からカウント関数を引いた値を10進行に変換する
		cout << dec << unsigned(UINT_MAX - UnsignInt_go10);
		cout << ",";
	}
	cout << "\n";
	///unsingintの16進行を出力する列
	cout << "unsigned型16進行\n";
	for (int UnsignInt_go16 = 20; UnsignInt_go16 >= 0; UnsignInt_go16--) {
		//最大値からカウント関数を引いた値を16進行に変換する
		cout << hex << unsigned(UINT_MAX - UnsignInt_go16);
		cout << ",";
	}
}