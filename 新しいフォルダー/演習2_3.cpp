#include<iostream>
using namespace std;
int main() {
	int a;
	int b;
	cout << "a�̒l:";
	cin >> a;
	cout << "b�̒l:";
	cin >> b;
	if (a > b)
		cout << "a���b�̂ق����傫���ł�\n";
	else if (b > a)
		cout << "b���a�̂ق����傫���ł�\n";
	else if (a == b)
		cout << "a��b�͓����l�ł�\n";
}