//============================================================================
// Name        : cpp-2-8.cpp
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
	int sa;
	if (b < a)
		sa =a - b;
	else
		sa =b - a;
	cout << "2つの値の差は" << sa <<"です\n";
}
