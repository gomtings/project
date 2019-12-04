import java.util.Scanner;
public class sweek08 {
	public static void main(String [] args){
		Scanner key=new Scanner(System.in);
		System.out.print("나이입력");
		int arg=key.nextInt();//arg 변수에 입력된 정수 저장 
		if(arg>=20){//arg 값이 20이상인경우 판별 
			System.out.print("성인입니다.");
		}
		else {// 그외의 경우 판별 
			System.out.print("미성년자 입니다.");
		}
		
	}
}
