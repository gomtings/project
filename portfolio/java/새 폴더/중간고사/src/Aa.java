import java.util.*;
public class Aa {
	public static void main(String[] args){
		Scanner key=new Scanner(System.in);
		int A=0,a=0,Z=0;
		while(Z<10){
			System.out.print("영문 입력");
			char ch=key.next().charAt(0);
			
			if(ch>='A'&&ch<='Z'){
				A++;
			}
			else if(ch>='a'&&ch<='z'){
				a++;
			}
			Z++;
		}
		System.out.print("대문자:"+A+"소문자:"+a);
	}
}
