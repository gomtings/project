
public class 시그마_소수 {
	public static void main(String [] args){
		int sum=0;
		int z;
		for(int a=1;a<=30;a++){
			sum+=a*a+1;
		}
		for(int a=2;a<sum;a++){
			z=0;
			for(int b=2;b<a;b++){
				if(a%b==0){
					z++;
				}
			}
			if(z==0){
				System.out.println(a+" ");
			}
		}
	}
}
