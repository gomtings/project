import java.util.*;
public class q_quit {
	public static void main(String[] args) {
		Scanner key = new Scanner(System.in);
		int x=0;//ī��Ʈ�� ����
		while(true){
			System.out.print("���ڸ� �Է�");
			char ar=key.next().charAt(0); //���ڿ� ���� 
			x++;//���� �Է�Ƚ�� 
			if(ar=='q')// ���� ����  
				break;
		}
		System.out.print("���� �Է� Ƚ��"+x);
	}
}
