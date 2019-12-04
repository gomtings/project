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

public class 연습16 {
	public static void main(String[] args) {
		Calculation obj = new Calculation();
		Scanner key=new Scanner(System.in);
		System.out.print("정수1");
		obj.a=key.nextInt();
		System.out.print("정수2");
		obj.b=key.nextInt();
		System.out.print("정수3");
		obj.c=key.nextInt();
		System.out.println("두개정수 합:"+obj.sum(obj.a ,obj.b));
		System.out.println("세개정수 합:"+obj.sum(obj.a ,obj.b , obj.c));
	}
}
