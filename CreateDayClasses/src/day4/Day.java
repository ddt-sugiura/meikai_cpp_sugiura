package day4;

import static java.util.Calendar.*;

import java.util.GregorianCalendar;

public class Day {

	// private int year=1;
	// private int month=1;
	// private int date=1;

	private static int todayYear;
	private static int todayMonth;
	private static int todayDate;
	private static int LOWEST_YEAR = 1900;
	private static int ERR_INT = Integer.MAX_VALUE;

	private int year = todayYear;
	private int month = todayMonth;
	private int date = todayDate;

	static {
		GregorianCalendar today = new GregorianCalendar();
		todayYear = today.get(YEAR);
		todayMonth = today.get(MONTH) + 1;
		todayDate = today.get(DATE);
	}

	// y年は閏年か？
	public static boolean isLeap(int y) {
		return y % 4 == 0 && y % 100 != 0 || y % 400 == 0;
	}

	public static boolean isRealMonth(int m) {
		return m >= 1 && m <= 12;
	}

	public static boolean isRealDate(int y,int m,int d) {
		if(d > 31 || d < 1){
			return false;
		}
		int limitday = -1;
		if(m != 2){
			if(m <= 1||m == 3||m == 5||m == 7||m == 8||m == 10||m >= 12){
				limitday = 31;
			}
			else if(m == 4||m == 6||m == 9||m == 11||m == 9||m == 10){
				limitday = 30;
			}
		}
		else{
			if(isLeap(y)){
				limitday = 29;
			}
			else{
				limitday = 28;
			}
		}
		return d <= limitday;
	}

	public Day() {
	}

	public Day(int year) {
		this.year = (year < LOWEST_YEAR) ? LOWEST_YEAR : year;
	}

	public Day(int year, int month) {
		this(year);
		this.month = (month < 1) ? 1 : (month > 12) ? 12 : month;
	}

	public Day(int year, int month, int date) {
		this(year, month);
		int borderOfDate = getActualMaximum(this.year, this.month);
		this.date = (date > borderOfDate) ? borderOfDate : date;
	}

	public Day(Day d) {
		set(d.year, d.month, d.date);
	}

	public static int getActualMaximum(int year, int month) {
		GregorianCalendar officalDay = new GregorianCalendar();
		officalDay.set(year, month, 0);
		return officalDay.get(DATE);
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

	// 閏年か？
	public boolean isLeap() {
		return isLeap(year);
	}

	public int dayOfWeek() {
		int y = year;
		int m = month;
		if (m == 1 || m == 2) {
			y--;
			m += 12;
		}
		return (y + y / 4 - y / 100 + y / 400 + (13 * m + 8) / 5 + date) % 7;
	}

	public boolean equalTo(Day d) {
		return year == d.year && month == d.month && date == d.date;
	}

	public String toString() {
		String[] wd = { "日", "月", "火", "水", "木", "金", "土" };
		return String.format("%04d年%02d月%02d日(%s)", year, month, date, wd[dayOfWeek()]);
	}

	public int elapsedDays() {
		int totalDays = 0;
		for (int i = 1; i < this.month; i++) {
			totalDays += getActualMaximum(this.year, i);
		}
		totalDays += this.date;
		return totalDays;
	}

	public int remainedDays() {
		int totalDays = 0;
		for (int i = 12; i > this.month; i--) {
			totalDays += getActualMaximum(this.year, i);
		}
		totalDays += (getActualMaximum(this.year, this.month) - this.date);
		return totalDays;
	}

	public String differenceOfDays(Day otherDay){

		int resultDays = compareDays(otherDay);
		String FixedMessege = otherDay.toString() + "は";
		String resultMessege;

		if(resultDays == 0){
			resultMessege = "同じ日";
		}
		else if(resultDays > 0){
			resultMessege = this.toString() + "の" +  resultDays + "日後";
		}
		else{
			resultMessege = this.toString() + "の" + -resultDays + "日前";
		}
		return FixedMessege + resultMessege;
	}

	public int compareDays(Day otherDay) {
		int totalDays = ERR_INT;
		if(this.year == otherDay.year){
			totalDays = otherDay.elapsedDays() - this.elapsedDays();
		}
		else{
			if(otherDay.year > this.year){
				totalDays = 0;
				totalDays += otherDay.elapsedDays() + this.remainedDays();
				totalDays += this.totalEveryYear(this.year, otherDay.year);
			}
			else if(otherDay.year < this.year){
				totalDays = 0;
				totalDays -= this.elapsedDays() + otherDay.remainedDays();
				totalDays -= this.totalEveryYear(otherDay.year, this.year);
			}
		}
		return totalDays;
	}

	private int totalEveryYear(int startYear,int endYear){
		int totalDays = 0;
		for(int i = 1;i < endYear-startYear;i++){
			Day tempDay = new Day(this.year+i);
			totalDays += tempDay.isLeap() ? 366:365;
		}
		return totalDays;
	}

}

// 改変前のクラス
/*
 * public class Day {
 *
 * private int year=1; private int month=1; private int date=1;
 *
 * //y年は閏年か？ public static boolean isLeap(int y){ return y % 4 == 0 && y % 100
 * != 0 || y % 400 == 0; }
 *
 * public Day(){} public Day(int year){this.year = year;} public Day(int
 * year,int month){this(year);this.month=month;} public Day(int year,int
 * month,int date){this(year,month);this.date=date;} public Day(Day
 * d){set(d.year,d.month,d.date);}
 *
 * public int getYear(){return year;} public int getMonth(){return month;}
 * public int getDate(){return date;}
 *
 * public void setYear(int year){this.year=year;} public void setMonth(int
 * month){this.month=month;} public void setDate(int date){this.date=date;}
 *
 * public void set(int year,int month,int date){ this.year = year; this.month =
 * month; this.date = date; }
 *
 * //閏年か？ public boolean isLeap(){return isLeap(year);}
 *
 * public int dayOfWeek(){ int y = year; int m = month; if(m==1||m==2){ y--; m
 * += 12; } return (y + y/4 - y/100 + y/400 + (13*m+8)/5 + date)%7; }
 *
 * public boolean equalTo(Day d){ return year == d.year && month == d.month &&
 * date == d.date; }
 *
 * public String toString(){ String[] wd = {"日","月","火","水","木","金","土"}; return
 * String.format("%04d年%02d月%02日(%s)", year,month,date,wd[dayOfWeek()]); }
 *
 * }
 */
