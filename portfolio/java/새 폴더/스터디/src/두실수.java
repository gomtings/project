import java.util.*;
public class 두실수 {
	public static void main(String [] args){
		Scanner key=new Scanner(System.in);
		System.out.print("실수 입력");
	Double a=key.nextDouble();
	System.out.print("2실수 입력");
	Double b=key.nextDouble();
	Double z=(a>b)?a:b;
	System.out.print(a+"와"+b+"->"+"큰수는 "+z);
	}
}
