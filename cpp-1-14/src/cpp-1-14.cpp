//============================================================================
// Name        : cpp-1-14.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include<ctime>
#include<cstdlib>
#include<iostream>
using namespace std;
int main() {
	int average;
	cout << "整数値:";
	cin >> average;
	srand(time(NULL));
	int lucky_pt = rand() % 11;
	cout << "その値の±5の乱数を生成しました．その値は" << average + lucky_pt - 5 << "です．" << endl;
}
