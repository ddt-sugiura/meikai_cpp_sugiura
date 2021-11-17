//============================================================================
// Name        : cpp-2-9.cpp
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
	if (sa > 10)
		cout << "それらの差は11以上です。";
	else
		cout << "それらの差は10以下です";

}
