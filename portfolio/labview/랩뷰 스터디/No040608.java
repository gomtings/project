import java.util.Scanner;

public class No040608 {
	public static void main(String[] args) {
		Scanner vv = new Scanner(System.in);
		int i;
		char c;
		char[] ch = { 'A', 'B', 'C', 'D', 'E', 'F', 'G'};
		char[] ch2 = { '0', '0', '0', '0', '0', '0', '0'};
		;
		while (true) {
		
			System.out.println("�¼� ��ġ��"+"\t");
			
			for (int a = 0; a < ch.length; a++) {
				System.out.print(ch[a] + " ");
			}
			System.out.println();
			for (int a = 0; a < ch.length; a++) {
				System.out.print(ch2[a] + " ");
			}
			System.out.println();
			System.out.println("���Ͻô� �¼��� �Է��� �ּ���:(x������ �����մϴ�.)");
			c = vv.next().charAt(0);
			
			if (c == 'X'|| c=='x')
				break;
			
			i = c - 65;
			if (ch2[i] == '0') 
			{
				 ch2[i] = 'X';
				System.out.println("������ �Ϸ�Ǿ����ϴ�.");
				for (int a = 0; a < ch.length; a++) {
					System.out.print(ch[a] + " ");
				}
				System.out.println();
				for (int g = 0; g < ch.length; g++) {
					System.out.print(ch2[g] + " ");
				}
				
			} 
			
			else if (ch2[i] == 'X') {
				System.out.println("�����Ͻ� �¼��� ���Ű� �Ұ��� �մϴ�.");
				System.out.println(c);
			}	
			
		}
	}
}