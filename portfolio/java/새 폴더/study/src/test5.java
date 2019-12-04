import java.util.Scanner; 
public class test5 {
	public static void main(String[] args){
	Scanner T6 = new Scanner(System.in);
	int cc;
	String result;
	System.out.println("한개의 정수를 입력해 주세요.");
	 cc = T6.nextInt(); 
	 result =(cc%4==0)? "4의배수 입니다." : "4의 배수가 아닙니다."; 
	 System.out.println("입력된 정수는:"+ cc +"이고" + result);
}
}
