import java.util.Scanner;
public class num6 {
	public static void main(String[] args){
		Scanner v = new Scanner(System.in);
		int a;
		int b;
		long d=0;
		System.out.println("M�� �Է�");
		a=v.nextInt();
		System.out.println("n�� �Է�");
		b=v.nextInt();
		for(int c=1;c<=b;c++){
			a=a*c;
		}
		
		System.out.println(a);
		
	}

}
