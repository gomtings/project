public class sosu {
	public static void main(String [] args){
		for(int a=2;a<30;a++){
			int z=0;
			for(int b=2;b<a;b++){
				if(a%b == 0){
					z++;
				}
			}
			if(z==0){
				System.out.print(a+" ");
			}
		}
	}
}
