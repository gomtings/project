import java.util.*;
public class Sample {
	public static void main(String[]   args) {
		Scanner key=new Scanner(System.in);
		int x, y;
		int max, min;
		
		System.out.println(" �� ���� ���� �Է� : ");  
		x=key.nextInt(); 
		y=key.nextInt();
		if(x %2 ==0)  //����� ����� 
			System.out.println("1: ¦��");  //���̸� ����
		else   
			System.out.println("2: Ȧ��");  //�����̸� ����
		
		if(x>y){ //����� ����� ���� ���� ������ �ΰ� �̻��̸� �ݵ�� ������ ǥ���ؾ� ��
			max=x;
			min=y;
		}
		else{
			max=y;
			min=x;
		}
		System.out.println("max : " + max +"\nmin : " +min +"\nmax/min = " + (max/min));
	     }
}
