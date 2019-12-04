import java.util.*;
public class ch03 {
	public static void main(String [] args){
		Scanner key =new Scanner(System.in);
		System.out.print("영문자를 입력해 주세요.");
		char ch=key.next().charAt(0);
		switch(ch){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			System.out.print("모음 입니다.");
			break;
			default:
				System.out.print("모음이 아닙니다.");			
		
		}
		
	}

}
