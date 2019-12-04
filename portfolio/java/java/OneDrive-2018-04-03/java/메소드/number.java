import java.util.*;
public class number {
	int ca;// 메소드에사용할 변수
		int pluse=ca+1; // "
		int minus=ca-4;//  "
	public static void main(String[] args) {
		number myber =new number();// 메소드 선언  메소드는 클레스명과 동일해야 한다. 
		Scanner vv=new Scanner(System.in);
		System.out.print("정수입력");	
		 myber.ca=vv.nextInt();
		 myber.pluse=myber.ca+1;
		 myber.minus=myber.ca-7;
		System.out.println("입력 값"+myber.ca);	
		System.out.println("pluse 메소드로 변경 한 값"+myber.pluse);
		System.out.println("minus 메소드로 변경 한 값"+myber.minus);
		
	}

}
