//============================================================================
// Name        : cpp-2-11.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int a,b,c;

	cout << "整数a:"; cin >> a;
	cout << "整数b:"; cin >> b;
	cout << "整数c:"; cin >> c;

	int min = a;
	int o = b;
	if (min > b)
		min = b;
		if (c > a)
			o = a;
		else
			o = c;
	if (min > c)
		min = c;
		if (b > a)
		o = a;
	if(b > c)
		o = c;
	cout << "中央値は" << o <<"です。\n";
}
