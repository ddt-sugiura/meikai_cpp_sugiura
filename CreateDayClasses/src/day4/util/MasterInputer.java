package day4.util;

import java.util.InputMismatchException;
import java.util.Scanner;

/*
 * スキャナーを取り扱うクラス
 */
public class MasterInputer {

	private static Scanner stdIn;

	private static int BORDER_FORCE_QUIT = 3;

	static {
		stdIn = new Scanner(System.in);
	}

	private static int OnetimeScanner(String messegeForInput) {
		int resultNum = ConstForDay.ERR_INT;
		try {
			System.out.println(messegeForInput);
			resultNum = stdIn.nextInt();
		} catch (InputMismatchException e) {
			System.out.println("数字を入力してください");
			stdIn.next();
		}
		return resultNum;
	}

	/*
	 * 数字をインプットする
	 *
	 * String 入力を促すメッセージ
	 * return インプットした数字，エラーの場合ERR_INT
	 */
	public static int inputInteger(String messegeForInput) {
		int errorCounter = 0;
		int resultNum = ConstForDay.ERR_INT;
		boolean finishFlg = false;
		while (!finishFlg) {
			resultNum = OnetimeScanner(messegeForInput);
			if(resultNum == ConstForDay.ERR_INT){
				errorCounter++;
			}
			else{
				finishFlg = true;
				errorCounter = 0;
			}
			if(errorCounter >= BORDER_FORCE_QUIT){
				System.out.println(errorCounter + "回不正な値が入力されました,処理を中断します");
				finishFlg = true;
			}
		}
		return resultNum;
	}

	//使わなかったメソッドのためコメントアウト
//	public String inputString(String messegeForInput) {
//		String resultMessege = "エラー";
//		while (errorCounter < BORDER_FORCE_QUIT) {
//			System.out.println(messegeForInput);
//			resultMessege = stdIn.next();
//			if (resultMessege.isEmpty() || resultMessege.equals("")) {
//				errorCounter++;
//				stdIn.next();
//			} else {
//				break;
//			}
//		}
//		if (errorCounter >= 3) {
//			resultMessege = "エラー";
//			System.out.println(errorCounter + "回不正な値が入力されました,処理を中断します");
//		} else {
//			errorCounter = 0;
//		}
//		return resultMessege;
//	}
//
	/*
	 * スキャーをクローズする
	 */
	public static void closeScanner() {
		stdIn.close();
		System.out.println("スキャナーのクローズに成功");
	}
}
