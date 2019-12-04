import java.util.Scanner;
public class test {
public static void main (String[] args){
 int  t1;
 double t2;
 char t3;
 String t4;
 double as;
 int at;
 int at2;
 int at3;
Scanner key=new Scanner(System.in);
System.out.println("1.정수를 입력해 주세요.");
		t1 = key.nextInt();
		System.out.print("2.실수를 입력해 주세요.");
		t2 = key.nextDouble();
		System.out.print("3.문자를 입력해 주세요.");
		t3 = key.next().charAt(0);
		System.out.print("4.문자열을 입력해 주세요.");
		t4 = key.next();
    	String str;
	       str=(t1/t2==0) ? "짝수" : "홀수" ; //삼항연산자 
	       boolean a;
	       a = t1==t2;
	       at = ++t1;
	       at2 = --t1;
	       as=t1+t2;//입력 값중 t1,t2 합 
		System.out.println("입력값은:" + t1 + t2 + t3 + t4 +"입니다."); //입력된 모든값
	       System.out.println("as:"+ as);//입력 값중 t1,t2 합 출력
	       System.out.println("at:"+ at);//t1+1값
	       System.out.println("at2:"+ at2);
	       System.out.println("str:"+ str);
	       System.out.println("a:"+ a);
		}
	}

