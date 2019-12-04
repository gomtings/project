import java.util.*;
public class ramdomarry {
	public static void main(String [] aegs){
		Scanner v = new Scanner(System.in);
		Random n =new Random();
		int[] s=new int[5];
		int z=0;
		char d;
		for(int a=0;a<s.length;a++){
			s[a]=n.nextInt(100);
			if( a>2&& a<100){
				
			}
		}
		for(int i=0;i<s.length;i++){
			z+=s[i];
		}
		System.out.println("гую╨"+z);
	}
}
