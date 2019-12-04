import java.util.Scanner;
public class sample6 {
	public static void main(String[]args){
		int str;
		Scanner d = new Scanner(System.in);
		System.out.print("달을 입력 하세요.");
		str = d.nextInt();
		if(str <= 6){
			System.out.print("상반기");
		}
		
		System.out.print("하반기");
	}

}
