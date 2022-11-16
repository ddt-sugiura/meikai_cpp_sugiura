#include<climits>
#include<iomanip>
#include<iostream>
#include <format>
#include <stdio.h>
#include <string>
#include<sstream>
using namespace std;
/*‰‰K6-4
* ”¼Œar‚Ì–ÊÏ‚ğ‹‚ß‚Ä•Ô‹p‚·‚éŠÖ”
 cric_area(double r) ‚ğì¬‚¹‚æ*/

double cric_area(double r) {
	//‰~ü—¦‚ğŒÅ’è’l‚ÅéŒ¾
	double DEFAULTE_PI = 3.14;
	//”¼Œa~”¼Œa~‰~ü—¦‚ğ•Ô‹p
	return r * r * DEFAULTE_PI;
}

int main() {
	//cric_area‚ÌƒeƒXƒg‚ğs‚¤‚½‚ß‚Ì•Ï”
	double testVariable;
	//•Ï”‚É®”‚ğ“ü‚ê‚³‚¹‚é
	cout << "”¼Œa‚Æ‚È‚é”’l‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢";
	//“ü—Í‚µ‚½”š‚ªŠi”[‚³‚ê‚é
	cin >> testVariable;
	//cric_area‚Ìˆ—Œ‹‰Ê‚ğo—Í‚·‚é
	cout << "cric_area‚Í‰~‚Ì–ÊÏ‚Æ‚µ‚Ä " << cric_area(testVariable) << " ‚ğ•Ô‚µ‚Ü‚·";
}