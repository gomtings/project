import java.util.*;

public class a1 {
	
	public static void addPerson(String[][] ap,Scanner key, int a1, int b1) {
		int clo,ho;
		System.out.println("�̸��� �Է��� �ּ���.");
		String name = key.next();
		while (true) {
			System.out.println("�� ���� ���� �Ͻðٽ��ϱ�?");
			clo = key.nextInt();
			if (clo <= a1) {
			} else {
				System.out.println("���� ���� �ʴ� ���� �Դϴ�. ");
			}
			if (clo <= a1)
				break;
		}
		while (true) {
			System.out.println("�� ȣ�� ���� �Ͻðٽ��ϱ�?");
			 ho = key.nextInt();
			if (ho <= b1) {
			} else {
				System.out.println("���� ���� �ʴ� ȣ�� �Դϴ�. ");
			}
			if (ho <= b1)
				break;
		}
		if(ap[clo][ho].equals("�� ��")){
			ap[clo][ho]=name;
		}
		else{
			System.out.println("�� ���� �ƴմϴ�. ");
		}
	}
	public static void subPerson(Scanner key, int a1, int b1) {
		
	}
	public static void main(String[] args) {
		Scanner key = new Scanner(System.in);
		int a, b, c, d;
		System.out.println("�Ǽ��� ����Ʈ�� ������ �Է��� �ּ���.");
		a = key.nextInt();
		System.out.println("�� ������ �̷���� ȣ���� �Է��ϼ���.");
		b = key.nextInt();
		String[][] room = new String[a][b];
		System.out.println("������ �Ϸ�Ǿ����ϴ�.");
		for (int i = 0; i < room.length; i++) {
			for (int j = 0; j < room[i].length; j++) {
				room[i][j] = "�� ��";
			}
		}
		System.out.println("�ʱ�ȭ�� �Ϸ� �Ǿ����ϴ�.");
		System.out.println("**************");
		System.out.println("1.�ο��߰�");
		System.out.println("2.�ο�����");
		System.out.println("3.��������");
		System.out.println("4.����");
		System.out.println("**************");
		System.out.println("���� :");
		int menu = key.nextInt();
		switch (menu) {
		case 1:
			addPerson(room,key, a, b);
			break;
		case 2:
			
			break;
		}
	}
}
