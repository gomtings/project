import java.util.*;
public class number {
	int ca;// �޼ҵ忡����� ����
		int pluse=ca+1; // "
		int minus=ca-4;//  "
	public static void main(String[] args) {
		number myber =new number();// �޼ҵ� ����  �޼ҵ�� Ŭ������� �����ؾ� �Ѵ�. 
		Scanner vv=new Scanner(System.in);
		System.out.print("�����Է�");	
		 myber.ca=vv.nextInt();
		 myber.pluse=myber.ca+1;
		 myber.minus=myber.ca-7;
		System.out.println("�Է� ��"+myber.ca);	
		System.out.println("pluse �޼ҵ�� ���� �� ��"+myber.pluse);
		System.out.println("minus �޼ҵ�� ���� �� ��"+myber.minus);
		
	}

}
