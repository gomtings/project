import java.util.Scanner;
public class no6 {
	public static void main(String[] args){
		System.out.println("숫자 입력시 무조건 같은 숫자만 입력하시요.");
		Scanner c = new Scanner(System.in);
		System.out.println("숫자 1을 입력하세요");
		int a=c.nextInt();
		System.out.println("숫자 2을 입력하세요");
		int b=c.nextInt();
		
		int d=a*b++;//a*b  사용후 ++
		int e=++b*a;// 위의  b++값 + ++b값*a 값/ ++후사용

		System.out.println(d);
		System.out.println(e);
		
		
	}

}
