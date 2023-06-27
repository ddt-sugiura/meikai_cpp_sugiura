package day4.derivationday;

import day4.Day;
import day4.util.ConstForDay;

/*
 * Dayクラスの継承クラスをさらに継承したクラス
 * 様々な条件下での合計日数を算出する
 */
public class CountOfDays extends ADays {

	//元旦からの経過日数
	private int elapsedDays;
	//年越しまでの残り日数
	private int remainedDays;

	public CountOfDays() {
		super();
		elapsedDays = countElapsedDays();
		remainedDays = countRemainedDays();
	}

	public CountOfDays(Day day) {
		super(day);
		elapsedDays = countElapsedDays();
		remainedDays = countRemainedDays();
	}

	public int getterElapsedDays() {
		return elapsedDays;
	}

	public int getterRemainedDays() {
		return remainedDays;
	}

	/*
	 * このクラスの日付情報と引数の日付情報を比較する
	 *
	 * Day otherDay：比較対象の日付情報
	 * return 二つの日付の差分日数,前後は正負で判定
	 */
	public int countCompareDays(Day otherDay) {
		if (equalTo(otherDay)) {
			return 0;
		}
		CountOfDays otherCounts = new CountOfDays(otherDay);
		int totalDays = ConstForDay.ERR_INT;
		if (this.year == otherCounts.year) {
			totalDays = otherCounts.elapsedDays - this.elapsedDays;
		} else {
			if (otherCounts.year > this.year) {
				totalDays = 0;
				totalDays += otherCounts.elapsedDays + this.remainedDays;
				totalDays += this.totalEveryYear(this.year, otherCounts.year);
			} else if (otherCounts.year < this.year) {
				totalDays = 0;
				totalDays -= this.elapsedDays + otherCounts.remainedDays;
				totalDays -= this.totalEveryYear(otherCounts.year, this.year);
			}
		}
		return totalDays;
	}

	public boolean equalTo(Day otherDay) {
		return year == otherDay.getYear() && month == otherDay.getMonth() && date == otherDay.getDate();
	}

	/*
	 * 元旦からの経過日数を数える
	 *
	 * return 経過日数
	 */
	private int countElapsedDays() {
		int totalDays = 0;
		for (int i = 1; i < month; i++) {
			totalDays += getDayOfMonthMaximum(year, i - ConstForDay.MONTH_GAP);
		}
		totalDays += date;
		return totalDays;
	}

	/*
	 * 年越しまでの残り日数を数える
	 *
	 * return 残り日数
	 */
	private int countRemainedDays() {
		int totalDays = 0;
		for (int i = 12; i > month; i--) {
			totalDays += getDayOfMonthMaximum(year, i - ConstForDay.MONTH_GAP);
		}
		totalDays += (getDayOfMonthMaximum(year, month - ConstForDay.MONTH_GAP) - date);
		return totalDays;
	}

	/*
	 * 年の差だけ365か366を加算する
	 *
	 * int startYear：年(西暦) int endYear：年(西暦)
	 * return 合計日数
	 */
	private int totalEveryYear(int startYear, int endYear) {
		int totalDays = 0;
		for (int i = 1; i < endYear - startYear; i++) {
			totalDays += getDayOfYearMaximum(startYear + i);
		}
		return totalDays;
	}
}
