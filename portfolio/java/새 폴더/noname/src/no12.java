import java.util.Scanner;
public class no12 {
	public static void main(String[] args) {
		Scanner d =new Scanner(System.in);
		System.out.println("���� ���α׷� �Դϴ�.");
		System.out.println("����a�� �Է��ϼ���");
		int a =d.nextInt();
		System.out.println("����b�� �Է��ϼ���");
		int b =d.nextInt();
		System.out.println("1.���ϱ�2.����3.���ϱ�4.������5.����");
		int c =d.nextInt();
		switch(c){
		case 1:
			System.out.println((a+b));
			break;
		case 2:
			System.out.println((a-b));
			break;
		case 3:
			System.out.println((a*b));
			break;
		case 4:
			System.out.println((a/b));
			break;
		case 5:
			System.out.println("����");
			break;
			default :
				
			
		}	
	}		
}
