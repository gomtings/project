import java.util.Scanner;
public class gugu {
	public static void main(String[] args) {
		Scanner key = new Scanner(System.in);
		System.out.println("�������� �н��մϴ�.");
		int count = 0;
		do {
			System.out.println("�˸��� ���� �Է��ϼ���. �׸��Ϸ���  0�� �Է��ϼ���.");
			for (int x = 0; x <= 4; x++) {
				System.out.println("�׸��ν÷��� n ����� y�� ��������.");
				char ch = key.next().charAt(0);
				if (ch == 'Y' || ch == 'y') {//
					int a = (int) (Math.random() * 9 + 1);
					int b = (int) (Math.random() * 9 + 1);
					int c = a * b;
					System.out.println(a + "*" + b + "=??");
					int k = key.nextInt();
					if (k == c) {
						System.out.println("�����Դϴ�.");
						count++;
					} else {
						System.out.println("�����Դϴ�. ");
					}
				} else
					break;
			} // for ��
		}while(true);
	}
}