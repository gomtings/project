import java.util.Scanner;
public class week06 {
	public static void main(String[] args){
		Scanner key=new Scanner(System.in);
		System.out.println("���ڿ� �Է�:");
		String str=key.next();
		int wh=str.length()-1;
		System.out.println("���� ���");
		for(int a=wh;a>=0;a--){
			System.out.print(str.charAt(a));
		}
	}
}
