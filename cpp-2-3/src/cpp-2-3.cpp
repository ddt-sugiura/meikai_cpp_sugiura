//============================================================================
// Name        : cpp-2-3.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include<iostream>
using namespace std;
int main() {
	int a;
	int b;
	cout << "aの値:";
	cin >> a;
	cout << "bの値:";
	cin >> b;
	if (a > b)
		cout << "aよりbのほうが大きいです\n";
	else if (b > a)
		cout << "bよりaのほうが大きいです\n";
	else if (a == b)
		cout << "aとbは同じ値です\n";
}
