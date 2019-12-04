import java.util.Scanner;
public class n0040604 {
	public static void main(String [] args){
		Scanner zz= new Scanner(System.in);
		System.out.println("원하는 회원수만큼 사이즈를 입력하세요.");
		int ar = zz.nextInt();
		System.out.println(ar+"만큼 회원수 만큼 입력가능합니다.");
		String[] arry=new String[ar];
		for(int a1=0;a1<arry.length;a1++){
			System.out.print("문자열 입력");
			arry[a1]=zz.nextLine();
		}
		for(String z:arry){
			System.out.println(z);
		}
	}
}
