import java.util.Scanner;
public class maxormin {
	public static void main(String[] args){
		int a;
		int b;
		Scanner v = new Scanner(System.in);
		System.out.println("1.���� �Է�");
		a = v.nextInt();
		System.out.println("2.���� �Է�");
		b = v.nextInt();
		if(a>b){
			System.out.println("�ִ밪��"+a+"�̰� "+b+"�� �ּҰ��Դϴ�.");
		}
		else if(a<b){
				System.out.println("�ִ밪��"+b+"�̰� "+a+"�� �ּҰ��Դϴ�.");
			}
		else if(a==b){
			System.out.println(a+"��"+b+"���� �����մϴ�.");
			
			
			
		}
		
	}
		

}
