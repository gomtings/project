package move;

import java.util.*;

class Reservation {
	Scanner key = new Scanner(System.in);

	int x = -11;
	String ids;
	int index = 0;
	int[] num;
	char[] ch;
	String[] id;

	public Reservation() {

		int[] num = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
		char[] ch = { '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', };
		String[] id = { "", "", "", "", "", "", "", "", "", "" };
	}

	public void setsave() {

		while (true) {
			System.out.println("1:�¼� ����");
			System.out.println("2:���� ���");
			System.out.println("�����Ϸ��� 0 �� ��������!");
			x = key.nextInt();
			if (x == 0) {
				break;
			} // ���� ���� ���̽� ����
			if (1 <= x && x <= 2) {// ����
				if (x == 1) {
					System.out.print("�¼���ȣ:");
					for (int i = 0; i < 10; i++) {
						System.out.print(num[i] + "  ");
					} // �¼� �迭 ����� ���� �ݺ��� ���� ����
					System.out.println();
					System.out.print("�����Ȳ:");
					for (int i = 0; i < num.length; i++) {
						System.out.print(ch[i] + "  ");
					} // ���� �迭 ����� ���� �ݺ��� ���� ����
					System.out.println();
					System.out.println("�¼� ��ȣ�� �Է��� �ּ���.");
					x = key.nextInt();
					if (ch[x - 1] == '0') {
						System.out.println("���� ������ �¼� �Դϴ�. id�� �Է��� �ּ���.");
						id[x - 1] = key.next();
						ch[x - 1] = 'x';
					} else {
						System.out.println("�����Ͻ� �¼��� ������ �Ұ��� �մϴ�.");
					}
				} else if (x == 2) {

					System.out.println("id�� �Է��� �ּ���.__");
					ids = key.next();

					System.out.print("�¼���ȣ:");
					for (int i = 0; i < num.length; i++) {
						System.out.print(num[i] + "  ");
					} // �¼� �迭 ����� ���� �ݺ��� ���� ����
					System.out.println();

					System.out.print("�����Ȳ:");
					for (int i = 0; i < num.length; i++) {
						System.out.print(ch[i] + "  ");
					} // ���� �迭 ����� ���� �ݺ��� ���� ����
					System.out.println();

					for (int i = 0; i < id.length; i++) {
						if (ids.equalsIgnoreCase(id[i])) {
							index = i;
							break;
						} else {
							index = -1;
							continue;
						}
					}

					System.out.println("�¼� �ε���:" + index);

					if (index > -1) {
						ch[index] = '0';
						System.out.println("�Է��Ͻ� id�� ���� �¼��� ������ ��� �Ͽ����ϴ�.");
						System.out.print("�¼���ȣ:");
						for (int i = 0; i < num.length; i++) {
							System.out.print(num[i] + "  ");
						} // �¼� �迭 ����� ���� �ݺ��� ���� ����
						System.out.println();

						System.out.print("�����Ȳ:");
						for (int i = 0; i < num.length; i++) {
							System.out.print(ch[i] + "  ");
						} // ���� �迭 ����� ���� �ݺ��� ���� ����
						System.out.println();
					} else {
						System.out.println("�˼��մϴ�..�� �Է��Ͻ� id�� ���� ������ �����ϴ�. ");
					}
				}
			} // 1~2 ���̰� Ȯ�� ����
			else {
				System.out.println("���� �Ͻ� �Ŵ��� �����ϴ�!!! \n�ٽ� �����ϼ���!!");
			}

		} // while ����
	}// �޼ҵ� ����
}// Ŭ���� ��

public class moveing {
	public static void main(String[] args) {
		Reservation[] res = new Reservation[1];
		res[0] = new Reservation();
		res[0].setsave();

	}
}
