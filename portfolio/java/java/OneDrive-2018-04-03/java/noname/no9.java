import java.util.Scanner;

public class no9 {
	public static void main(String[] args) {
		Scanner d = new Scanner(System.in);
		System.out.println("switch ���α׷� �Դϴ�.");
		System.out.println("1�̸�2����3����");
		int num = d.nextInt();
		switch (num) {
		case 1:
			System.out.println("�̻��");
			break;
		case 2:
			System.out.println("24");
			break;
		case 3:
			System.out.println("����");
			break;
		default:
			System.out.println("���������ʴ� ��帳�ϴ�.");
		}
	}

}
