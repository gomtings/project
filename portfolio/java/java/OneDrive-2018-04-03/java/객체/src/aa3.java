import java.util.*;
class xxx {
	private int ga, se, he; // ����, ����, ���� ����
	private int volume; // ���� ����

	public xxx(int ga, int se, int he) {
		this.ga = ga;
		this.se = se;
		this.he = he;
		volume = ga * se * he; // ���� ���
	}

	// �Ű������� ���� ��ü�� �ʵ� volume�� ���Ͽ� �������� ��ü�� ũ�� 1�� �Ű������� ���� ��ü�� ũ�� -1�� ��ȯ
	public int isMax(xxx obj) {
		if (this.volume > obj.volume)
			return 1;
		else
			return -1;
	}

	public int getVolume() {
		return volume;
	}

	public String toString() {
		String str = "���� : " + ga + "\t���� : " + se + "\t���� : " + he;
		str += "\t���� : " + volume;
		return str;
	}
}

public class aa3 {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		xxx[] obj = new xxx[5]; // ��ü �迭 ���� & ����
		xxx max;
		int cnt = 0;
		System.out.println("���� ���� ���̸� �Է��ϼ���(�������� ����)");

		// �Է¹��� ������ ��ü �迭 ���� �ʱ�ȭ
		for (int i = 0; i < obj.length; i++) {
			System.out.print((i + 1) + "��° : ");
// ��ü �迭 �ʱ�ȭ
			obj[i] = new xxx(in.nextInt(), in.nextInt(), in.nextInt()); 
		}
		for (xxx b : obj) { // ��ü ���� ���
			System.out.print((++cnt) + "��° Box : ");
			System.out.println(b);
		}

// ���ǰ� ���� ū ��ü ã��
		max = obj[0];
		for (int i = 1; i < obj.length; i++) {
			if (max.isMax(obj[i]) == -1)
				max = obj[i];
		}
		System.out.println("���� ū ���� => " + max.getVolume());
	}
}

