package study;
import java.util.Scanner;
public class sample2 {
	public static void main(String[]   args) {
		Scanner key=new Scanner(System.in);
		char ch;
		
		System.out.println(" �� ���� ���� �Է� : ");  
		ch= key.next().charAt(0);
		
		
		if(ch =='%')  //���� ch�� ����� ���ڰ� '%'�̸�
			System.out.println("7%2 = " +(7%2));  //������ ���� ����
		else if(ch =='&')  //���� ch�� ����� ���ڰ� '&'�̸�   
			System.out.println("7&2 = " +(7&2));  //& ���� ����
		else if(ch =='>')  //���� ch�� ����� ���ڰ� '>'�̸�   
			System.out.println("7>>2 = " +(7>>2));  // >> ���� ����
		else
			System.out.println("�ش� ������ �ƴմϴ�");
	     }
}

