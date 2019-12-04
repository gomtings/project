import java.util.Scanner;

public class no9 {
	public static void main(String[] args) {
		Scanner d = new Scanner(System.in);
		System.out.println("switch 프로그램 입니다.");
		System.out.println("1이름2나이3종료");
		int num = d.nextInt();
		switch (num) {
		case 1:
			System.out.println("이상우");
			break;
		case 2:
			System.out.println("24");
			break;
		case 3:
			System.out.println("종료");
			break;
		default:
			System.out.println("지원하지않는 모드립니다.");
		}
	}

}
