import java.util.Scanner;
public class Study02 {
	public static void main(String[] args){
		Scanner v = new Scanner(System.in);
		int a;
		int b;
		
		System.out.println("한개의 정수 입력");
		a=v.nextInt();
		if(a>50){
			System.out.println("50초과 다시입력");
			a=v.nextInt();
		}
		System.out.println("2.한개의 정수 입력");
		b=v.nextInt();
	     if(b>10){
	    	 System.out.println("2.10초과 다시입력 ");
	 		b=v.nextInt();
		}
	     System.out.println(a+"^"+b+"="+(a^b));
	     System.out.println(a+"|"+b+"="+(a|b));
	     System.out.println(a+"<<"+b+"="+(a<<b));
	     System.out.println("~"+b+"="+(~b));
	     
	}
}
