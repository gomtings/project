import java.util.Scanner;
public class week09 {
	public static void main(String[] args) {//
		Scanner key = new Scanner(System.in);
		String id, pw=null;
		char u;
		int count = 0;
		int count2 = 0;
		System.out.println("�����Ͻ� ���̵� �Է��ϼ���.(quit �Է½� ����)");
		id = key.next();
		Outter:
		while (true) {
			if (id.equals("quit")) {
				break;
			}
			System.out.println("�����ڿ� ���� �������� 8�ڸ� �̻��� ��й�ȣ�� ��밡���մϴ�.");
			System.out.println("���Ͻô� ��й�ȣ�� �Է��ϼ���.");
			pw = key.next();
			if (pw.equals("quit")) {
				break;
			}
			if (pw.length() >= 8) {
				int tmp=pw.length();
				for (int a = 0; a < tmp; a++){
					char s = pw.charAt(a);
					//System.out.println(a);
					if ((s>='A'&& s<='Z')||(s>='a'&& s<='z')) {
						count++;	
					}
					else if((s>='0'&& s<='9')){
						count2++;
                     }
					} //for ����
				 if(count ==0){
					 System.out.println("������ ���ԵǾ� ���� �ʽ��ϴ�.");
					 continue;
				 }
				 else if(count2==0){
					 System.out.println("���ڰ� �����ϴ�.");
					 continue;
				 }
				 else 
					break;
					}// ������ ���� ����
			   System.out.println("pw ���̰� 8�ڸ� �̸� �Դϴ�.");
				} //while ����
		System.out.println(id+"���� �Է��Ͻ� ��й�ȣ�� " +pw+ "�Դϴ�.");
			}// main �޼ҵ� ����
	}// class ����

