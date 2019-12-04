import java.util.Scanner;
public class no12 {
	public static void main(String[] args) {
		Scanner d =new Scanner(System.in);
		System.out.println("계산기 프로그램 입니다.");
		System.out.println("숫자a를 입력하세요");
		int a =d.nextInt();
		System.out.println("숫자b를 입력하세요");
		int b =d.nextInt();
		System.out.println("1.더하기2.빼기3.곱하기4.나누기5.종료");
		int c =d.nextInt();
		switch(c){
		case 1:
			System.out.println((a+b));
			break;
		case 2:
			System.out.println((a-b));
			break;
		case 3:
			System.out.println((a*b));
			break;
		case 4:
			System.out.println((a/b));
			break;
		case 5:
			System.out.println("종료");
			break;
			default :
				
			
		}	
	}		
}
