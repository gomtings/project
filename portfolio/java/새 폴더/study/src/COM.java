import java.util.Scanner;
public class COM {
	public static void main(String[]args){
		int a;
		int b;
		int a1;
		int a2;
		int x=20;
		final char ch ='M';
		System.out.println("���� ���� M");
		Scanner v = new Scanner(System.in);
		System.out.println("1.���� �Է� ");
		a = v.next().charAt(0);
		System.out.println("2.���� �Է� ");
		b = v.next().charAt(0);
		a1 =ch - (char)a;
		a2 =ch - (char)b;
		System.out.print(a);
		System.out.print(b);
		if(a>=65 && a<=90 && b>=65 && b<=90)
		{
			if(a1<a2)
				System.out.print("���� "+ a +"��(��) "+ ch +"�� �������ϴ�.");
	  else
			System.out.print("���� "+ b +"��(��) "+ ch +"�� �������ϴ�.");
		}
		System.out.print("�ҹ��ڸ� �Է� �ϼ˽��ϴ�.");
}
}
