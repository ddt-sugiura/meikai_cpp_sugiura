#include<climits>
#include<iostream>

using namespace std;
/*演習4-3 
  整数リテラル 0 が8進リテラルであることを論理的に説明*/
int main() {
	//int型に1を入れる
	int IntInOne = 1;
	//基数を表示させる
	cout << showbase;
	//8進に変換し出力
	cout << "8進の1 :";
	//出力後改行
	cout << oct << IntInOne << "\n";
	//10進に変換し出力
	cout << "10進の1 :";
	//出力後改行
	cout << dec << IntInOne << "\n";
	//16進に変換し出力
	cout << "16進の1 :";
	//出力後改行
	cout << hex << IntInOne << "\n";
	//結論を出力
	cout << "8進リテラルの場合0が先頭につく，" << "\n" << "よって整数リテラル0は8進リテラルである";
}