//============================================================================
// Name        : cpp-2-7.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int a,b;
	cout << "整数a:";cin >> a;
	cout << "整数b:";cin >> b;
	int max;
	if (b < a)
		max =a;
	else
		max =b;
	cout << "大きい方の値は" << max <<"です\n";
}
