import java.util.Scanner;
public class sweek08 {
	public static void main(String [] args){
		Scanner key=new Scanner(System.in);
		System.out.print("�����Է�");
		int arg=key.nextInt();//arg ������ �Էµ� ���� ���� 
		if(arg>=20){//arg ���� 20�̻��ΰ�� �Ǻ� 
			System.out.print("�����Դϴ�.");
		}
		else {// �׿��� ��� �Ǻ� 
			System.out.print("�̼����� �Դϴ�.");
		}
		
	}
}
