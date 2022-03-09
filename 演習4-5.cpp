#include<climits>
#include<iostream>

using namespace std;
/*演習4-5
  float型の変数とdouble型の変数にキーボードから数字を読み込んで，
  その値を表示するプログラムを作成せよ，いろいろな値で動作を検討せよ*/
int main() {
	//入力した数値を受け取る変数
	// float用の変数
	float TypeOfFloat=0;
	// double用の変数
	double TypeOfDouble=0;
	// ループを終了するか判断するための変数
	int StopFlag = 1;
	//無限ループによって様々な数値を入力
	while (StopFlag != 0) {
		//float型の表示準備
		cout << "数値を入力 for float型:";
		//float型として収納する
		cin >> TypeOfFloat;
		//float型で出力しフォーマットを確認
		cout << "float型 -> " << TypeOfFloat << "\n";
		//doublet型の表示準備
		cout << "数値を入力 for double型:";
		//double型として収納する
		cin >> TypeOfDouble;
		//double型で出力しフォーマットを確認
		cout << "double型 -> " << TypeOfDouble << "\n";
		//無限ループを終了するかの判断をさせる
		cout << "終了するなら0:";
		//0を受け取ったらループ終了
		cin >> StopFlag;
	}
}