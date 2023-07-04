package day4.controller;

import day4.Day;
import day4.util.CreateMessage;
import day4.util.DayCreater;

/* 実装したクラスのメソッドを実施し日付の比較と
 * その比較結果を出力できるか動確するためのクラス
 */
public class DaysDetail {

	private CreateMessage createMessage;

	/* 二つの日付を取得し，その比較結果を
	 * X日前 or X日後 or 同じ日 のいずれかで判定し出力する
	 */
	public void compareTwoDays(){
		//一日目の日付情報を設定する
		System.out.println("一日目を指定してください");
		Day testDay = DayCreater.creatDay();
		createMessage = new CreateMessage(testDay);

		System.out.println(createMessage.toStringToday() + "と比べる日付を指定してください");
		//二日目の日付情報を設定する
		Day otherDay = DayCreater.creatDay();

		System.out.println(createMessage.differenceOfDays(otherDay) + "です");
	}

}
