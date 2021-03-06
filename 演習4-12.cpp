#include<climits>
#include<iomanip>
#include<iostream>

using namespace std;
/*演習4-12
  トランプの記号の四つの列挙子を持つ列挙体を定義せよ
  各列挙子の値は順に0123とし，
  例題同様キーボードから値を読み込み表示すること*/
int main() {
	//順にダイヤ，ハート，クラブ，スペードを列挙
	enum EnumerationTramp { e_DIAMOND, e_HEART, e_CLUB, e_SPADE, e_INVALID };
	//列挙子を選択するための変数
	int EnumeratorType = 0;
	//ループ実行
	do{
		//選択肢を表示
		cout << "0…ダイヤ 1…ハート 2…クラブ 3…スペード 4…終了\n";
		cout << "0〜4の整数を入力:";
		//選択を受け取る
		cin >> EnumeratorType;
	}
	// 0以上4以下でなければもう一度選択させる
	while (EnumeratorType < e_DIAMOND || EnumeratorType > e_INVALID);
	// Invalid以外を選択した場合に出力処理をする
	if (EnumeratorType != e_INVALID) {
		//列挙子のいずれかで変数を宣言
		EnumerationTramp SelectedMark = static_cast<EnumerationTramp>(EnumeratorType);
		//変数によって出力内容を変更する
		switch (SelectedMark)
		{
			//Invalid以外の選択肢の処理を実装
		case e_DIAMOND:
			//選択したマークを示す
			cout << "ダイヤを選択";
			//switchを抜ける
			break;

		case e_HEART:
			//選択したマークを示す
			cout << "ハートを選択";
			//switchを抜ける
			break;

		case e_CLUB:
			//選択したマークを示す
			cout << "クラブを選択";
			//switchを抜ける
			break;

		case e_SPADE:
			//選択したマークを示す
			cout << "スペードを選択";
			//switchを抜ける
			break;
			//例外の場合はスルー
		default:
			//switchを抜ける
			break;
		}
	}
}