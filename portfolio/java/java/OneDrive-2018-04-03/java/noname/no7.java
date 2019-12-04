import java.util.Scanner;
public class no7 {
	public static void main(String[] args){
		Scanner d = new Scanner(System.in);
		System.out.println("숫자 a를 입력 하세요");
		int a =d.nextInt();
		System.out.println("숫자 a를 입력 하세요");
		int b =d.nextInt();
		
		if(a==b){
			System.out.println("숫자 a와b는 같습니다.");
		}
		else
		{
			System.out.println("숫자 a와b는 다릅니다.");
		}
		
	}

}
