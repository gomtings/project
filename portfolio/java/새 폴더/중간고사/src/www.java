import java.util.*;
public class www {
	public static void main(String [] args){
		Scanner key=new Scanner(System.in);
		System.out.println("���ڿ��Է�");
		String str=key.next();
		System.out.println("���� ");
		int i=str.length()-1;
		for(int a=i;a>=0;a--){
			System.out.print(str.charAt(a));
		}
	}

}
