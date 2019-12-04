import java.util.*;
public class java03 {
	public static char ch_input(Scanner key){
		char ch;
		System.out.print("한개의 문자 입력");
		ch = key.next().charAt(0);
		return ch;
	}
	public static int check(char c){
		int result;
		if(c>='A'&&c<='Z'){
			result=1;
		}
		else if(c>='a'&&c<='z'){
			result=0;
		}
		else{
			result=-1;
		}
		 return result;
	}
		
	public static void main(String[] args){
		int result;
		char ch;
		char x;
		Scanner key = new Scanner(System.in);
		  ch = ch_input(key); 
		     result = check(ch);
		     //System.out.print(result);
		     
		      if(result == 1){
		    	 x=(char)(ch+32);
		    	  System.out.print(ch+"->"+x);
		      }
		      else if(result == 0){
		    	  x=(char)(ch-32);
		    	  System.out.print(ch+"->"+x);
		      }
		      else{
		    	  System.out.print(ch+"-> 문자 아님");
		      }
	     
	}
}
