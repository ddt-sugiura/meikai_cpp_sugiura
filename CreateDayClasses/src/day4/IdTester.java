package day4;

public class IdTester {

	static int counter = 0;

	private int id;

	public IdTester(){
		id = ++counter;
	}

	public int getId(){
		return id;
	}

}
