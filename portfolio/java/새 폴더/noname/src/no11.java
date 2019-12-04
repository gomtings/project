import java.util.Scanner;
public class no11 {
	public static void main(String[] args) {
		Scanner d =new Scanner(System.in);
		System.out.print("a.기준숫자를 입력해 주세요.");
		int a =d.nextInt();
		System.out.print("b.기준숫자를 입력해 주세요.");
		int b =d.nextInt();
		System.out.print("a.비교정수 입력해 주세요.");
		int c =d.nextInt();
		System.out.print("b.비교정수 입력해 주세요.");
		int e =d.nextInt();
		if(a==c&&b==e){
			System.out.print("기준숫자와 비교숫자가 동일합니다");
		}
		else{
			System.out.print("기준숫자와 비교숫자가 다릅니다.");
		}
		
	}

}
