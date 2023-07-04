package day4;

import day4.util.CreateMessage;

class DateId {

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

public class DateIdTester {
	public static void main(String[] args){
		DateId a = new DateId();
		DateId b = new DateId();
		DateId c = new DateId();

		System.out.println("aの認識番号："+ a.getId());
		System.out.println("bの認識番号："+ b.getId());
		System.out.println("cの認識番号："+ c.getId());
	}
}
