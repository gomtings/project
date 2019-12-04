import java.util.*;
public class q_quit {
	public static void main(String[] args) {
		Scanner key = new Scanner(System.in);
		int x=0;//카운트용 변수
		while(true){
			System.out.print("문자를 입력");
			char ar=key.next().charAt(0); //문자열 저장 
			x++;//문자 입력횟수 
			if(ar=='q')// 정지 조건  
				break;
		}
		System.out.print("문자 입력 횟수"+x);
	}
}
