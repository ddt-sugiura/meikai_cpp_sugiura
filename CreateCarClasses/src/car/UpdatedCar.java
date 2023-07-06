package car;
/*
 * 演習12-1で実装したクラス
 */
public class UpdatedCar extends Car {

	private double totalDistance;

	public UpdatedCar(String name, int width, int height, int length, double fuel, Day purchaseDay) {
		super(name, width, height, length, fuel, purchaseDay);
		totalDistance = 0;
	}

	//移動時の処理に総走行距離を加算する処理を追加
	public boolean movePuls(double dx,double dy){
		boolean isMove = super.move(dx, dy);
		if(isMove){
			totalDistance += Math.sqrt(dx * dx + dy * dy);
		}
		return isMove;
	}

	public double getTotalDistance(){
		return totalDistance;
	}

	//燃料を補充するメソッド
	public void RefillFuel(double addedFule){
		super.setFuel(getFuel() + addedFule);
	}

}
