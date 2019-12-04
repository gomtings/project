import java.util.Scanner;
public class COM {
	public static void main(String[]args){
		int a;
		int b;
		int a1;
		int a2;
		int x=20;
		final char ch ='M';
		System.out.println("기준 문자 M");
		Scanner v = new Scanner(System.in);
		System.out.println("1.문자 입력 ");
		a = v.next().charAt(0);
		System.out.println("2.문자 입력 ");
		b = v.next().charAt(0);
		a1 =ch - (char)a;
		a2 =ch - (char)b;
		System.out.print(a);
		System.out.print(b);
		if(a>=65 && a<=90 && b>=65 && b<=90)
		{
			if(a1<a2)
				System.out.print("문자 "+ a +"가(이) "+ ch +"와 가깝습니다.");
	  else
			System.out.print("문자 "+ b +"가(이) "+ ch +"와 가깝습니다.");
		}
		System.out.print("소문자를 입력 하셧습니다.");
}
}
