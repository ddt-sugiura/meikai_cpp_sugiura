//============================================================================
// Name        : cpp-2-5.cpp
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
	if (a > 0)
		if(a%3 == 0)
			cout << "その値は3で割り切れます。\n";
		else if(a%3 == 1)
			cout << "その値を3で割った剰余は1です。\n";
		else if(a%3 == 2)
			cout << "その値を3で割った剰余は2です。\n";
	else
		cout << "その値は負です\n";
}

