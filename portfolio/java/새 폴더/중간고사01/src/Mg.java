import java.util.*;
public class Mg {
	public static void main(String [] args){
		Scanner key = new Scanner(System.in);
		System.out.println("���ع��ڴ� M �Դϴ�.");
		System.out.println("ù��° ���ڸ� �Է��ϼ���.");
		char cr=key.next().charAt(0);
		System.out.println("ù��° ���ڸ� �Է��ϼ���.");
		char ch=key.next().charAt(0);
		final int M='M';
		int a=M-cr;
		int b=M-ch;
		System.out.println(a);
		System.out.println(b);
		if(M == a && M == b){
			System.out.println(cr+"1.��"+ch+"�� ������ �����Դϴ�.");
		}
		else if(a ==M ){
			System.out.println(cr+"2�� ���� M �� �����մϴ�. ");
		}
		else if( b == M){
			System.out.println(ch+"3�� ���� M �� �����մϴ�. ");
		}
		else if(a>b){
			System.out.println(ch+"4�� ���� M �� �������ϴ�. ");
		}
		else if(a<b){
			System.out.println(cr+"5�� ���� M �� �������ϴ�. ");
		}
		else if(a<0&&b<0&&-a<b){
			System.out.println(cr+"6�� ���� M �� �������ϴ�. ");
		}
	}
}
