import java.util.Scanner;  
public class test {
	public static void main(String[] args) {
		Scanner T = new Scanner(System.in);
		double d1, d2;  
		boolean logic;    
		System.out.print("실수 두 개를 입력하시오: "); 
		 d1 = T.nextDouble();
		 d2 = T.nextDouble();
		 
		 logic = d1>d2; 
		 System.out.println(d1 +" > " + d2 + " => " + logic);  
		 
		 logic = d1 != d2;
		 System.out.println(d1 +" != " + d2 + " => " + logic);

	}
}
