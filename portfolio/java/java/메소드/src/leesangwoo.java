import java.util.*;
class lee{
	int key =100;
	String name ="leesangwoo";

	public static void woo(){
		int sum=0,sum2=0;
		for(int a=0;a<=20;a++){
			int x=(int)(Math.random()*100);
			if(x%2==0){
				sum++;
			}
		}
		System.out.print("난수의 짝수 개수는 "+sum+"입니다.");
	}
	public static void sang(String pw){
		int sum=0,sum2=0;
		for(int z=0;z<pw.length();z++){
			if(pw.charAt(z)>='A' && pw.charAt(z)<='Z'||pw.charAt(z)>='a' && pw.charAt(z)<='z'){
					sum++;
			}
			else if (pw.charAt(z)>='0' && pw.charAt(z)<='9'){
				sum2++;
			}
		}
		
		System.out.print("영문자의 개수는  "+sum+"입니다."+"숫자의 개수는"+sum2+"입니다.");
	}
	}
public class leesangwoo {
	public static void main(String [] srgs){
		Scanner key = new Scanner(System.in);
		lee lees = new lee();
		String pw;
		System.out.print("비밀번호 입력 ");
            pw=key.next();
           lees.sang( pw );
	}
}
