import java.util.Scanner;

public class basu4 {
	public static void main(String[] args){
		Scanner key=new Scanner(System.in);
		System.out.print("한개의 정수 입력");
		int a=key.nextInt();
		System.out.println((a%4==0)?"4의배수":"4의배수 아님");
		//4의 배수 판별 후 출력
	}
	}
