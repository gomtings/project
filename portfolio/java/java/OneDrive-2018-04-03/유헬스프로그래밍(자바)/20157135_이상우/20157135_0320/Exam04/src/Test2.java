import java.util.Scanner;  
public class Test2 {
	public static void main(String[] args){
	Scanner T2 = new Scanner(System.in);
	float cc;
	String result;
	System.out.println("실수를 입력해 주세요.");
	 cc = T2.nextInt(); 
	 result =(cc>0)? "양수입니다." : "홀수 입니다."; 
	 System.out.println("입력된 실수는:"+ cc + result);
}
}
