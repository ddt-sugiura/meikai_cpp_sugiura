//============================================================================
// Name        : cpp-1-12.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include<iostream>
using namespace std;
int main() {
	double x;
	double y;
	cout << "三角形の面積を求めます\n";
	cout << "底辺:";
	cin >> x;

	cout << "高さ:";
	cin >> y;

	cout << "面積は" << (x*y)/2 << "です。\n";
}
