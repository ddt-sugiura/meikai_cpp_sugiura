#include<climits>
#include<iomanip>
#include<iostream>
#include <format>
#include <stdio.h>
#include <string>
#include<sstream>
using namespace std;
/*‰‰K6-1
ó‚¯æ‚Á‚½intŒ^ˆø”‚Ì’l‚ª•‰‚Ì’l‚Å‚ ‚ê‚Î|‚P‚ğ,‚O‚Å‚ ‚ê‚Î‚O‚ğ,
³‚Ì’l‚Å‚ ‚ê‚Î‚P‚ğ•Ô‹p‚·‚éŠÖ” int sign_of(int n) ‚ğì¬‚¹‚æ*/

int sign_of(int n) {
	//n‚ª•‰‚Ì’l‚Ìê‡
	if (n < 0) {
		// -1 ‚ğ•Ô‚·
		return -1;
	}
	//n‚ª0‚Ìê‡
	else if (n == 0) {
		// 0 ‚ğ•Ô‚·
		return 0;
	}
	//n‚ª³‚Ì’l‚Ìê‡
	else {
		// 1 ‚ğ•Ô‚·
		return 1;
	}
}

int main() {
	//sign_of‚ÌƒeƒXƒg‚ğs‚¤‚½‚ß‚Ì•Ï”
	int testVariable;
	//•Ï”‚É®”‚ğ“ü‚ê‚³‚¹‚é
	cout << "”š‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢";
	//“ü—Í‚µ‚½”š‚ªŠi”[‚³‚ê‚é
	cin >> testVariable;
	//sign_of‚Ìˆ—Œ‹‰Ê‚ğo—Í‚·‚é
	cout << "sign_of‚Í " << sign_of(testVariable) << " ‚ğ•Ô‚µ‚Ü‚·";
}