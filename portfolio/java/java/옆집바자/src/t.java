import java.util.*;
public class t {
	public static void main(String[] args){
		Scanner ney = new Scanner(System.in);
		int[] a = {1,2,3,4}; 
		int[] a2= new int[10];
		int[] a3 = new int[]{1,2,3,4};
		int[] a4;
		int hap=0;
		a4 = new int[10];
		for(int i=0;i<a2.length;i++){
		  	a2[i]=ney.nextInt();
		}
		for(int i=0;i<a2.length;i++){
			hap+=a2[i];
		  	System.out.print(a2[i]+" ");
		}
		for(int data: a2 ){
		  	System.out.print(data);
		}
	}
}
