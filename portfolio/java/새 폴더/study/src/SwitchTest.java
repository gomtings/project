import java.util.*;
public class SwitchTest {
	public static void main(String[] args) {
		Scanner key=new Scanner(System.in);
		char ch;
		
		System.out.println(" �� ���� ���� �Է� : ");  
		ch= key.next().charAt(0);
		
		switch(ch){
		    case  '%' :  //���� ch�� ����� ���ڰ� '%'�̸� 
		    	System.out.println("7%2 = " +(7%2));  //������ ���� ����
		    	break;
		    case '&' : //���� ch�� ����� ���ڰ� '&'�̸�
			System.out.println("7&2 = " +(7&2));  //& ���� ����
			 break;
			case  '>':   //���� ch�� ����� ���ڰ� '>'�̸� 
				System.out.println("7>>2 = " +(7>>2));  // >> ���� ����
				break;
		}
	}
}
