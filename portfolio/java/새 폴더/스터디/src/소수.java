import java.util.*;
public class 소수 {
	public static void main(String [] args){
		Scanner key=new Scanner(System.in);
		System.out.print("반복횟수");
		int x=key.nextInt();
		int z;
		int sum=0;
		for(int a=2;a<x;a++){
			z=0;
			for(int b=2;b<a;b++){
				if(a%b==0){
					z++;
				}
			}
			if(z==0){
				sum+=a;
				System.out.println(a+" ");
			}
		}
		System.out.println("소수의 합"+sum);
	}
}
