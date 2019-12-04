import java.util.*;
public class Sample {
	public static void main(String[]   args) {
		Scanner key=new Scanner(System.in);
		int x, y;
		int max, min;
		
		System.out.println(" 두 개의 정수 입력 : ");  
		x=key.nextInt(); 
		y=key.nextInt();
		if(x %2 ==0)  //관계식 결과가 
			System.out.println("1: 짝수");  //참이면 실행
		else   
			System.out.println("2: 홀수");  //거짓이면 실행
		
		if(x>y){ //관계식 결과에 따른 실행 문장이 두개 이상이면 반드시 영역을 표시해야 함
			max=x;
			min=y;
		}
		else{
			max=y;
			min=x;
		}
		System.out.println("max : " + max +"\nmin : " +min +"\nmax/min = " + (max/min));
	     }
}
