#include<iostream>
using namespace std;
int main() {
	int a;
	int b;
	cout << "a‚Ì’l:";
	cin >> a;
	cout << "b‚Ì’l:";
	cin >> b;
	if (a > b)
		cout << "a‚æ‚èb‚Ì‚Ù‚¤‚ª‘å‚«‚¢‚Å‚·\n";
	else if (b > a)
		cout << "b‚æ‚èa‚Ì‚Ù‚¤‚ª‘å‚«‚¢‚Å‚·\n";
	else if (a == b)
		cout << "a‚Æb‚Í“¯‚¶’l‚Å‚·\n";
}