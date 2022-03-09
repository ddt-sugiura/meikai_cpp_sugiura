#include<climits>
#include<iostream>

using namespace std;
/*‰‰K4-7
  •‚“®¬”“_Œ^‚Ìî•ñ‚ğ
  typeid‰‰Zq‚É‚æ‚Á‚Ä•\¦‚·‚éƒvƒƒOƒ‰ƒ€‚ğì¬‚¹‚æ*/
int main() {
	//floatŒ^‚Ì•Ï”‚ğéŒ¾
	float TypeOf_F;
	//doubleŒ^‚Ì•Ï”‚ğéŒ¾
	double TypeOf_D;
	//long doubleŒ^‚Ì•Ï”‚ğéŒ¾
	long double TypeOf_L;
	//floatŒ^‚ÌŒ^‚Ì–¼‘O‚ğo—Í
	cout << "TypeOf_F‚ÌŒ^‚Ì–¼‘O: " << typeid(TypeOf_F).name() << "\n";
	//doubleŒ^‚ÌŒ^‚Ì–¼‘O‚ğo—Í
	cout << "TypeOf_D‚ÌŒ^‚Ì–¼‘O: " << typeid(TypeOf_D).name() << "\n";
	//long doubletŒ^‚ÌŒ^‚Ì–¼‘O‚ğo—Í
	cout << "TypeOf_L‚ÌŒ^‚Ì–¼‘O: " << typeid(TypeOf_L).name() << "\n";
}