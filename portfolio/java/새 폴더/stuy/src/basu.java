import java.util.Scanner;
public class basu {
	public static void main(String[] args){
		Scanner scr=new Scanner(System.in);
		System.out.print("����� ���ϴ� ��� �Է�");
		int a=scr.nextInt();
		System.out.print("���Ƚ��");
		int b=scr.nextInt();
		for(int i=1;i<b;i++){
			System.out.print((a*i)+"\t");
		}
	}
}
