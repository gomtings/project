import java.util.Scanner;
public class Study02 {
	public static void main(String[] args){
		Scanner v = new Scanner(System.in);
		int a;
		int b;
		
		System.out.println("�Ѱ��� ���� �Է�");
		a=v.nextInt();
		if(a>50){
			System.out.println("50�ʰ� �ٽ��Է�");
			a=v.nextInt();
		}
		System.out.println("2.�Ѱ��� ���� �Է�");
		b=v.nextInt();
	     if(b>10){
	    	 System.out.println("2.10�ʰ� �ٽ��Է� ");
	 		b=v.nextInt();
		}
	     System.out.println(a+"^"+b+"="+(a^b));
	     System.out.println(a+"|"+b+"="+(a|b));
	     System.out.println(a+"<<"+b+"="+(a<<b));
	     System.out.println("~"+b+"="+(~b));
	     
	}
}
