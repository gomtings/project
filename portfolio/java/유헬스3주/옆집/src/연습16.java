import java.*;
import java.util.Scanner;
class Calculation {
	int a, b, c;

	public int sum(int a1 ,int b1) {
     return a1+b1;
	}

	public int sum(int a2 ,int b2 ,int b3) {
        return a2+b2+b3;
	}
}

public class ����16 {
	public static void main(String[] args) {
		Calculation obj = new Calculation();
		Scanner key=new Scanner(System.in);
		System.out.print("����1");
		obj.a=key.nextInt();
		System.out.print("����2");
		obj.b=key.nextInt();
		System.out.print("����3");
		obj.c=key.nextInt();
		System.out.println("�ΰ����� ��:"+obj.sum(obj.a ,obj.b));
		System.out.println("�������� ��:"+obj.sum(obj.a ,obj.b , obj.c));
	}
}
