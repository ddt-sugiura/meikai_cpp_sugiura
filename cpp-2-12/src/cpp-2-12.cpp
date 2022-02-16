//============================================================================
// Name        : cpp-2-12.cpp
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

	if(a==b){
		cout <<"2つは同じ値です";
	}else{
		int max = a;
		int min = b;
		if(b>a){
			min = a;
			max = b;
		}
		cout << "小さい方の値は" << min <<
				"で、大きい方の値は" << max << "です。\n";
	}

}
