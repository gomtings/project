import java.util.Scanner;
public class No0405 {
	public static void main(String []args){
		Scanner zz=new Scanner(System.in);
		System.out.println("�α� ���۴� ������ ��� �Դϴ�.");
		System.out.println("���̴� 20�� �̻��̰� �����ڸ� ���� �����մϴ�. ");
		System.out.println("�̸��� �Է��ϼ���.");
		String str=zz.nextLine();
		System.out.println("���̸� �Է��ϼ���.");
		int i=zz.nextInt();
		if(i>=20){
			System.out.println("������ �Է��ϼ���.");
			int i1=zz.nextInt();
			if(i1==0){
				System.out.println("�����Դϱ�?");
				int i2=zz.nextInt();
				if(i2 == 0){
					System.out.println("������ �Ϸ�̽��ϴ�.");
				}
				System.out.println("������ �Ϸ�̽��ϴ�.");
			}
			
		}
	}

}
