
import java.util.*;

public class Wte {
	public static void main(String[] args){
		int a,b,c;
		int str;
		a=0;
		b=0;
		c=0;
		Scanner scan = new Scanner(System.in);

		System.out.print("순서대로 과목 성적을 입력하세요:");

		a =scan.nextInt();
		b =scan.nextInt();
		c =scan.nextInt();
		str = (a+b+c)/3;
		
if( str>=70){
	if(a>=60 && b>=60 && c>=60)
		
		System.out.println("합격");
		
	else
		System.out.println("불합격");		
	
}	
	else
		System.out.println("불합격");
		

	}

}


