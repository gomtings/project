import java.util.Scanner;
public class maxormin {
	public static void main(String[] args){
		int a;
		int b;
		Scanner v = new Scanner(System.in);
		System.out.println("1.정수 입력");
		a = v.nextInt();
		System.out.println("2.정수 입력");
		b = v.nextInt();
		if(a>b){
			System.out.println("최대값은"+a+"이고 "+b+"가 최소값입니다.");
		}
		else if(a<b){
				System.out.println("최대값은"+b+"이고 "+a+"가 최소값입니다.");
			}
		else if(a==b){
			System.out.println(a+"와"+b+"값이 동일합니다.");
			
			
			
		}
		
	}
		

}
