package day4;

import static java.util.Calendar.*;

import java.util.GregorianCalendar;

import day4.derivationday.ADays;
import day4.util.ConstForDay;

//本課題で指定されている日付情報クラス
public class Day{

	private static int todayYear;
	private static int todayMonth;
	private static int todayDate;

	protected int year = todayYear;
	protected int month = todayMonth;
	protected int date = todayDate;

	static {
		GregorianCalendar today = new GregorianCalendar();
		todayYear = today.get(YEAR);
		todayMonth = today.get(MONTH) + 1;
		todayDate = today.get(DATE);
	}

	//指定がない場合は本日の日付になる
	public Day() {
	}

	public Day(int year) {
		this.year = year;
	}

	public Day(int year, int month) {
		this(year);
		//必ず実在する月(1～12)になる
		this.month = ADays.isRealMonth(month) ? month : (month > 12) ? 12 : 1;
	}

	public Day(int year, int month, int date) {
		this(year, month);
		int borderOfDate = ADays.getDayOfMonthMaximum(this.year, this.month - ConstForDay.MONTH_GAP);
		//必ず実在する日付(1～31,30,29,28)になる
		this.date = (date > borderOfDate) ? borderOfDate : date;
	}

	public Day(Day d) {
		set(d.year, d.month, d.date);
	}

	public int getYear() {
		return year;
	}

	public int getMonth() {
		return month;
	}

	public int getDate() {
		return date;
	}

	public void setYear(int year) {
		this.year = year;
	}

	public void setMonth(int month) {
		this.month = month;
	}

	public void setDate(int date) {
		this.date = date;
	}

	public void set(int year, int month, int date) {
		this.year = year;
		this.month = month;
		this.date = date;
	}
}