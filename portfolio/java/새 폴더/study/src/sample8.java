import java.util.Scanner;
public class sample8 {
	public static void main(String[]args){
		int a;
		int b;
		int a1;
		int a2;
		int x=20;
		final char ch ='M';
		System.out.println("���� ���� M ");
		Scanner v = new Scanner(System.in);
		System.out.println("1.���� �Է� ");
		a = v.next().charAt(0);
		System.out.println("2.���� �Է� ");
		b = v.next().charAt(0);
		a1 =ch - (char)a;
		a2 =ch - (char)b;
		if(a>=65 && a<=90 && b>=65 && b<=90){ //�빮�� ���ǹ� 
		if(a1>0 && a2>0 && a1<a2)
			System.out.print("���� "+ a +"��(��) "+ ch +"�� �������ϴ�.");
		else if(a1<0 && a2<0 && a1>a2)
			System.out.print("���� "+ a +"��(��) "+ ch +"�� �������ϴ�.");
		else if(a1<0 && a2>0 && -a1>a2)
			System.out.print("���� "+ b +"��(��) "+ ch +"�� �������ϴ�.");
		else if(a1<0 && a2>0 && -a1<a2)
			System.out.print("���� "+ a +"��(��) "+ ch +"�� �������ϴ�.");
		
		else if(a1>0 && a2>0 && a1>a2)
			System.out.print("���� "+ b +"��(��) "+ ch +"�� �������ϴ�.");
		else if(a1<0 && a2<0 && a1<a2)
			System.out.print("���� "+ b +"��(��) "+ ch +"�� �������ϴ�.");
		else if(a1>0 && a2<0 && a1>-a2)
			System.out.print("���� "+ b +"��(��) "+ ch +"�� �������ϴ�.");
		else if(a1>0 && a2<0 && a1<-a2)
			System.out.print("���� "+ a +"��(��) "+ ch +"�� �������ϴ�.");
		
		else if(a == ch)
			System.out.print("���� "+ (char)a +"��(��) "+ ch +"�� �������ϴ�.");
		else if(b == ch)
			System.out.print("���� "+ (char)b +"�� (��) "+ ch +"�� �������ϴ�.");
	
		else if(a == b)
			System.out.print("���� "+ (char)a +"�� "+ (char)b +"�� �����մϴ�.");
		}
		
	}
		}
