#include<iostream>
using namespace std;
int main() {
	int n;
	cout << "整数値:";
	cin >> n;
	if (n > 0)
		cout << "その値は" << n << "です\n";
	else
		cout << "その値は" << -n << "です\n";
}