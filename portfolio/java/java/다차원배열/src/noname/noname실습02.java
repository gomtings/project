package noname;

import java.util.Scanner;

public class noname�ǽ�02 {
	public static void main(String[] args) {
		Scanner key = new Scanner(System.in);
		char[][] cha = new char[][] { { 'O', 'O', 'O', 'O', 'O' }, { 'O', 'O', 'O', 'O', 'O' },
				{ 'O', 'O', 'O', 'O', 'O' }, { 'O', 'O', 'O', 'O', 'O' }, { 'O', 'O', 'O', 'O', 'O' } };
		int h;
		int w;
		int m;
		int n;
		Outter:
		while (true) {
			System.out.print("===========================");
			System.out.println();
			System.out.println("1.�¼� ��Ȳ ����");
			System.out.println("2.���� �ϱ�");
			System.out.println("3.���� ���� ���� ");
			System.out.print("===========================");
			System.out.println();
			int num = key.nextInt();
			switch (num) {

			case 1:
				int i = 0;
				System.out.print("     " + "1��");
				for (int a = 1; a < 5; a++) {
					System.out.print("      " + (a + 1) + "��" + "");
				}
				System.out.println();
				for (i = 0; i < cha.length; i++) {
					System.out.print(i + 1 + "��" + "      ");
					for (int j = 0; j < cha[i].length; j++) {
						System.out.print(cha[i][j] + "     ");
					}
					System.out.println();
				}
				break;
			case 2:
				
				System.out.println("���ϴ� �¼���ȣ�� �Է����ּ���.");
				System.out.println("�� �Է�");
				w = key.nextInt();
				System.out.println("�� �Է�");
				h = key.nextInt();
				m = w - 1;
				n = h - 1;
				if (cha[m][n] == 'X') {
					System.out.println("������ �Ұ��� �մϴ�. ");
					break;
				} 
				else {

					System.out.print("���Ű� �Ϸ� �Ǿ����ϴ�.");
					cha[m][n] = 'X';	
				}
				break;
				
			case 3:
				if(num ==3)
					break Outter;
				break;
				default:
					System.out.println(" �߸��� �Է� �Դϴ� !!!!!!!!!!!!!!!! ");
				
			}// switch ����
		} // while ����
	}
}