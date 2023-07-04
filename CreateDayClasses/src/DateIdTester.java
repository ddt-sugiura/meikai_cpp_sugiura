import id.DateId;

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
