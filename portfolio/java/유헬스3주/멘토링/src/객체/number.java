package 객체;

import java.util.*;

class ber {
	int num;
	public void pluse() {
		System.out.println("pluse 메소드로 변경 한 값" + 4);
	}

	public void minus() {
		System.out.println("minus 메소드로 변경 한 값" + -4);
	}
}

public class number {
	public static void main(String[] args) {
		Scanner key = new Scanner(System.in);
		ber sub = new ber();
		System.out.println("정수 입력");
		int a = key.nextInt();
		System.out.println("입력 값" + a);
       sub.num=a;
      sub.pluse();
      sub.minus();
	}
}
