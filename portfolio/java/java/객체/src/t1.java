import java.util.*;
class Box{
int a,b,c;
int abc(){
	return a*b*c;
}
}
public class t1 {
	public static void arry(int[] ar){
		for(int a=0;a<ar.length;a++){
			ar[a]=(int)(Math.random()*100);
		}
	}
	public static void main(String[] args) {
		int[] c=new int[10];
		Box ar = new Box();
		ar.a=1;
		ar.b=2;
		ar.c=3;
		System.out.print( ar.abc());
	      arry(c);
        for(int x:c){
        	System.out.print(x+" ");
        }
        	
}
}
