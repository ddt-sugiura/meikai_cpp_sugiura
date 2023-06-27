package day4.derivationday;
import static java.util.Calendar.*;

import day4.Day;
import day4.util.ConstForDay;

/*
 * Dayクラスの継承クラスをさらに継承したクラス
 * 曜日の情報も保持される
 */
public class WeekOfDays extends ADays {

	private static String[] OFFICAL_WEEK = { "日", "月", "火", "水", "木", "金", "土" };
	//曜日を特定する公式の定数
	private static int[] EQUATION_CONST = { 12,4,100,400,13,8,5 };

	public String nameOfWeekDay;

	public int numOfWeekDay;

	public WeekOfDays(){
		super();
		numOfWeekDay = NumOfWeekDay();
		nameOfWeekDay = getNameOfOfficel(numOfWeekDay);
	}

	public WeekOfDays(Day day){
		super(day);
		numOfWeekDay = NumOfWeekDay();
		nameOfWeekDay = getNameOfOfficel(numOfWeekDay);
	}

	public WeekOfDays(int weekNum){
		super();
		numOfWeekDay = weekNum;
		nameOfWeekDay = getNameOfOfficel(weekNum);
	}

	public WeekOfDays(Day day,int weekNum){
		super(day);
		numOfWeekDay = weekNum;
		nameOfWeekDay = getNameOfOfficel(weekNum);
	}

	public int NumOfWeekDay() {

		int y = getYear();
		int m = getMonth();
		int d = getDate();

		if (m == JANUARY || m == FEBRUARY) {
			y--;
			m += EQUATION_CONST[0];
		}
		return (y + y / EQUATION_CONST[1] - y / EQUATION_CONST[2] + y / EQUATION_CONST[3]
				+ (EQUATION_CONST[4] * m + EQUATION_CONST[5]) / EQUATION_CONST[6] + d)
				% ConstForDay.ALLDATE_OF_WEEK;
	}

	//曜日情報も含めた日付の情報をString型で受け取る
	public String getNameOfOfficel(int weekNum){
		return OFFICAL_WEEK[weekNum];
	}


}
