//============================================================================
// Name        : cpp-2-6.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int a;
	cout << "aの値:";
	cin >> a;
	if(a > 0 && a < 60)
		cout << "不可\n";
	else if(a < 70)
		cout << "可\n";
	else if(a < 80)
		cout << "良\n";
	else if(a < 100)
		cout << "優\n";
}
