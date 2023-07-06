package car;

/*
 * 演習12-1のために必要なクラス
 * 教科書から抜粋
 */
public class Car {
	private String name; //名前
	private int width; //幅
	private int height; //高さ
	private int length; //長さ
	private double x; //現在位置X座標
	private double y; //現在位置y座標
	private double fuel; //残り燃料
	private Day purchaseDay; //購入日

	public Car(String name,int width,int height,int length,
			double fuel,Day purchaseDay){
		this.name = name; this.width = width; this.height = height;
		this.length = length; this.fuel = fuel; x = y = 0.0;
		this.purchaseDay = new Day(purchaseDay);
		}

	public double getX(){ return x; }
	public double getY(){ return y; }
	public double getFuel(){ return fuel; }

	public Day getPurchaseDay(){
		return new Day(purchaseDay);
	}

	//スペック表示
	public void putSpec(){
		System.out.println("名前：" + name);
		System.out.println("車幅：" + width + "mm");
		System.out.println("車高：" + height + "mm");
		System.out.println("車長：" + length + "mm");
	}

	//X方向にdx,Y方向にdy移動
	public boolean move(double dx,double dy){
		double dist = Math.sqrt(dx * dx + dy * dy);
		if (dist > fuel){
			return false;
		}
		else{
			fuel -= dist;
			x += dx;
			y += dy;
			return true;
		}
	}

	/*
	 * 演習12-1で勝手に追加した
	 * fuelのsetter
	 */
	protected void setFuel(double fuel){
		this.fuel = fuel;
	}
}