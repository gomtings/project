import java.util.Scanner;
public class week06 {
	public static void main(String[] args){
		Scanner key=new Scanner(System.in);
		System.out.println("문자열 입력:");
		String str=key.next();
		int wh=str.length()-1;
		System.out.println("역순 출력");
		for(int a=wh;a>=0;a--){
			System.out.print(str.charAt(a));
		}
	}
}
