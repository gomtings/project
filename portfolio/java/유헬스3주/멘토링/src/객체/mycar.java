package 객체;
class car{
	String color;
	String cars;
	public void menu(){
		System.out.println("차종:"+cars);
		System.out.println("차 색상:"+color);
	}
}
public class mycar {
	public static void main(String[] args){
		car mcar = new car();
		car ccar = new car();
		ccar.color="핑크";
		ccar.cars="소나타";
		ccar.menu();
		System.out.println("--------------------");
		mcar.color="파랑";
		mcar.cars="제네시스";
		System.out.println("차종:"+mcar.cars);
		System.out.println("차 색상:"+mcar.color);
	}
}
