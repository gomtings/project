import java.util.Scanner;
public class no2 {
	public static void main(String[] args ){
		int a;
		double b;
		double c;
		Scanner v = new Scanner(System.in);
		System.out.println("마일을 킬로미터 로 변환하는 프로그램 입니다.");
		System.out.println("마일을 입력하세요.");
		a = v.nextInt();
		c = a*1.609;
		System.out.println(c + "Km 입니다.");
		
	}
}
