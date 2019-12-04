import java.util.Scanner;
public class t0321 {
	public static void main(String[] args){
		int t;
		int t2;
		int t3;
		int t4;
		int t5;
		int t6 ;
		int t12 ;
		int t13 ;
		int t7 = 12;
		int t8 = 21;
		int t9 =33;
		int t10 =14;
		int t11 =9;
		Scanner aa = new Scanner(System.in);
		System.out.print("반가워요.두 정수를 입력해 주세요.");
		t =  aa.nextInt();
		t2 =  aa.nextInt();
		 t4= t-t2;
		 t5= t*t2;
		
		t3 =(t > t2)?  t : t2;
		t6 =(t3 <= 0)?  t7 : t8;
		t12 = t8/3;
		System.out.print("결과는:"+ t6 + "입니다.");
		
		
		
	}
}

