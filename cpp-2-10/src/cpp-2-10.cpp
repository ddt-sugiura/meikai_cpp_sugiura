//============================================================================
// Name        : cpp-2-10.cpp
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
	if (min > b) min = b;
	if (min > c) min = c;
	cout << "最小値は" << min << "です。\n";
}
