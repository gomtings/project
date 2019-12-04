import java.util.*;
public class www {
	public static void main(String [] args){
		Scanner key=new Scanner(System.in);
		System.out.println("문자열입력");
		String str=key.next();
		System.out.println("역순 ");
		int i=str.length()-1;
		for(int a=i;a>=0;a--){
			System.out.print(str.charAt(a));
		}
	}

}
