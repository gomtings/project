public class swek09 {
	public static void main(String [] args){
		int i=0;
		int j=0;
		int sum=0;
		
		while(i<2){
		while(j<3){
		sum+=i+j;
		j++;
		} //j�� while 
		i++;
		j=0;
		
	}// i ��  while
		System.out.print(sum);
}
}
