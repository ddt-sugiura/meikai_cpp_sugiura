#include<climits>
#include<iomanip>
#include<iostream>

using namespace std;
/*演習4-10
  float型の変数を0.0から1.0まで0.001ずつ増やしていく様子と
  int型の変数を0から1000までインクリメントした値を1000で割った値を求める様子を
  横に並べて表示するプログラムを作成せよ*/
int main() {
	//float型を0で初期化
	float Increasedecimal = 0.0F;
	//int型を0で初期化
	int ThousandDivide = 0;  
	//項目名を出力;
	cout << "  float      int\n";
	//横線を出力
	cout << "-----------------------\n";
	//過程の違いを見比べるため固定小数点記法により小数部6桁で出力
	cout << std::fixed << std::setprecision(6);
	//1000と1回分のループ実行
	for (int i = 0; i <= 1000; i++) {
		//int型を1000で割った値で宣言
		float CommercialSales = static_cast<float>(ThousandDivide)/1000.0F;
		//双方をそれぞれ出力する
		cout << Increasedecimal << "   " << CommercialSales << "\n";
		//int型に1を加算
		ThousandDivide += 1;
		//float型に0.001を加算
		Increasedecimal += 0.001;
	}
}