package ��ü;
class car{
	String color;
	String cars;
	public void menu(){
		System.out.println("����:"+cars);
		System.out.println("�� ����:"+color);
	}
}
public class mycar {
	public static void main(String[] args){
		car mcar = new car();
		car ccar = new car();
		ccar.color="��ũ";
		ccar.cars="�ҳ�Ÿ";
		ccar.menu();
		System.out.println("--------------------");
		mcar.color="�Ķ�";
		mcar.cars="���׽ý�";
		System.out.println("����:"+mcar.cars);
		System.out.println("�� ����:"+mcar.color);
	}
}
