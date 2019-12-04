import java.util.*;
public class 배수4 {
	public static void main(String [] args){
		Scanner key= new Scanner(System.in);
		System.out.print("정수입력");
		int a=key.nextInt();
		System.out.print((a%4==0)?"4의 배수":" 배수아님");
	}
}
