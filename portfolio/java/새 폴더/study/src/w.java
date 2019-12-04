import java.util.Scanner;
public class w {
	public static void main(String[]args){
		Scanner sc =new Scanner(System.in);
		int ab;
		do
		{
			System.out.print("정수를 입력하세요.");
			ab = sc.nextInt();	
		}
		while(ab<100);
		System.out.print("입력하신값은"+ab);
	}

}
