import java.util.*;
public class Mg {
	public static void main(String [] args){
		Scanner key = new Scanner(System.in);
		System.out.println("기준문자는 M 입니다.");
		System.out.println("첫번째 문자를 입력하세요.");
		char cr=key.next().charAt(0);
		System.out.println("첫번째 문자를 입력하세요.");
		char ch=key.next().charAt(0);
		final int M='M';
		int a=M-cr;
		int b=M-ch;
		System.out.println(a);
		System.out.println(b);
		if(M == a && M == b){
			System.out.println(cr+"1.와"+ch+"가 동일한 문자입니다.");
		}
		else if(a ==M ){
			System.out.println(cr+"2가 기준 M 과 동일합니다. ");
		}
		else if( b == M){
			System.out.println(ch+"3가 기준 M 과 동일합니다. ");
		}
		else if(a>b){
			System.out.println(ch+"4가 기준 M 과 가깝습니다. ");
		}
		else if(a<b){
			System.out.println(cr+"5가 기준 M 과 가깝습니다. ");
		}
		else if(a<0&&b<0&&-a<b){
			System.out.println(cr+"6가 기준 M 과 가깝습니다. ");
		}
	}
}
