import java.util.*;
public class t06 {
	 public static void main(String[]  args){
		 Scanner key = new Scanner(System.in);
	      String str; //문자열 변수 선언
	while(true){
		System.out.println("문자열 입력");
	       str=key.next();   //문자열 입력
	          if(str.equalsIgnoreCase("quit")){
	        	  break;
	        	  //입력 받은 문자열이 “quit” 와 같으면 반복문 종료 
	          }
	          System.out.println("문자열 길이는:"+str.length());
	          //문자열 길이 출력
	}
	}
}
