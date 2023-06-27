package day4.derivationday;

import day4.Day;

/*
 * 課題で作ったDayクラスを継承したクラス
 * 指定された日付情報がカレンダー上に存在するか判定する
 */
public class JudgeOfDays extends Day {

	private boolean isRealDate;
	//親クラスのmonth,dateとは別で保持する
	private int month;
	private int date;

	public JudgeOfDays(int year, int month) {
		//親クラスのmonthは自動修正されるが自クラスのものは修正されない
		super(year,month);
		this.month = month;
		setRealDate(calRealDate());
	}

	public JudgeOfDays(int year, int month, int date) {
		//親クラスのmonth,dateは自動修正されるが自クラスのものは修正されない
		super(year, month,date);
		this.month = month;
		this.date = date;
		setRealDate(calRealDate());
	}

	/*
	 * 指定された日付情報がカレンダー上に存在するか判定する
	 *
	 * return 判定結果,カレンダー上にある日付ならtrue
	 */
	private boolean calRealDate() {
		if(this.month != super.month){
			return false;
		}
		if(this.date != super.date){
			return false;
		}
		return true;
	}

	public void setRealDate(boolean isRealDate) {
		this.isRealDate = isRealDate;
	}

	public boolean getRealDate() {
		return this.isRealDate;
	}


}
