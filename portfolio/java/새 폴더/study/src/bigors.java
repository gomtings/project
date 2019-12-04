import java.util.Scanner;
public class bigors {
	public static void main(String [] args){
		double a;
		double b;
		Scanner v = new Scanner(System.in);
		System.out.print((2%6));
		System.out.println("1.실수를 입력하세요.");
		a=v.nextDouble();
		System.out.println("2.실수를 입력하세요.");
		b=v.nextDouble();
		if(a>b){
			System.out.println("실수"+ a + b +"중 큰수는"+a+"입니다.");
		}
		else if(a<b){
				System.out.println("실수"+ a + b +"중 큰수는"+b+"입니다.");
			}
		else if(a==b){
			System.out.println("실수 "+a+"와"+b+"가 동일합니다.");
			
		}
		
	}
}
