import java.util.Scanner;
public class ���������� {
	public static void main(String[] args){
		Scanner key= new Scanner(System.in);
		System.out.println("������ ������");
		int a = key.nextInt();
		int b= a%10;
		int e= a/10;
		System.out.println(b+","+e);
	}
}
