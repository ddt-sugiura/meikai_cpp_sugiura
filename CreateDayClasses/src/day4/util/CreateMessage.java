package day4.util;

import day4.Day;
import day4.derivationday.ADays;
import day4.derivationday.CountOfDays;
import day4.derivationday.WeekOfDays;
/*
 * 出力するメッセージ内容を作るクラス
 */
public class CreateMessage extends ADays{

	private static CountOfDays today;

	private static WeekOfDays weekOfDays;

	public CreateMessage(Day day){
		super(day);
		today = new CountOfDays(day);
	}

	public CreateMessage() {
		super();
		today = new CountOfDays();
	}

	public String toStringToday() {
		return toStringDay(this);
	}

	/*
	 * 日付情報を文字列に変換して返す
	 *
	 * Day day：日付情報
	 * return 日付情報の文字列
	 */
	private String toStringDay(Day day) {
		weekOfDays = new WeekOfDays(day);
		return String.format("%04d年%02d月%02d日(%s)", day.getYear(), day.getMonth(), day.getDate(), weekOfDays.nameOfWeekDay);
	}

	/*
	 * 今年の残り日数と経過日数を文字列にして返す
	 *
	 * return 日付情報の文字列
	 */
	public String InfomeCountUpCountDown() {
		String InfomeCountUp = "今年の " + today.getterElapsedDays() + " 日目";
		String InfomeCountDown = "今年の残りはあと " + today.getterRemainedDays() + " 日";
		return InfomeCountUp + "," + InfomeCountDown;
	}

	/*
	 * 閏年の判定結果を文字列にして返す
	 *
	 * int testYear 判定基準の年
	 * return 判定結果
	 */
	public String judgeLeaps(int testYear) {
		if(ADays.isLeap(testYear)){
			return testYear + "は閏年です";
		}
		else{
			return testYear + "は閏年ではありません";
		}
	}

	/*
	 * 受け取った日情報と保持している日情報を比較した結果を文字列にして返す
	 *
	 * Day otherDay：比較対象の日付情報
	 * return 判定結果
	 */
	public String differenceOfDays(Day otherDay){


		int resultDays = today.countCompareDays(otherDay);
		String FixedMessege = this.toStringDay(otherDay) + "は";
		String resultMessege;

		if(resultDays == 0){
			resultMessege = "同じ日";
		}
		else if(resultDays > 0){
			resultMessege = this.toStringToday() + "の" +  resultDays + "日後";
		}
		else{
			resultMessege = this.toStringToday() + "の" + -resultDays + "日前";
		}
		return FixedMessege + resultMessege;
	}

}
