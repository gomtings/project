package �߰����;
import java.util.*;
public class aa {
	public static void main(String[] args){
		Scanner key=new Scanner(System.in);
		String re="";
		System.out.print("���ڿ� �Է�");
		String str=key.next();
		System.out.print("�߰��� ���ڿ� �Է�");
		String str2=key.next();
		System.out.print("�߰��� ��ġ");
		int a=key.nextInt();
		int x=a-2;
		for(int z=0;z<=x;z++){
			System.out.print(str.charAt(z));
		}
		System.out.print(str2);
		for(int d=x+1;d<str.length();d++){
		System.out.print(str.charAt(d));
	}
}
}
