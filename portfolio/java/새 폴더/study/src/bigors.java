import java.util.Scanner;
public class bigors {
	public static void main(String [] args){
		double a;
		double b;
		Scanner v = new Scanner(System.in);
		System.out.print((2%6));
		System.out.println("1.�Ǽ��� �Է��ϼ���.");
		a=v.nextDouble();
		System.out.println("2.�Ǽ��� �Է��ϼ���.");
		b=v.nextDouble();
		if(a>b){
			System.out.println("�Ǽ�"+ a + b +"�� ū����"+a+"�Դϴ�.");
		}
		else if(a<b){
				System.out.println("�Ǽ�"+ a + b +"�� ū����"+b+"�Դϴ�.");
			}
		else if(a==b){
			System.out.println("�Ǽ� "+a+"��"+b+"�� �����մϴ�.");
			
		}
		
	}
}
