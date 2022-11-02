#include<climits>
#include<iomanip>
#include<iostream>
#include <format>
#include <stdio.h>
#include <string>
#include<sstream>
using namespace std;
/*演習5-11
六人の二科目(国数)の点数を読み込んで，科目ごとの合計，平均
学生ごとの合計，平均を求めるプログラムを作成せよ*/
int main() {
	//生徒の数を固定値で宣言
	int const STUDENTS_MAX = 6;
	//科目の数を固定値で宣言
	int const SUBJECT_MAX = 2;
	//科目の名前を固定値で宣言
	string const SUBJECT_NAME[SUBJECT_MAX] = {"国語","数学"};
	//点数を格納するint型の行列を宣言
	int schoolRecordPoint[STUDENTS_MAX][SUBJECT_MAX];
	//forループのカウントと生徒を指定する変数
	int countStudent = 0;
	//forループのカウントと科目を指定する変数
	int countSubject = 0;
	//生徒一人の合計点数を格納する配列
	int sumOneStudent[STUDENTS_MAX] = { 0 };
	//一科目の合計点数を格納する配列
	int sumOnlySubject[SUBJECT_MAX] = { 0 };

	//2重のループで行列に数字を入力
	for (countStudent = 0; countStudent < STUDENTS_MAX; countStudent++) {
			//受験番号は１番から
		cout << "受験番号" << countStudent + 1 << "番\n";
		//科目の数でループ
		for (countSubject = 0; countSubject < SUBJECT_MAX; countSubject++) {
			//各科目の点数入力を促す
			cout << SUBJECT_NAME[countSubject] << "の点数";
			//行列に点数を格納する
			cin >> schoolRecordPoint[countStudent][countSubject];
		}
	}
	//見やすくするように改行する
	cout << "\n";
	//2重のループで科目ごとの合計と平均を出力
	for (countSubject = 0; countSubject < SUBJECT_MAX; countSubject++) {
		//生徒の数でループ
		for (countStudent = 0; countStudent < STUDENTS_MAX; countStudent++) {
			//生徒一人の点数を加算する
			sumOnlySubject[countSubject] += schoolRecordPoint[countStudent][countSubject];
		}
		//合計を出力
		cout << SUBJECT_NAME[countSubject] << "の合計：" << sumOnlySubject[countSubject] <<"点\n";
		//平均を出力
		cout << SUBJECT_NAME[countSubject] << "の平均：" << sumOnlySubject[countSubject] / STUDENTS_MAX << "点\n";
	}
	//見やすくするように改行する
	cout << "\n";
	//2重のループで各生徒のの合計と平均を出力
	for (countStudent = 0; countStudent < STUDENTS_MAX; countStudent++) {
		//科目の数でループ
		for (countSubject = 0; countSubject < SUBJECT_MAX; countSubject++) {
			//科目ごとの点数を加算する
			sumOneStudent[countStudent] += schoolRecordPoint[countStudent][countSubject];
		}
		//合計を出力
		cout << "受験番号" << countStudent + 1 << "の合計：" << sumOneStudent[countStudent] << "点\n";
		//平均を出力
		cout << "受験番号" << countStudent + 1 << "の平均：" << sumOneStudent[countStudent] / SUBJECT_MAX << "点\n";
	}

}