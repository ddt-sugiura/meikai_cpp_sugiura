package day4.controller;

import day4.util.ConstForDay;
import day4.util.MasterInputer;

//実装したクラスで動確するためのテスト用コントローラークラス
public class DayControllers {

	private boolean stopFlg;

	private InformsDay informDay;

	private DaysDetail daysDetail;



	public DayControllers() {
		stopFlg = false;
		//テスト用に実装したクラスをnewする
		informDay = new InformsDay();
		daysDetail = new DaysDetail();
	}

	public void testLogic() {

		try {
			System.out.println("テストを行います");
			//無限ループで0を入力するまでテストを実行する
			while (!stopFlg) {
				int judgeNum = MasterInputer.inputInteger("1:本日の日付確認 2:閏年確認 3:日と日の比較 0を入力で終了");
				if (judgeNum == 0) {
					System.out.println("テストを終了します");
					break;
				}
				//数字の取得の際にエラーが起きた場合強制終了し無限ループを抜け出す
				if (judgeNum == ConstForDay.ERR_INT) {
					System.out.println("テストを強制終了します");
					break;
				}
				switch (judgeNum) {
				//日付の情報を正しく出力できるかのテスト
				case 1:
					informDay.informToday();
					break;
				//入力された西暦が閏年か否かを判定できるかのテスト
				case 2:
					informDay.informIsLeap();
					break;
				//指定された二つの日付を比較し，正しい判定結果を出力できるかのテスト
				case 3:
					daysDetail.compareTwoDays();
					break;
				}
			}
		} finally {
			//無限ループ終了後にスキャナーをクローズさせる
			MasterInputer.closeScanner();
		}
	}

}
