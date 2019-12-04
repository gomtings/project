package noname;
import java.util.Scanner;
public class No04053 {
	public static void main(String [] args ){
		Scanner zz=new Scanner(System.in);
		System.out.println("문자열을 입력하세요.");
		String str = zz.nextLine();
		System.out.println("2.문자열을 입력하세요.");
		String str2 = zz.nextLine();
		if(str.equals(str2)){ //대소문자 구분 없이 비교하려면.
			//str.equalsIgnoreCase(str2)<-다음과 같이 작성해야한다.
			System.out.println("같다.");
		}
		else{
			System.out.println("다르다.");
		}
	}

}
