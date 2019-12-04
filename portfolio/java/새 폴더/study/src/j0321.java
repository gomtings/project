import java.util.Scanner;
public class j0321 {
public static void main(String[] aregs){
	Scanner c2 = new Scanner(System.in);
	int cc;
	int cc2;
	char ch2;
	System.out.println("두 정수 입력");
	cc = c2.nextInt();
	cc2 = c2.nextInt();
	System.out.println("원하는 연산자를 입력해 주세요" + "해당연산자 를 계산 합니다.");
	ch2 = c2.next().charAt(0);
	if(cc<0){
		System.out.println("입력값이 음수 입니다. 양수를 입력하세요.");
		cc = c2.nextInt();
	}
	System.out.println("입력값은:"+cc);
	System.out.println(cc>>>2);
	System.out.println(cc>>2);
	System.out.println(cc<<2);
	if(ch2 == '+' ){
		System.out.println(( cc+cc2));
	}
	else if(cc2 =='*'){
		System.out.println(( cc*cc2));
	}
	else if(cc2 =='/'){
		System.out.println(( cc / cc2));
	}
	else if(cc2 == '%'){
		System.out.println(( cc % cc2));
	}	
}
}
