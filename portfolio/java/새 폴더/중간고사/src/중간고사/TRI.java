package �߰����;
import java.util.Scanner;
public class TRI {
	public static void main(String [] args){
		Scanner key=new Scanner(System.in);
		int i = key.nextInt();//����� �ټ� �Է� 
		int a=1;// ���� ����� ���� �ʱ�ȭ 
		for(int b=1;b<=i;b++){ // b���� i������ �۰ų� �������(��)
			for(int c=1;c<=b;c++){//c ���� b���� ����������
				System.out.print(a+"");//1���� ���
				a++;//ī��Ʈ ����
			}
			System.out.println();//�ٹٲ� 
		}
	}
}
