import java.util.Scanner;
public class triangles {
	public static void main(String [] args){
		Scanner scr=new Scanner(System.in);
		for(int b=1;b<5;b++){
			for(int c=b;c<5;c++){
				System.out.print(" ");
			}
			for(int s=1;s<=b*2-1;s++){
				System.out.print("*");
			}
			System.out.println();
		}
	}

}
