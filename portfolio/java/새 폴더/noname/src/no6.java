import java.util.Scanner;
public class no6 {
	public static void main(String[] args){
		System.out.println("���� �Է½� ������ ���� ���ڸ� �Է��Ͻÿ�.");
		Scanner c = new Scanner(System.in);
		System.out.println("���� 1�� �Է��ϼ���");
		int a=c.nextInt();
		System.out.println("���� 2�� �Է��ϼ���");
		int b=c.nextInt();
		
		int d=a*b++;//a*b  ����� ++
		int e=++b*a;// ����  b++�� + ++b��*a ��/ ++�Ļ��

		System.out.println(d);
		System.out.println(e);
		
		
	}

}
