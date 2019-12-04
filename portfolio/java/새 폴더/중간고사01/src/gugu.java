import java.util.Scanner;
public class gugu {
	public static void main(String[] args) {
		Scanner key = new Scanner(System.in);
		System.out.println("구구단을 학습합니다.");
		int count = 0;
		do {
			System.out.println("알맞은 답을 입력하세요. 그만하려면  0을 입력하세요.");
			for (int x = 0; x <= 4; x++) {
				System.out.println("그만두시려면 n 계속은 y를 누르세요.");
				char ch = key.next().charAt(0);
				if (ch == 'Y' || ch == 'y') {//
					int a = (int) (Math.random() * 9 + 1);
					int b = (int) (Math.random() * 9 + 1);
					int c = a * b;
					System.out.println(a + "*" + b + "=??");
					int k = key.nextInt();
					if (k == c) {
						System.out.println("정답입니다.");
						count++;
					} else {
						System.out.println("오답입니다. ");
					}
				} else
					break;
			} // for 문
		}while(true);
	}
}