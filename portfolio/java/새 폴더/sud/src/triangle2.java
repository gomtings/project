import java.util.Scanner;
public class triangle2 {
	public static void main(String []args){
		Scanner g=new Scanner(System.in);
		System.out.print("높이 입력");
		int a=g.nextInt();
		for(int i=1;i<=a;i++){
			for(int i2=1;i2<=i;i2++){
				System.out.print("*");
			}
			System.out.println();
		}
	}

}
