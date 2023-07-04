package id;

import day4.Day;
import day4.util.CreateMessage;

public class DateId {

	private static int counter;

	private int id;

	static {

		Day today = new Day();

		System.out.println("今日は" + CreateMessage.toStringDay(today) + "です");
		counter = today.getYear() * 1000000 + today.getMonth() * 10000 + today.getDate() * 100;
	}

	public DateId(){
		id = ++counter;
	}

	public int getId(){
		return id;
	}
}


