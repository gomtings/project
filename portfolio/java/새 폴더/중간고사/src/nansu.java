import java.util.*;
public class nansu {
	public static void main(String[] args) {
		Scanner key = new Scanner(System.in);
		int i = (int) (Math.random() * 100 + 1);// 0~100���� ���� �߻�
		while (true) {// while ���� ���� �ݺ�
			System.out.println("���� �Է�");
			int z = key.nextInt();// ������ �Է¹޴´�.
			if (z < i) {// ���ǹ� �Է������� �������� �������
				System.out.print("�������� �۴�");
			} else if (z > i) {// ���ǹ� �Է������� �������� Ŭ���
				System.out.print("�������� ũ�� ");
			} else {// �� ������ ��� �ƴҰ��
				System.out.print("����");
				break;
			}
		}
	}
}
