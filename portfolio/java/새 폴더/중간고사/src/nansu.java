import java.util.*;
public class nansu {
	public static void main(String[] args) {
		Scanner key = new Scanner(System.in);
		int i = (int) (Math.random() * 100 + 1);// 0~100사이 난수 발생
		while (true) {// while 시작 무한 반복
			System.out.println("정수 입력");
			int z = key.nextInt();// 정수를 입력받는다.
			if (z < i) {// 조건문 입력정수가 난수보다 작을경우
				System.out.print("난수보작 작다");
			} else if (z > i) {// 조건문 입력정수가 난수보다 클경우
				System.out.print("난수보다 크다 ");
			} else {// 위 조건이 모두 아닐경우
				System.out.print("정답");
				break;
			}
		}
	}
}
