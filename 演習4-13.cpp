#include<climits>
#include<iomanip>
#include<iostream>

using namespace std;
/*演習4-13
  性別，季節，曜日などを表す列挙体を自由に定義し，
  それを用いたプログラムを作成せよ*/
int main() {
	//性別を列挙
	enum EnumerationSex { e1_MAN = 1, e1_WOMAN, e1_INVALID = 0 };
	//季節を列挙
	enum EnumerationSeason { e2_SPRING = 1, e2_SUMMER, e2_AUTUMN, e2_WINTER, e2_INVALID = 0 };
	//曜日を列挙
	enum EnumerationSevenday { e3_SUN = 1, e3_MON, e3_TUES, e3_WED, e3_THURS, e3_FRI, e3_SAT, e3_INVALID = 0 };
	//列挙子を選択するための変数
	int SexNo, SeasonNo, SevenNo;
	//ループ実行
	do {
		//選択肢を表示
		cout << "1:男性 2:女性\n";
		cout << "自分の性別を入力,0で終了:";
		//選択を受け取る
		cin >> SexNo;
	}
	// 0以上4以下でなければもう一度選択させる
	while (SexNo < e1_INVALID || SexNo > e1_WOMAN);
	// 0が入力されたときの分岐
	if (SexNo == 0) {
		//強制終了する
		return 0;
	}
	//ループ実行
	do {
		//選択肢を表示
		cout << "1:春 2:夏 3:秋 4:冬\n";
		cout << "誕生日の季節を入力,0で終了:";
		//選択を受け取る
		cin >> SeasonNo;
	}
	// 0以上4以下でなければもう一度選択させる
	while (SeasonNo < e2_INVALID || SeasonNo > e2_WINTER);
	// 0が入力されたときの分岐
	if (SeasonNo == 0) {
		// 強制終了する
		return 0;
	}
	//ループ実行
	do {
		//選択肢を表示
		cout << "1:日 2:月 3:火 4:水 5:木 6:金 7:土\n";
		cout << "誕生日の曜日を入力,0で終了:";
		//選択を受け取る
		cin >> SevenNo;
	}
	// 0以上4以下でなければもう一度選択させる
	while (SevenNo < e3_INVALID || SeasonNo > e3_SAT);
	// 0が入力されたときの分岐
	if (SeasonNo == 0) {
		// 強制終了する
		return 0;
	}
	//結果を出力するための変数
	string ResultSlelct = "｛";
	//列挙子のいずれかで変数を宣言：性別
	EnumerationSex SelectedSex = static_cast<EnumerationSex>(SexNo);
	//列挙子のいずれかで変数を宣言：季節
	EnumerationSeason SelectedSeason = static_cast<EnumerationSeason>(SeasonNo);
	//列挙子のいずれかで変数を宣言：曜日
	EnumerationSevenday SelectedSeven = static_cast<EnumerationSevenday>(SevenNo);
	//変数によって出力内容を変更する
	switch (SelectedSex)
	{
		//Invalid以外の選択肢の処理を実装
	case e1_MAN:
		ResultSlelct += "　男性：";
		break;
	case e1_WOMAN:
		ResultSlelct += "　女性：";
		break;
	default:
		break;
	}
	switch (SelectedSeason)
	{
		//Invalid以外の選択肢の処理を実装
	case e2_SPRING:
		ResultSlelct += "　春の";
		break;
	case e2_SUMMER:
		ResultSlelct += "　夏の";
		break;
	case e2_AUTUMN:
		ResultSlelct += "　秋の";
		break;
	case e2_WINTER:
		ResultSlelct += "　冬の";
			break;
	default:
		break;
	}
	switch (SelectedSeven)
	{
		//Invalid以外の選択肢の処理を実装
	case e3_SUN:
		ResultSlelct += "　春生まれ：";
		break;
	case e3_MON:
		ResultSlelct += "　夏生まれ：";
		break;
	case e3_TUES:
		ResultSlelct += "　秋生まれ：";
		break;
	case e3_WED:
		ResultSlelct += "　冬生まれ：";
		break;
	case e3_THURS:
		ResultSlelct += "　春生まれ：";
		break;
	case e3_FRI:
		ResultSlelct += "　夏生まれ：";
		break;
	case e3_SAT:
		ResultSlelct += "　秋生まれ：";
	default:
		break;
	}
	//列挙子で計算した値で占いの結果を出す
	int FortuneOfEnumeration = (SexNo+SeasonNo+SevenNo+SevenNo)%5 ;
	//計算結果で分岐を起こす
	switch (FortuneOfEnumeration) {
		//占い結果を書き加える
	case 0:
		ResultSlelct += "　大吉";
		break;
	case 1:
		ResultSlelct += "　中吉";
		break;
	case 2:
		ResultSlelct += "　小吉";
		break;
	case 3:
		ResultSlelct += "　吉";
		break;
	case 4:
		ResultSlelct += "　凶";
		break;
	default:
		break;
	}
	//最後に括弧を閉じる
	ResultSlelct += "　}";
	//すべての結果を出力する
	cout << ResultSlelct;
	return 0;
}