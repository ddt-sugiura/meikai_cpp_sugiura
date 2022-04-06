#include<climits>
#include<iomanip>
#include<iostream>

using namespace std;
/*演習4-11
  float型の変数を0.0から1.0まで0.001ずつ増やしながら
  その値とその値の2乗を表示するプログラムを作成せよ*/
int main() {
	//float型を0で初期化
	float Increasedecimal = 0.0F;
	//項目名を出力;
	cout << "    元の値         2乗の値\n";
	//横線を出力
	cout << "--------------------------------\n";
	//正確な値を確認するため固定小数点記法により小数部12桁で出力
	cout << std::fixed << std::setprecision(12);
	//1000と1回分のループ実行
	for (int i = 0; i <= 1000; i++) {
		//双方をそれぞれ出力する
		cout << Increasedecimal << "  " << Increasedecimal* Increasedecimal << "\n";
		//元となる変数に0.001を加算
		Increasedecimal += 0.001F;
	}
}