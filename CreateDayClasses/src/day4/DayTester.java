package day4;

import java.util.InputMismatchException;
import java.util.Scanner;

//class DateID{
//	private static int counter;
//	private int id;
//
//	static {
//		GregorianCalendar today = new GregorianCalendar();
//		int y = today.get(YEAR);
//		int m = today.get(MONTH) + 1;
//		int d = today.get(DATE);
//
//		System.out.printf("今日は%04d年%02d月%02d日です．\n", y, m ,d);
//		counter = y * 1000000 + m * 10000 + d * 100;
//	}
//
//	public DateID(){
//		id = ++counter;
//	}
//
//	public int getId(){
//		return id;
//	}
//}

//public class DateIdTester {
//
//	public static void main(String[] args){
//		DateID a = new DateID();
//		DateID b = new DateID();
//		DateID c = new DateID();
//
//		System.out.println("aの識別番号：" + a.getId());
//		System.out.println("bの識別番号：" + b.getId());
//		System.out.println("cの識別番号：" + c.getId());
//	}
//}

public class DayTester {

	private static int ERR_INT = Integer.MIN_VALUE;

	private static String[] OUT_MESSEGES = {"年を入力してください(4桁)","月を入力してください(1or2桁)","日付を入力してください(1or2桁)"};

	private static String CHECK_PLATITUDE = "よろしければ1を";

	public static void main(String[] args) {

		Scanner stdIn = new Scanner(System.in);
		System.out.println("テストを行います");
		while (true) {
			int judgeNum = inputInteger("1:本日の日付確認 2:閏年確認 3:日と日の比較 0を入力で終了",stdIn);
			if (judgeNum == 0) {
				System.out.println("テストを終了します");
				break;
			}
			if (judgeNum == ERR_INT) {
				System.out.println("テストを強制終了します");
				break;
			}
			switch (judgeNum) {
			case 1:
				Day toDay = new Day();
				System.out.println("本日は" + toDay.toString() + "です");
				System.out.println("今年の " + toDay.elapsedDays() + " 日目");
				System.out.println("今年の残りはあと " + toDay.remainedDays() + " 日");
				break;
			case 2:
				boolean breakFrg = false;
				int testYear = 0;
				while(!breakFrg){
					testYear = inputInteger(OUT_MESSEGES[0] +  ",0で今年の西暦",stdIn);
					if(testYear == 0){
						Day defoltYear = new Day();
						testYear=defoltYear.getYear();
						breakFrg = true;
					}
					else{
						breakFrg = yearCheck(testYear,stdIn);
					}
				}
				if(Day.isLeap(testYear)){
					System.out.println(testYear + "は閏年です");
				}
				else{
					System.out.println(testYear + "は閏年ではありません");
				}
				break;
			case 3:
				compareTwoDays(stdIn);
			}
		}
		stdIn.close();
	}

	public static int inputInteger(String messegeForInput,Scanner stdIn){
		int resultNum = ERR_INT;
		int countOfException = 0;
		while (countOfException < 3){
			//Scanner stdIn = new Scanner(System.in);
			try{
				System.out.println(messegeForInput);
				resultNum = stdIn.nextInt();
				break;
			}
			catch(InputMismatchException e) {
					System.out.println("数字を入力してください");
					countOfException++;
					stdIn.next();
			}
//			finally{
//				stdIn.close();
//			}
		}
		if(countOfException >= 3){
			System.out.println(countOfException + "回不正な値が入力されました,処理を中断します");
		}
		return resultNum;
	}

	public static boolean yearCheck(int testYear,Scanner stdIn){
		boolean resultbool = false;
		if(testYear >= 1000 && testYear <= 9999){
			int jebgeNum = 1;
			if(testYear < 1900){
				jebgeNum = inputInteger("遠い昔の年ですがよろしいですか？" + CHECK_PLATITUDE,stdIn);
			}
			else if(testYear > 2100){
				jebgeNum = inputInteger("かなり未来の年ですがよろしいですか？" + CHECK_PLATITUDE,stdIn);
			}
			if(jebgeNum == 1){
				resultbool = true;
			}
		}
		else{
			System.out.println("数字を4桁で入力してください");
		}
		return resultbool;
	}

	public static boolean dayCheck(int testday,boolean checkFrg,Scanner stdIn){
		boolean resultbool = false;
		if(testday >= 0 && testday <= 99){
			int jebgeNum = 1;
			if(checkFrg){
				jebgeNum = inputInteger("自動で修正されますがよろしいですか？" + CHECK_PLATITUDE,stdIn);
			}
			if(jebgeNum == 1){
				resultbool = true;
			}
		}
		else{
			System.out.println("数字を1桁か2桁で入力してください");
		}
		return resultbool;
	}

	public static void compareTwoDays(Scanner stdIn){
		System.out.println("一日目を指定してください");
		Day testDay = creatDay(stdIn);
		System.out.println(testDay.toString() + "と比べる日付を指定してください");
		Day otherDay = creatDay(stdIn);
		System.out.println(testDay.differenceOfDays(otherDay) + "です");
	}

	public static Day creatDay(Scanner stdIn){
		boolean breakFrg1 = false;
		int testYear = 0;
		while(!breakFrg1){
			testYear = inputInteger(OUT_MESSEGES[0] +  ",0で本日の日付になる",stdIn);
			if(testYear == 0){
				Day returnDay = new Day();
				return returnDay;
			}
			breakFrg1 = yearCheck(testYear,stdIn);
		}
		boolean breakFrg2 = false;
		boolean checkFrg2 = false;
		int testMonth = 0;
		while(!breakFrg2){
			testMonth = inputInteger(OUT_MESSEGES[1] +  ",0で本日の日付になる",stdIn);
			if(testMonth == 0){
				Day returnDay = new Day(testYear);
				return returnDay;
			}
			checkFrg2 = !Day.isRealMonth(testMonth);
			breakFrg2 = dayCheck(testMonth,checkFrg2,stdIn);
		}
		boolean breakFrg3 = false;
		boolean checkFrg3 = false;
		int testDate = 0;
		while(!breakFrg3){
			testDate = inputInteger(OUT_MESSEGES[2] +  ",0で本日の日付になる",stdIn);
			if(testDate == 0){
				Day returnDay = new Day(testYear,testMonth);
				return returnDay;
			}
			checkFrg3 = !Day.isRealDate(testYear,testMonth,testDate);
			breakFrg3 = dayCheck(testDate,checkFrg3,stdIn);
		}
		Day returnDay = new Day(testYear,testMonth,testDate);
		return returnDay;

	}
}
