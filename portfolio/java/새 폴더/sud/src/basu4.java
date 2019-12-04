import java.util.Scanner;
public class basu4 {
	public static void main(String [] args){
		Scanner gg=new Scanner(System.in);
		System.out.print("출력을 원하는 배수를 입력해 주세요.");
		int a =gg.nextInt();
		System.out.print("출력횟수");
		int b=gg.nextInt();
		for(int i=1;i<=b;i++){
	System.out.println( (a*i) + "\t");
			}
		}
	}

