package day4.derivationday;

import static java.util.Calendar.*;

import day4.Day;
import day4.util.ConstForDay;

/*
 * 課題で作ったDayクラスを継承したクラス
 * 日付情報を生成する上で必用な情報を取得する機能がある
 */
public class ADays  extends Day{

	public ADays() {
		super();
	}

	public ADays(Day day) {
		super(day);
	}

	/*
	 * 指定した年が閏年か否かを判定する
	 *
	 * int y : 年(西暦)
	 * return 判定結果,閏年ならtrue
	 */
	public static boolean isLeap(int y) {
		return y % 4 == 0 && y % 100 != 0 || y % 400 == 0;
	}

	/*
	 * 指定した年の全日数を取得する
	 *
	 * int y : 年(西暦)
	 * return 指定した年の全日数(365か366)
	 */
	public static int getDayOfYearMaximum(int y){
		return isLeap(y) ? ConstForDay.ALLDATE_OF_YEAR_LEAP:ConstForDay.ALLDATE_OF_YEAR;
	}

	/*
	 * 月の値として正しいか判定する
	 *
	 * int m : 月
	 * return 判定結果,正しければtrue
	 */
	public static boolean isRealMonth(int m) {
		return m >= ConstForDay.LOWEST_VALUE && m <= ConstForDay.ALLMONTH_OF_YEAR;
	}

	/*
	 * 指定した月の全日数を取得する
	 *
	 * int y：年(西暦) int m：月
	 * return 指定した月の最大日数(28,29,30,31)
	 */
	public static int getDayOfMonthMaximum(int y, int m) {
		if(!isRealMonth(m + 1)){
			return ConstForDay.ERR_INT;
		}
		if(m != FEBRUARY){
			if(m == JANUARY||m == MARCH||m == MAY||m == JULY||m == AUGUST||m == OCTOBER||m == DECEMBER){
				return ConstForDay.ALLDATE_OF_MONTH_MAX;
			}
			else if(m == APRIL||m == JUNE||m == SEPTEMBER||m == OCTOBER||m == NOVEMBER){
				return  ConstForDay.ALLDATE_OF_MONTH_SECOND;
			}
		}
		else{
			if(isLeap(y)){
				return  ConstForDay.ALLDATE_OF_FEB_LEAP;
			}
			else{
				return  ConstForDay.ALLDATE_OF_FEB;
			}
		}
		return ConstForDay.ERR_INT;
	}

	public boolean isLeap() {
		return isLeap(year);
	}

	public int getDayOfYearMaximum(){
		return getDayOfYearMaximum(year);
	}

	public boolean isRealMonth(){
		return isRealMonth(month);
	}

	public int getDayOfMonthMaximum() {
		return getDayOfMonthMaximum(year,month);
	}

}
