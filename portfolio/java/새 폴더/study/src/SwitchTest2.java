import java.util.Scanner;
public class SwitchTest2 {
	public static void main(String[] args){
		Scanner in = new Scanner(System.in);
		char ch;
		System.out.print("���� �Է�: ");
		ch = in.next().charAt(0);
		switch(ch){
		case 'A':
			System.out.println("Excellent");
			break;
		case 'B':
			System.out.println("Good");
			break;
		case 'C':
			System.out.println("Average");
			break;
		case 'D':
			System.out.println("Passing");
			break;
		case 'F':
			System.out.println("Failure");
			break;
			default :
				System.out.println("�ش� ���� ����");
		}
	}

}
