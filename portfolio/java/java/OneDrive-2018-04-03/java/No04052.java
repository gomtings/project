import java.util.Scanner;
public class No04052 {
	public static void main(String [] args ){
		Scanner zz=new Scanner(System.in);
		
		System.out.println("문자열을 입력 하세요.");
		String str= zz.nextLine();
		
		System.out.println(str +"의 길이는:"+str.length()+"입니다.");
		System.out.println(str.substring(0,1));
		
	}
}
