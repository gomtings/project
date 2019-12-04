class Cube {
	private double side;	// 정육면체의 한변
	Cube(){
		side=0;
	}
	Cube(int side){
		this.side=side;
	}
	public double getSide() {
		return side;
	}
	public double getVolume() {
		return side*side*side;
	}
}
public class aa5{
	public static void main(String[] args){
		Cube obj = new Cube( 3);
		System.out.println(obj.getSide());
		System.out.println(obj.getVolume());
	}
}
