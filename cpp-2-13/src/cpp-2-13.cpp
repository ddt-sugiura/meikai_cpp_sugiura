//============================================================================
// Name        : cpp-2-13.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int a,b;
	cout << "整数a："; cin >> a;
	cout << "整数b："; cin >> b;

	if(b > a){
		int t;
		t = a;
		a = b;
		b = t;
	}
	cout << "a≧bとなるようにソートしました。\n";
	cout << "変数aは" << a << "です。\n";
	cout << "変数bは" << b << "です。\n";
}
