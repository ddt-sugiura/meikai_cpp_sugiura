#include<iostream>
using namespace std;
int main() {
	int n;
	cout << "�����l:";
	cin >> n;
	if (n > 0)
		cout << "���̒l�͐��ł�\n";
	else if (n < 0)
		cout << "���̒l�͕��ł�\n";
	else if (n == 0)
		cout << "���̒l��0�ł�\n";
}