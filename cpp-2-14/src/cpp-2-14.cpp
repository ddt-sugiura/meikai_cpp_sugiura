//============================================================================
// Name        : cpp-2-14.cpp
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
	int LPC = rand() % 3;
	switch(LPC){
		case 0:cout << "グー";break;
		case 1:cout << "チョキ"; break;
		case 2:cout << "パー"; break;
	}
}
