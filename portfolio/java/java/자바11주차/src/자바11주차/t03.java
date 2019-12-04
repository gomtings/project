package 자바11주차;
import java.util.*;
public class t03 {
	public static void main(String[] args){
		int[] dim=new int[6];
		initArray(dim);
		System.out.println("Max = " + max(dim) );
		System.out.println("Min = " + min(dim));
		
	}
	public static void initArray(int[] a){
		for(int i=0;i<a.length;i++){
			a[i]=(int)(Math.random()*100+1);
			System.out.print(a[i]+"\t");
		}
		System.out.println();
	}	
	public static int max(int[] ar){
		int mex=ar[0];
		for(int i=1;i<ar.length;i++){
			if(ar[i]>mex){
				mex=ar[i];
			}
		}
		return mex;
	}
	public static int min(int[] ar){
		int min=ar[0];
		for(int i=1;i<ar.length;i++){
			if(ar[i]<min){
				min=ar[i];
			}
		}
		return min;
	}
}