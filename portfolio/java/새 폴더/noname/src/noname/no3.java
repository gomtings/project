package noname;
import java.util.Scanner;
public class no3 {
	public static void main(String[] args){
		Scanner c =new Scanner(System.in);
		System.out.print("���� 1�� �Է��ϼ���.");
		int a=c.nextInt();
		System.out.print("���� 2�� �Է��ϼ���.");
		int b=c.nextInt();
		System.out.println((a==b)+"");//a��b�� ���� ���
		System.out.println((a!=b)+""); //a�� b�� �ٸ����
		System.out.println((a>b)+"");//a�� b���� Ŭ���
		System.out.println((a<b)+"");//a��b�����������
		System.out.println((a<=b)+"");//a��b ���� �۰ų� �������
		System.out.println((a>=b)+"");//a��b���� ũ�ų� �������
		System.out.println((a==4&&b==8)+"");// a��b�� ��� ���� ��� ��
		System.out.println((a==4||b==8)+"");//a,b ���� �ϳ��� ���ϰ�� ��
		
		
			}

}
