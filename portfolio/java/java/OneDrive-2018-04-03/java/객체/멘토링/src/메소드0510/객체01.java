package 메소드0510;
 class Car {
	
	String color;
	int gear;
	int speed;
	public Car(String string, int i, int j) {
		// TODO Auto-generated constructor stub
	}
	public void Car(String color,int gear,int speed){
		this.color=color;
		this.gear=gear;
		this.speed=speed;
	}
	public void changeGear(int gear){
		this.gear=gear;
		System.out.println("gear를"+gear+"로 변경 하였습니다.");
	}
	public void speedUp(){
		this.speed+=10;
		System.out.println("현재 속도는"+speed+"입니다. ");
	}
	public void speedDown(){
		this.speed-=10;
		System.out.println("현재 속도는"+speed+"입니다. ");
	}
}
public class 객체01 {
	public static void main(String[] args){
		Car obj = new Car("red" , 1 , 20);
		obj.changeGear(2);
		obj.speedUp();
		obj.speedDown();
	}
}
