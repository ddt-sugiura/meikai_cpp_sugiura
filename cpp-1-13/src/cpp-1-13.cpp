//============================================================================
// Name        : cpp-1-13.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include<ctime>
#include<cstdlib>
#include<iostream>
using namespace std;
int main() {
	srand(time(NULL));
	int lucky_pt = 1 + rand() % 10;
	cout << lucky_pt << endl;
	int lucky_mt = 1 + rand() % 10;
	cout << -lucky_mt << endl;
	int lucky_ph = 10 + rand() % 90;
	cout << -lucky_ph << endl;
}
