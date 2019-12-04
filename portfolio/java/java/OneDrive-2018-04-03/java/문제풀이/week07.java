import java.util.Scanner;
public class week07 {
	public static void main(String[] args) {
		Scanner key = new Scanner(System.in);
		System.out.print("정수 입력");
		int s=key.nextInt();
		int sum=0,n=1;
		while(true){
			sum+=n;
			if(s<sum)
				break;
			System.out.println(n+":"+sum);
			n++;
		}
	}
}
