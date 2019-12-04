import java.util.Scanner;
public class basu {
	public static void main(String[] args){
		Scanner scr=new Scanner(System.in);
		System.out.print("출력을 원하는 배수 입력");
		int a=scr.nextInt();
		System.out.print("출력횟수");
		int b=scr.nextInt();
		for(int i=1;i<b;i++){
			System.out.print((a*i)+"\t");
		}
	}
}
