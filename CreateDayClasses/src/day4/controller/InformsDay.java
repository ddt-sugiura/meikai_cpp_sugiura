package day4.controller;

import day4.util.CreateMessage;
import day4.util.DayValidater;

/*実装したクラスのメソッドを実施し日付情報の出力と
 *閏年の判定ができるか動確するためのクラス*/
public class InformsDay {

	private CreateMessage createMessage;

	public InformsDay() {
		//出力メッセージ作成用のクラスをnewする
		createMessage = new CreateMessage();
	}

	//本日の日付をyyyy年m月s日(曜日)のフォーマットで出力
	public void informToday() {
		System.out.println(createMessage.toStringToday());
		System.out.println(createMessage.InfomeCountUpCountDown() + "です");
	}

	//入力した値を西暦とし,閏年の判定をする
	public void informIsLeap() {
		int testYear = 0;
		testYear = DayValidater.decideYear();
		System.out.println(createMessage.judgeLeaps(testYear));
	}

}
