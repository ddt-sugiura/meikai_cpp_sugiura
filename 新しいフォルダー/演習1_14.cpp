#include<ctime>
#include<cstdlib>
#include<iostream>
using namespace std;
int main() {
	int average;
	cout << "�����l:";
	cin >> average;
	srand(time(NULL));
	int lucky_pt = rand() % 11;
	cout << "���̒l�́}5�̗����𐶐����܂����D���̒l��" << average + lucky_pt - 5 << "�ł��D" << endl;
}