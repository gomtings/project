package �޼ҵ�0510;
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
		System.out.println("gear��"+gear+"�� ���� �Ͽ����ϴ�.");
	}
	public void speedUp(){
		this.speed+=10;
		System.out.println("���� �ӵ���"+speed+"�Դϴ�. ");
	}
	public void speedDown(){
		this.speed-=10;
		System.out.println("���� �ӵ���"+speed+"�Դϴ�. ");
	}
}
public class ��ü01 {
	public static void main(String[] args){
		Car obj = new Car("red" , 1 , 20);
		obj.changeGear(2);
		obj.speedUp();
		obj.speedDown();
	}
}
