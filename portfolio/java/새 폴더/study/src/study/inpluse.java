package study;
import java.util.Scanner;
public class inpluse {
	public static void main(String[] args){
		char a;
		int c=0;
		Scanner v = new Scanner(System.in);
		do{
			System.out.println("���ڸ� �Է��ϼ���. �����Ϸ��� q�� �Է��ϼ���.");
		   a=v.next().charAt(0);
	       c++;
	       
	} while(a != 'q');
		System.out.println(c);	
}
}
