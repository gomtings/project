import java.util.Scanner; 
public class t4 {
	public static void main(String[] args){
		int olange;	
		int na;
		int na2;
		Scanner t4 = new Scanner(System.in); 
		System.out.print("�������� ������ �Ԏ��� �ּ���."); 
		olange = t4.nextInt(); 
		 na = olange/10;
		 na2 = olange%10;
		 System.out.print(na + "�ڽ��� �ʿ��ϰ�" + na2 + "���� �����ϴ�."); 
		 
	}
}
