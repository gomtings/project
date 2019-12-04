package study;
import java.util.Scanner;
public class pebonach {
	public static void main(String [] args ){
		Scanner v =new Scanner(System.in);
    int a = 0, b = 1 ,c;
    int d;
    System.out.println("정수 입력");
    d= v.nextInt();
    System.out.println(a);
    System.out.println(b);
    
    for(int i=2; i<=d; i++){
        c=a+b;
        System.out.println(c);
        a=b;
        b=c;
    }        
}
}
