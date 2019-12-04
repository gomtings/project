package noname;
import java.util.Scanner;
public class no3 {
	public static void main(String[] args){
		Scanner c =new Scanner(System.in);
		System.out.print("숫자 1을 입력하세요.");
		int a=c.nextInt();
		System.out.print("숫자 2을 입력하세요.");
		int b=c.nextInt();
		System.out.println((a==b)+"");//a와b가 같을 경우
		System.out.println((a!=b)+""); //a와 b가 다를경우
		System.out.println((a>b)+"");//a가 b보다 클경우
		System.out.println((a<b)+"");//a가b보다작을경우
		System.out.println((a<=b)+"");//a가b 보다 작거나 같은경우
		System.out.println((a>=b)+"");//a가b보다 크거나 같을경우
		System.out.println((a==4&&b==8)+"");// a와b가 모두 같은 경우 참
		System.out.println((a==4||b==8)+"");//a,b 둘중 하나가 참일경우 참
		
		
			}

}
