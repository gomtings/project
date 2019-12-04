import java.util.*;
public class Mn {
	public static void main(String[] args){
		Scanner key=new Scanner(System.in);
		System.out.println("M값");
		int R=1,M=key.nextInt();
		System.out.println("n값");
		int n=key.nextInt();
		for(int z=1;z<=n;z++){ //n만큼 반복한다.
			R*=M;//2^4 일경우 1*2=2->2*2=4*2=8*2=16 
		}
		System.out.print(R);
	}
}
