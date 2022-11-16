#include<climits>
#include<iomanip>
#include<iostream>
#include <format>
#include <stdio.h>
#include <string>
#include<sstream>
using namespace std;
/*演習5-12
3次元配列の要素数を求める式を表せ*/
int main() {
	//三次元配列を宣言
	int threeDimension[4][5][6];
	//coutで式を出力していく
	cout << " 3次元配列の要素数を求める, \n\n";
	//一次元目の要素数
	int firstElementSize = sizeof(threeDimension) / sizeof(threeDimension[0]);
	//二次元目の要素数
	int secondElementSize = sizeof(threeDimension[0]) / sizeof(threeDimension[0][0]);
	//三次元目の要素数
	int thirdErementSize = sizeof(threeDimension[0][0]) / sizeof(threeDimension[0][0][0]);
	//全要素数
	int allElementSize = sizeof(threeDimension) / sizeof(threeDimension[0][0][0]);
	//配列の各次元の要素数をわかりやすく出力
	cout << " 3次元配列[" << firstElementSize << "][" << secondElementSize << "][" << thirdErementSize << "]の要素数は, \n\n";
	//求める式がわかるように出力
	cout << " " << firstElementSize << " × " << secondElementSize << " × " << thirdErementSize << " = " << allElementSize;
}