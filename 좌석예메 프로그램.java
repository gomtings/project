import java.util.*;
public class ����3 {
	public static void main(String[] args) {
		Scanner key = new Scanner(System.in);
		String[][] name = new String[5][5];
		int[][] pay =new int[5][5];
		char[][] cha = new char[][] { { 'O', 'O', 'O', 'O', 'O' }, { 'O', 'O', 'O', 'O', 'O' },
				{ 'O', 'O', 'O', 'O', 'O' }, { 'O', 'O', 'O', 'O', 'O' }, { 'O', 'O', 'O', 'O', 'O' } };
				for(int i=0;i<pay.length;i++){
					for(int j=0;j<pay[i].length;j++){
					pay[i][j]=(int)(Math.random()*6000+6000);
					}
				}
		int h;
		int w;
		int m;
		int n;
		String Name;
		Outter:
		while (true) {
			System.out.print("===========================");
			System.out.println();
			System.out.println("1.�¼� ��Ȳ ����");
			System.out.println("2.���� �ϱ�");
			System.out.println("3.���� Ȯ��");
			System.out.println("4.���� ���� ���� ");
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
				System.out.println("������ �̸��� �Է����ּ���.");
				Name = key.next(); 
				System.out.println("���ϴ� �¼���ȣ�� �Է����ּ���.");
				System.out.println("�� �Է�");
				w = key.nextInt();
				System.out.println("�� �Է�");
				h = key.nextInt();
				m = w - 1;
				n = h - 1;
				if (cha[m][n] == 'X'&& name[m][n] != "null"&& name[m][n] != "Null") {
					System.out.println("������ �Ұ��� �մϴ�. ");
					System.out.println("�����Ͻ� �˼���"+"["+w+"]"+"["+h+"]"+"�� �̹� ����� �¼��Դϴ�.");
					System.out.println("�ش� �¼��� �����ڴ�"+name[m][n]);
					break;
				} 
				else {
					System.out.println("�����Ͻ� �¼�"+w+","+h+"�� ������ "+pay[m][n]+"�� �Դϴ�.");
					System.out.println("���� �Ͻðٽ��ϱ�? y or n");
					char yn = key.next().charAt(0);
				   if(yn == 'y'){
					System.out.println("���Ű� �Ϸ� �Ǿ����ϴ�."+"�����Ͻ� �¼�"+w+","+h+"�� ������ "+pay[m][n]+"�� �Դϴ�.");
					cha[m][n] = 'X';
					name[m][n] = Name;
				   }
				   else{
					   System.out.println("���ް� ��� �Ǿ����ϴ�.");
				   }
				}
				break;
				
			case 3:
				System.out.println("���ϴ� �¼���ȣ�� �Է����ּ���.");
				System.out.println("�� �Է�");
				w = key.nextInt();
				System.out.println("�� �Է�");
				h = key.nextInt();
				m = w - 1;
				n = h - 1;
			  if(cha[m][n] !='X'){
			System.out.println("����� �¼��� �ƴմϴ�.");  
			  }
			  else if(cha[m][n] =='X'){
	  System.out.println("�����Ͻ� �¼���"+"["+w+"]"+"["+h+"]" +"�� �̹� ����� �¼��Դϴ�."+" �¼��� �����ڴ�"+name[m][n]);
	  System.out.println("������ "+pay[m][n]+"�� �Դϴ�.");
			  }
				break;
			case 4:
				System.out.println("���� ���� ���� ");
				if(num ==4)
					break Outter;
				break;
				default:
					System.out.println(" �߸��� �Է� �Դϴ� !!!!!!!!!!!!!!!! ");
				
			}// switch ����
		} // while ����
	}
}
