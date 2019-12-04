import java.util.Scanner;  
public class Test3 {
	public static void main(String[] args){
	int salay;	
	long pay;
	Scanner t3 = new Scanner(System.in); 
	System.out.print("월급을 입력해 주세요."); 
	 salay = t3.nextInt(); 
	 pay = salay * 12;
	 System.out.print("당신의 연봉은:" + pay + "월급은:" + salay +"입니다." ); 
}
}
