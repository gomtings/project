import java.util.Scanner;
public class 오렌지개수 {
	public static void main(String[] args){
		Scanner key= new Scanner(System.in);
		System.out.println("오랜지 개수는");
		int a = key.nextInt();
		int b= a%10;
		int e= a/10;
		System.out.println(b+","+e);
	}
}
