package day4.util;

import day4.derivationday.ADays;
import day4.derivationday.JudgeOfDays;
/*
 * 日付情報を受けとる際に画面への出力内容を決めるクラス
 */
public class DayValidater {

	private static int returnNum;
	private static boolean breakFrg;
	private static boolean checkFrg;

	/*
	 * 年を指定させる
	 *
	 * return 年の値
	 */
	public static int decideYear(){
		initElement();
		while(!breakFrg){
			String inputMessage = MessageFormater.MessageForInput("年","4桁");
			returnNum = MasterInputer.inputInteger(inputMessage);
			if(returnNum == 0){
				return returnNum;
			}
			breakFrg = yearCheck(returnNum);
		}
		return returnNum;
	}

	/*
	 * 月を指定させる
	 *
	 * int year：年(西暦)
	 * return 月の値
	 */
	public static int decideMonth(int year){
		initElement();
		while(!breakFrg){
			String inputMessage = MessageFormater.MessageForInput("月","1or2桁");
			returnNum = MasterInputer.inputInteger(inputMessage);
			if(returnNum == 0){
				return returnNum;
			}
			checkFrg = !ADays.isRealMonth(returnNum);
			breakFrg = dayCheck(returnNum,checkFrg);
		}
		return returnNum;
	}

	/*
	 * 日付を指定させる
	 *
	 * int year：年(西暦) int month：月
	 * return 日付の値
	 */
	public static int decideDate(int year, int month) {
		initElement();
		while(!breakFrg){
			String inputMessage = MessageFormater.MessageForInput("日","1or2桁");
			returnNum = MasterInputer.inputInteger(inputMessage);
			if(returnNum == 0){
				return returnNum;
			}
			JudgeOfDays judgeOfDays = new JudgeOfDays(year,month,returnNum) ;
			checkFrg = !judgeOfDays.getRealDate();
			breakFrg = dayCheck(returnNum,checkFrg);
		}
		return returnNum;
	}

	//判定前に変数を初期させるためのメソッド
	private static void initElement(){
		returnNum = 0;
		breakFrg = false;
		checkFrg = false;
	}

	/*
	 * 指定された年の値が適切か判定
	 *
	 * int testYear：判定対象の年の値
	 * return 判定結果 OKならtrue
	 */
	private static boolean yearCheck(int testYear){
		boolean resultbool = false;
		if(testYear >= 1000 && testYear <= 9999){
			int jebgeNum = 1;
			if(testYear < 1900){
				String Messageforscan = MessageFormater.MessageForCheck("遠い昔の年ですが");
				jebgeNum = MasterInputer.inputInteger(Messageforscan);
			}
			else if(testYear > 2100){
				String Messageforscan = MessageFormater.MessageForCheck("かなり未来の年ですが");
				jebgeNum = MasterInputer.inputInteger(Messageforscan);
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

	/*
	 * 指定された月or日の値が適切か判定
	 *
	 * int testday：判定対象の月or日の値 boolean checkFrg：修正必用かの判定
	 * return 判定結果 OKならtrue
	 */
	private static boolean dayCheck(int testday,boolean checkFrg){
		boolean resultbool = false;
		if(testday >= 0 && testday <= 99){
			int jebgeNum = 1;
			if(checkFrg){
				String Messageforscan = MessageFormater.MessageForCheck("自動で修正されますが");
				jebgeNum = MasterInputer.inputInteger(Messageforscan);
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
}
