package project;

import java.util.*;

public class c2move {

	public static void main(String[] args) {

		Scanner key = new Scanner(System.in);
		int number = 0, index,er=0;
		char a = 'A',c;
		String nm;
		char[][] mj = new char[5][10];
		String[][] name = new String[5][10];
		for (int i = 0; i < mj.length; i++) {
			for (int j = 0; j < mj[i].length; j++) {
				mj[i][j] = 'o';
				number++;
			}
		}
		
		while (true) {
			System.out
					.println("�¼� ���� �ý��� �Դϴ�. �¼�����.1��/���� ���.2��/����Ȯ��.3��/�ܿ��� Ȯ��.4�� �Դϴ�.");
			switch (key.nextInt()) {

			case 1:

				Outter: while (true) {
					System.out.println("�¼� ������ ���� �մϴ�.");
					System.out.print("* ");
					for (int j = 0; j < 10; j++) {
						System.out.print(" " + (j + 1));
					}
					System.out.println();
					for (int i = 0; i < mj.length; i++) {
						System.out.print(a++ + "  ");
						for (int j = 0; j < mj[i].length; j++) {
							System.out.print(mj[i][j] + " ");
						}
						System.out.println();
					}
					System.out.println("���� �ܿ� �¼��� : " + number
							+ "�� ���ҽ��ϴ�. \n �¼��� ������ �ּ���.(��(��)�Է�->A~E)");
					while (true) {// �Է� ������ ���� �ϱ� ���� �ݺ���
						c = key.next().charAt(0);
						if (c >= 'A' && c <= 'E' || c >= 'a' && c <= 'e') {
							System.out.println("�¼� ��ȣ�� �Է��� �ּ���. 1~10");
							int x = key.nextInt();
							if (x >= 1 && x <= 10) {
								if (c < 97) {
									index = 65 - c;
								} else {
									index = 97 - c;
								}
								if (mj[index][x - 1] == 'o') {
									System.out.println("�����Ͻ� �¼�" + c + x
											+ " �� ���� �ұ��?  y or n");
									c = key.next().charAt(0);
									if (c == 'y' || c == 'Y') {
										System.out.println("������ �̸��� �Է��� �ּ���.");
										name[index][x - 1] = key.next();
										System.out.println(+c + x
												+ "���� ���� �Ͽ����ϴ�.");
										mj[index][x - 1] = 'x';
										number--;
										break Outter;
									} else {
										System.out.println("������ ��� �մϴ�.");
										break Outter;
									}
								}
							} else {
								System.out
										.println(" ������ �¼��� ���� �¼� �Դϴ�. �¼� ��ȣ�� �ٽ� �Է��� �ּ���. 1~10");
							}

						} else {
							System.out.println("�ٽ� �Է��� �ּ���.(��(��)�Է�->A~E)");
						}
					}// �Է� ������ ���� �ϱ� ���� �ݺ��� ����
				}// while ����

				break;

			case 2:
				
				Outter:
				while (true) {
					System.out.println("������ ��� �մϴ�. ������ �̸��� �Է��� �ּ���.");
					for(int i=0; i<mj.length;i++){
						for(int j=0;j<mj[i].length;j++){
							nm=key.next();
							if(nm.equals(name[i][j])){
								System.out.println(name[i][j]+"�� �� ���� �Ͻ� "+(char)(65+i)+j+"���� ������ ��� �ұ��?");
								c=key.next().charAt(0);
								if(c=='y'||c=='Y'){
									mj[i][j] = 'o';
									number++;
									break Outter;
								}else{
									System.out.println("���� ��Ҹ� ��� �Ͽ����ϴ�.");
									break Outter;
								}
							}else{
								er++;
								if(er==50)
									System.out.println(nm+"�� ������ ��Ͽ� �����ϴ�.");
							}
						}
					}
				}
				
				break;

			case 3:
				while(true){
					System.out.println("������ �� Ȯ�� �մϴ�. ������ �̸��� �Է��� �ּ���.");
					nm=key.next();
					if(number==50)
						System.out.println("����� �¼��� �����ϴ�.");
					
					System.out.println(nm+"���� ���� �¼��� : ");
					for(int i=0; i<mj.length;i++){
						for(int j=0;j<mj[i].length;j++){
							if(nm.equals(name[i][j])){
								System.out.println((char)(65+i)+j+"");
							}else{
							}
						}
						System.out.println(",");
					}
					
				}
				break;

			case 4:

				break;

			}

		}
	}
}
