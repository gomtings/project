package ��ü;

import java.util.*;

class ber {
	int num;
	public void pluse() {
		System.out.println("pluse �޼ҵ�� ���� �� ��" + 4);
	}

	public void minus() {
		System.out.println("minus �޼ҵ�� ���� �� ��" + -4);
	}
}

public class number {
	public static void main(String[] args) {
		Scanner key = new Scanner(System.in);
		ber sub = new ber();
		System.out.println("���� �Է�");
		int a = key.nextInt();
		System.out.println("�Է� ��" + a);
       sub.num=a;
      sub.pluse();
      sub.minus();
	}
}
