#include<cctype>
#include<climits>
#include<iostream>

using namespace std;
/*演習4-1
 すべての文字について，数字/英大文字/英小文字/記号文字などの文字列がわかる
 一覧表を出力するプログラムを作成せよ*/
int main() {
	//1行目にタイトルを出力して改行
	cout << "一覧表\n";
	//フォーマット調整のため空白を出力
	cout << "   ";
	//2行目に横の項目名を作る
	for (int horizontal_name = 0; horizontal_name < 16; horizontal_name++) {
		//16進数で出力
		cout << " " << hex << horizontal_name;
	}
	//項目名の下に仕切りをつくるため3行目に改行
	cout << "\n";
	//フォーマット調整のため空白を出力
	cout << "   ";
	//横線を引く
	for (int horizontal_no = 0; horizontal_no < 16; horizontal_no++) {
		cout << "--";
	}
	//4行目へ改行
	cout << "\n";
	char onlychar;
	for (int vartical = 0; vartical <16 ; vartical++) {
		//行の項目名を出力して縦線を引く
		cout << hex << vartical << " |";
		//列の数だけ繰り返し出力して改行するループ
		for (int horizontal_no = 0; horizontal_no <16; horizontal_no++) {
			onlychar = char(vartical *16 + horizontal_no);
			switch (onlychar)
			{
				//特殊な動作をする文字を可視化する
			case '\a':cout << "\\a"; break;
			case '\b':cout << "\\b"; break;
			case '\f':cout << "\\f"; break;
			case '\n':cout << "\\n"; break;
			case '\r':cout << "\\r"; break;
			case '\t':cout << "\\t"; break;
			case '\v':cout << "\\v"; break;
				//上記に該当しない文字を出力する
			default: cout << ' ' << (isprint(onlychar) ? onlychar : ' ');
			}
			if (onlychar == CHAR_MAX) break; //ループを終了させる
		}
		cout << "\n";
		if (onlychar == CHAR_MAX) break; //処理を終了させる
	}
}