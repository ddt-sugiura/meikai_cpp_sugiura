package day4.util;

import java.text.MessageFormat;

/*
 * 文字列をフォーマットに当てはめて変換するクラス
 */
public class MessageFormater {

	public static String MESSEGES_INPUT_EREMENT= "{0}を入力してください({1})";

	public static String MESSEGES_CHECK_PLATITUDE = "よろしいですか？よろしければ1を";

	public static String MESSEGES_DEFOLT_CREATE = "0で本日の日付になる";


	/*
	 * 入力を促すメッセージを作る
	 *
	 * String stringParts1 入力させたい属性
	 * String stringParts2 入力値の条件
	 *
	 * return 入力を促すための文字列
	 */
	public static String MessageForInput(String stringParts1,String stringParts2){

		String formatMessage = "";

		if(!stringParts1.isEmpty() && !stringParts2.isEmpty()){
			formatMessage = MessageFormat.format(MESSEGES_INPUT_EREMENT,stringParts1,stringParts2);
		}
		else{
			formatMessage = "メッセージ取得失敗_MessageForInput";
		}

		return formatMessage + "," + MESSEGES_DEFOLT_CREATE;

	}

	/*
	 * 入力値の確認を促すメッセージを作る
	 *
	 * String stringParts 入力値の変更内容についての文字列
	 *
	 * return 入力値の確認を促すための文字列
	 */
	public static String MessageForCheck(String stringParts){
		String formatMessage = "";
		if(!stringParts.isEmpty()){
			formatMessage = stringParts + MESSEGES_CHECK_PLATITUDE;
		}
		else{
			formatMessage = "メッセージ取得失敗_MessageForCheck";
		}
		return formatMessage;
	}

}
