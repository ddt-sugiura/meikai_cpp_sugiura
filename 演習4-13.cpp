#include<climits>
#include<iomanip>
#include<iostream>

using namespace std;

/*演習4-13
  性別，季節，曜日などを表す列挙体を自由に定義し，
  それを用いたプログラムを作成せよ*/

//定数で占い結果の文字列を宣言
const string FORTUNE_TEXT[5] = {"nomal","lucky","happy","fortunate","bliss"};

bool houseResultSex(string resultArange[2]) {
	//性別を列挙
	enum EnumerationSex { e1_MAN = 1, e1_WOMAN, e1_INVALID = 0 };
	//結果を選択するための数字を格納する変数
	int selectNo = 0;
	//ループ実行
	do {
		//選択肢を表示
		cout << "1:男性 2:女性\n";
		//0～2の値を入力させる
		cout << "自分の性別を入力,0で終了:";
		//選択を受け取る
		cin >> selectNo;
	}
	// 0以上2以下でなければもう一度選択させる
	while (selectNo < e1_INVALID || selectNo > e1_WOMAN);
	// 0が入力されたときの分岐
	if (selectNo == 0) {
		//中断することを報告
		cout << "中断します";
		//falseを返し，今後の処理をスルーさせる
		return false;
	}
	//列挙子のいずれかで変数を宣言
	EnumerationSex SelectedSex = static_cast<EnumerationSex>(selectNo);
	//列挙子による分岐で返す文字列の片方が決まる
	switch (SelectedSex)
	{
		//Invalid以外の選択肢の処理を実装
	case e1_MAN:
		resultArange[0] = "男";
		break;
	case e1_WOMAN:
		resultArange[0] = "女";
		break;
		//上記に該当しなければfalseを返す(エラー対策)
	default:
		return false;
		break;
	}
	//列挙子の値から該当する文字列をセット
	resultArange[1] = FORTUNE_TEXT[SelectedSex];
	//今後の処理を続行させるためtrueを返す
	return true;
}


bool houseResultSeason(string resultArange[2]) {
	//季節を列挙
	enum EnumerationSeason { e2_SPRING = 1, e2_SUMMER, e2_AUTUMN, e2_WINTER, e2_INVALID = 0 };
	//結果を選択するための数字を格納する変数
	int selectNo = 0;
	//ループ実行
	do {
		//選択肢を表示
		cout << "1:春 2:夏 3:秋 4:冬\n";
		//0～4の値を入力させる
		cout << "誕生日の季節を入力,0で終了:";
		//選択を受け取る
		cin >> selectNo;
	}
	// 0以上4以下でなければもう一度選択させる
	while (selectNo < e2_INVALID || selectNo > e2_WINTER);
	// 0が入力されたときの分岐
	if (selectNo == 0) {
		//中断することを報告
		cout << "中断します";
		//falseを返し，今後の処理をスルーさせる
		return false;
	}

	//列挙子のいずれかで変数を宣言
	EnumerationSeason SelectedSeason = static_cast<EnumerationSeason>(selectNo);
	//列挙子による分岐で返す文字列の片方が決まる
	switch (SelectedSeason)
	{
		//Invalid以外の選択肢の処理を実装
	case e2_SPRING:
		resultArange[0] = "春";
		break;
	case e2_SUMMER:
		resultArange[0] = "夏";
		break;
	case e2_AUTUMN:
		resultArange[0] = "秋";
		break;
	case e2_WINTER:
		resultArange[0] = "冬";
		break;
		//上記に該当しなければfalseを返す(エラー対策)
	default:
		return false;
		break;
	}
	//列挙子の値から該当する文字列をセット
	resultArange[1] = FORTUNE_TEXT[5 - SelectedSeason];
	//今後の処理を続行させるためtrueを返す
	return true;
}

bool houseResultSeven(string resultArange[2]) {
	//曜日を列挙
	enum EnumerationSevenday { e3_SUN = 1, e3_MON, e3_TUES, e3_WED, e3_THURS, e3_FRI, e3_SAT, e3_INVALID = 0 };
	//結果を選択するための数字を格納する変数
	int selectNo = 0;
	//ループ実行
	do {
		//選択肢を表示
		cout << "1:日 2:月 3:火 4:水 5:木 6:金 7:土\n";
		//0～7の値を入力させる
		cout << "誕生日の曜日を入力,0で終了:";
		//選択を受け取る
		cin >> selectNo;
	}
	// 0以上4以下でなければもう一度選択させる
	while (selectNo < e3_INVALID || selectNo >  e3_SAT);
	// 0が入力されたときの分岐
	if (selectNo == 0) {
		//中断することを報告
		cout << "中断します";
		//falseを返し，今後の処理をスルーさせる
		return false;
	}
	//列挙子のいずれかで変数を宣言：曜日
	EnumerationSevenday SelectedSeven = static_cast<EnumerationSevenday>(selectNo);
	//列挙子による分岐で返す文字列が二つとも決まる
	switch (SelectedSeven)
	{
		//Invalid以外の選択肢の処理を実装
	case e3_SUN:
		resultArange[0] = "日";
		resultArange[1] = FORTUNE_TEXT[4];
		break;
	case e3_MON:
		resultArange[0] = "月";
		resultArange[1] = FORTUNE_TEXT[2];
		break;
	case e3_TUES:
		resultArange[0] = "火";
		resultArange[1] = FORTUNE_TEXT[2];
		break;
	case e3_WED:
		resultArange[0] = "水";
		resultArange[1] = FORTUNE_TEXT[3];
		break;
	case e3_THURS:
		resultArange[0] = "木";
		resultArange[1] = FORTUNE_TEXT[3];
		break;
	case e3_FRI:
		resultArange[0] = "金";
		resultArange[1] = FORTUNE_TEXT[4];
		break;
	case e3_SAT:
		resultArange[0] = "土";
		resultArange[1] = FORTUNE_TEXT[1];
		break;
	default:
		//上記に該当しなければfalseを返す(エラー対策)
		return false;
		break;
	}
	//今後の処理を続行させるためtrueを返す
	return true;
}

int FortuneNunber(string resultElement) {

	//占い結果を数字で返すためのループ
	for (int i = 0; i < 5; i++) {
		//引数と定数でせんげんした配列内の文字列が一致した場合
		if (resultElement == FORTUNE_TEXT[i]) {
			//ループのカウント数をそのまま返す
			return i;
		}
	}
	//該当する文字列がなかった場合-1を返す(エラー対策)
	return -1;
}

int main() {
	
	//性別の文字列と占い結果の文字列を格納する変数
	string resultSex[2] = { "", FORTUNE_TEXT[0]};
	//季節の文字列と占い結果の文字列を格納する変数
	string resultSeason[2] = { "", FORTUNE_TEXT[0]};
	//曜日の文字列と占い結果の文字列を格納する変数
	string resultSeven[2] = { "", FORTUNE_TEXT[0]};
	//処理を行うか否かを判断するフラグ
	bool continueFlg = true;

	//処理の開始を報告
	cout << "占いを始めます\n";

	//flgがtrueの場合に関数を呼び出す
	if (continueFlg) {
		//性別に関する情報を受けとる
		continueFlg = houseResultSex(resultSex);
	}
	//flgがtrueの場合に関数を呼び出す
	if (continueFlg) {
		//季節に関する情報を受けとる
		continueFlg = houseResultSeason(resultSeason);
	}
	//flgがtrueの場合に関数を呼び出す
	if (continueFlg) {
		//曜日に関する情報を受けとる
		continueFlg = houseResultSeven(resultSeven);
	}

	//格納した文字列のうち，占い結果が入っている要素を新たに配列とする(曜日は二つ)
	string fortuneArange[4] = { resultSex[1] , resultSeason[1] , resultSeven[1] , resultSeven[1] };

	//列挙子で計算した値で占いの結果を出す
	int FortuneOfEnumeration = 0;

	//配列の要素数分ループさせる
	for (int i = 0; i < 4; i++) {
		//占い結果から数字を入手する
		int resultNo = FortuneNunber(fortuneArange[i]);
		//0以下の場合(エラー対策)
		if (resultNo < 0) {
			//flgをfalseにする
			continueFlg = false;
			//カウントを進めてループを終了させる
			i = 4;
		}
		//エラー対策にかからなかった場合
		else {
			//受け取った数値を加算させる
			FortuneOfEnumeration += resultNo;
		}
	}
	
	//最後に出力するメッセージを格納する変数
	string resultMessege = "";

	//計算結果で分岐を起こす
	switch (FortuneOfEnumeration%5) {
		//最終的な占い結果を書き加える
	case 0:
		resultMessege = "大吉";
		break;
	case 1:
		resultMessege = "中吉";
		break;
	case 2:
		resultMessege = "小吉";
		break;
	case 3:
		resultMessege = "吉";
		break;
	case 4:
		resultMessege = "凶";
		break;
		//該当しない場合はflgをfalseにする(エラー対策)
	default:
		continueFlg = false;
		break;
	}
	//flgがtrueの場合に処理をする
	if (continueFlg) {
		//変数によって出力内容を変更する
		cout << resultSex[0] << "性 : " << resultSeason[0] << "生まれ（" << resultSeven[0] << "）\n";
		//占い結果によって出力内容を変更する
		cout << "あなたは「" << resultMessege << "」です";
	}
	//処理の終了を報告
	cout << "占いを終了します";
}