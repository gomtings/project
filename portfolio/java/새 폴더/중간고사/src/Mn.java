import java.util.*;
public class Mn {
	public static void main(String[] args){
		Scanner key=new Scanner(System.in);
		System.out.println("M��");
		int R=1,M=key.nextInt();
		System.out.println("n��");
		int n=key.nextInt();
		for(int z=1;z<=n;z++){ //n��ŭ �ݺ��Ѵ�.
			R*=M;//2^4 �ϰ�� 1*2=2->2*2=4*2=8*2=16 
		}
		System.out.print(R);
	}
}
