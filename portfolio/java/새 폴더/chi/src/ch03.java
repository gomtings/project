import java.util.*;
public class ch03 {
	public static void main(String [] args){
		Scanner key =new Scanner(System.in);
		System.out.print("�����ڸ� �Է��� �ּ���.");
		char ch=key.next().charAt(0);
		switch(ch){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			System.out.print("���� �Դϴ�.");
			break;
			default:
				System.out.print("������ �ƴմϴ�.");			
		
		}
		
	}

}
