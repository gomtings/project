import java.util.*;
public class 오렌지 {
	public static void main(String [] args){
		Scanner key = new Scanner(System.in);
		System.out.print("오랜지 개수");
		int o=key.nextInt();
		int b=o%10;
		int b2=o/10;
		System.out.print(b2+"박스가 필요하고"+b+"개가 남습니다.");
	}
}
