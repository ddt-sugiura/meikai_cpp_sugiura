package day4.util;

import day4.Day;
/*
 * 日付情報を受け取り,その情報からDayクラスを生成するクラス
 */
public class DayCreater {

	public static Day creatDay(){

		Day returnDay;
		int tempYear = DayValidater.decideYear();

		//一つ目で0だった場合,すべて本日の情報と同じになる
		if(tempYear == 0){
			returnDay = new Day();
			return returnDay;
		}

		int tempMonth = DayValidater.decideMonth(tempYear);

		//0だった場合,月と日は本日と同じになる
		if(tempMonth == 0){
			returnDay = new Day(tempYear);
			return returnDay;
		}

		Day tempDay = new Day(tempYear,tempMonth);

		int tempDate = DayValidater.decideDate(tempDay.getYear(),tempDay.getMonth());

		//0だった場合,日のみ本日と同じになる
		if(tempDate == 0){
			return tempDay;
		}
		returnDay =  new Day(tempYear,tempMonth,tempDate);
		return returnDay;

	}



}
