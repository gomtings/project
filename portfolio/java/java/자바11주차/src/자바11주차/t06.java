package �ڹ�11����;
import java.util.*;
public class t06 {
	public static int input(){ 
	Scanner key = new Scanner(System.in);
	System.out.print("���� �Է�");
	return key.nextInt();
	}
	public static void display(int a){
		System.out.print(a);
		System.out.println();
	}
	public static int add(int a, int b){
		return a+b;
	}
	public static void main(String[] args){
		//Scanner key = new Scanner(System.in);
		int a,b,c;
		a=input(); 
		b=input();
		display(a);
		display(b);
		System.out.println("�� ���� ���� " + add(a,b) + " �Դϴ�.");
	}
}
