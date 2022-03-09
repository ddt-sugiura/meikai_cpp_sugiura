#include<climits>
#include<iostream>

using namespace std;
/*‰‰K4-6
  3í—Ş‚Ì•‚“®¬”“_Œ^‚Ì‘å‚«‚³‚ğ
  sizeof‰‰Zq‚É‚æ‚Á‚Ä•\¦‚·‚éƒvƒƒOƒ‰ƒ€‚ğì¬‚¹‚æ*/
int main() {
	//floatŒ^‚Ì•Ï”‚ğéŒ¾
	float floatpoint;
	//doubleŒ^‚Ì•Ï”‚ğéŒ¾
	double doublepoint;
	//long doubleŒ^‚Ì•Ï”‚ğéŒ¾
	long double longpoint;
	//floatŒ^‚Ìbyte”‚ğo—Í
	cout << "floatŒ^‚Ì‘å‚«‚³: " << sizeof(floatpoint) << "\n";
	//doubleŒ^‚Ìbyte”‚ğo—Í
	cout << "doubleŒ^‚Ì‘å‚«‚³: " << sizeof(doublepoint) << "\n";
	//long doubletŒ^‚Ìbyte”‚ğo—Í
	cout << "long doubleŒ^‚Ì‘å‚«‚³: " << sizeof(longpoint) << "\n";
}