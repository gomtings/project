import java.util.Scanner;
public class no8 {
	public static void main(String[] args){
		Scanner d = new Scanner(System.in);
		System.out.println("가위는 1 바위는2보는3을 입력하세요.");
		int a =d.nextInt();
		if(a==1){
			System.out.println("가위 입니다.");
		}
		else if(a==2)
		{
			System.out.println("바위 입니다.");
		}
		else if(a==3){
			System.out.println("보 입니다.");
		}	
		System.out.println("졋습니다.");
	}
}
