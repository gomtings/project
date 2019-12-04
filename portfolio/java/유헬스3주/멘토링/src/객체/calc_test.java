package 객체;
import java.util.*;
public class calc_test {
public static void main(String[] args){
	Scanner key = new Scanner(System.in);
	cals mycalc = new cals();
	System.out.print("숫자 1을 입력하세요.");
	int a=key.nextInt();
	System.out.print("숫자 2을 입력하세요.");
	int b=key.nextInt();
	
	int result  = mycalc.max(a, b);
	System.out.print("둘중 큰 값은 "+result+"입니다");
}
}
