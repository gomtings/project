package study;
import java.util.Scanner;
public class sample2 {
	public static void main(String[]   args) {
		Scanner key=new Scanner(System.in);
		char ch;
		
		System.out.println(" 한 개의 문자 입력 : ");  
		ch= key.next().charAt(0);
		
		
		if(ch =='%')  //변수 ch에 저장된 문자가 '%'이면
			System.out.println("7%2 = " +(7%2));  //나머지 연산 실행
		else if(ch =='&')  //변수 ch에 저장된 문자가 '&'이면   
			System.out.println("7&2 = " +(7&2));  //& 연산 실행
		else if(ch =='>')  //변수 ch에 저장된 문자가 '>'이면   
			System.out.println("7>>2 = " +(7>>2));  // >> 연산 실행
		else
			System.out.println("해당 연산이 아닙니다");
	     }
}

