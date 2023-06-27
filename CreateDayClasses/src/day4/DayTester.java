package day4;

import day4.controller.DayControllers;

//実装したソースで動確するためのテスト用メインクラス
public class DayTester {

	//コントローラークラスを呼び出し，各クラスにアクセスする
	public static void main(String[] args) {

		DayControllers dayControllers = new DayControllers();

		dayControllers.testLogic();
	}

}
