import java.util.Scanner;
public class sample4 {
	public static void main(String[]args){
		int a;
		Scanner c = new Scanner(System.in);
		System.out.print("정수 입력");
		a = c.nextInt();
		if(a == 1){
			System.out.print("첫번째");
		}
		else if(a == 2){
			System.out.print("두번째");
		}
		else if(a == 3){
			System.out.print("세번째");
		}
		else if(a == 4 ){
			System.out.print("네번째");
		}
		System.out.print("잘못된 입력입니다.");
}
}
