package 중간고사;
import java.util.Scanner;
public class TRI {
	public static void main(String [] args){
		Scanner key=new Scanner(System.in);
		int i = key.nextInt();//출력할 줄수 입력 
		int a=1;// 별을 출력할 변수 초기화 
		for(int b=1;b<=i;b++){ // b값이 i값보다 작거나 같을경우(줄)
			for(int c=1;c<=b;c++){//c 값이 b보다 작을때까지
				System.out.print(a+"");//1부터 출력
				a++;//카운트 시작
			}
			System.out.println();//줄바꿈 
		}
	}
}
