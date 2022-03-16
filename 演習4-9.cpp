#include<climits>
#include<iostream>

using namespace std;
/*演習4-9
  3つの整数値を読み込んで，その合計と平均を表示するプログラムを作成せよ
  キャスト記法を用いるもの，関数的記法を用いるもの，static_cast演算子を用いるものを作成すること*/
int main() {
	//3つの整数値を読み込むための配列を宣言
	int AttributeValue[3];
	//1つ目はxの値とする
	std::cout << "xの値 : ";
	//1つ目の値を入力
	std::cin >> AttributeValue[0];
	//2つ目はyの値とする
	std::cout << "yの値 : ";
	//2つ目の値を入力
	std::cin >> AttributeValue[1];
	//3つ目はzの値とする
	std::cout << "zの値 : ";
	//3つ目の値を入力
	std::cin >> AttributeValue[2];
	//キャスト記法で平均値を算出
	double AveOfCast = (double)(AttributeValue[0] + AttributeValue[1] + AttributeValue[2]) / 3;
	//計算結果を出力
	std::cout << "キャスト記法で算出 : " << AveOfCast << "\n";
	//関数的記法で平均値を算出
	double AveOfFunction = double(AttributeValue[0] + AttributeValue[1] + AttributeValue[2]) / 3;
	//計算結果を出力
	std::cout << "関数的記法で算出 : " << AveOfFunction << "\n";
	//static_cast演算子で平均値を算出
	double AveOfStatic = static_cast<double>(AttributeValue[0] + AttributeValue[1] + AttributeValue[2]) / 3;
	//計算結果を出力
	std::cout << "static_cast演算子で算出 : " << AveOfStatic ;
}