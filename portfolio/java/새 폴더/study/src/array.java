import java.util.Scanner;
public class array {
	public static void main (String [] aegs){
		Scanner v = new Scanner(System.in);
		int[] s=new int[5];
		int z=0;
		char d;
		
		System.out.println("정수입력");
		for(int a=0;a<s.length;a++){
			s[a]=v.nextInt();
		}
		for(int i=0;i<s.length;i++){
			z+=s[i];
			
		}
		System.out.println("결과출력  y or n");
		d=v.next().charAt(0);
		if( d == 'y'){
		System.out.println(z/5);
		}
		else{
		System.out.println(z);
		}
	}
}
