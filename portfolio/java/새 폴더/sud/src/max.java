import java.util.Scanner;
public class max {
	public static void main(String [] args){
		int max=1;
		Scanner can=new Scanner(System.in);
		int a;
		do{
		System.out.print("정수입력");
		a = can.nextInt();
		if(a>max){
			max=a;
		}
		if(a==0){
			break;
		}
		}while(true);
		System.out.print("최대값"+max);
	}
}

