import java.util.Scanner;
public class week09 {
	public static void main(String[] args) {
		Scanner key = new Scanner(System.in);
		String id, pw=null;
		int count = 0;
		int count2 = 0;
		System.out.println("�����Ͻ� ���̵� �Է��ϼ���.(quit �Է½� ����)");
		id = key.next(); //id �Է�
		
		while (true) {  //while ����
			if (id.equals("quit")) {//�������� 
				break;
			}
			System.out.println("�����ڿ� ���� �������� 8�ڸ� �̻��� ��й�ȣ�� ��밡���մϴ�.");
			System.out.println("���Ͻô� ��й�ȣ�� �Է��ϼ���.");
			pw = key.next();
			if (pw.equals("quit")) {  // 1. if�������� 
				break;
			}//1.if ���� ��
			if (pw.length() >= 8) { //pw�� ���̰� 8�ڸ� �̻� �ϰ�� ��
				int tmp=pw.length();
				for (int a = 0; a < tmp; a++){
					char s = pw.charAt(a);
					if ((s>='A'&& s<='Z')||(s>='a'&& s<='z')) {
						count++;	//�����ڰ� ������� ī��Ʈ
					}
					else if((s>='0'&& s<='9')){
						count2++; //���ڰ� ������� ī��Ʈ
                     }
					} //for ����
				 if(count ==0){ // �����ڰ� ���� ī��Ʈ�� �ȵȰ�� 
					 System.out.println("������ ���ԵǾ� ���� �ʽ��ϴ�.");
					 continue;// ������� ���ǽ����� �ٽ� �ö󰣴�./
				 }
				 else if(count2==0){ // ���ڰ� ���� ī��Ʈ�� �ȵȰ�� 
					 System.out.println("���ڰ� �����ϴ�.");
					 continue; // ������� ���ǽ����� �ٽ� �ö󰣴�./
				 }
				 else 
					break;
					}// ������ ���� ����
			   System.out.println("pw ���̰� 8�ڸ� �̸� �Դϴ�.");
				} //while ����
		System.out.println(id+"���� �Է��Ͻ� ��й�ȣ�� " +pw+ "�Դϴ�."); //id �� pw �� ��� �Ѵ�.
			}// main �޼ҵ� ����
	}// class ����

