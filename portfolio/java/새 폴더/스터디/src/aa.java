
public class aa {
	public static void main(String [] args){
		int i=0;
		int j=0;
		int sum=0;
		int sum2=0;
		while(i<3){//  
		while(j<10){//
		sum+=j; //i�� 1�϶� 91 + i�� 2�϶� 
		j++;
		}//j
		i++;
		j=0;
		sum2+=sum;
		sum=0;
	}//i
		System.out.print(sum2);
}
}