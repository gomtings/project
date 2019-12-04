import java.util.Scanner;
public class 음수판단 {
	public static void main(String [] args){
		Scanner key = new Scanner(System.in);
		System.out.print("실수 입력");
		double a=key.nextDouble();
	   System.out.print("입력된 실수 는 "+a);
	   System.out.print((a<=0)?"음수 입니다.":"음수가 아닙니다.");
	}
}
