import java.util.Scanner;
public class sample3 {
	public static void main(String[] args){
		int size;
		int data;
		Scanner aa = new Scanner(System.in);
		System.out.print("1.�Ѱ��� ���� �Է�");
		size = aa.nextInt();
		if(size > 50){
			System.out.print("50�ʰ� �ٽ� �Է�");
			size = aa.nextInt();
		}
		System.out.print("2.�Ѱ��� ���� �Է�");
		data = aa.nextInt();
		if(data >10 ){
			System.out.print("10�ʰ� �ٽ� �Է�");
			data = aa.nextInt();
		}
		System.out.println(size + "^" + data + "=" + (size ^ data));
		System.out.println(size + "|" + data + "=" + (size | data));
		System.out.println(size + ">>" + data + "=" + (size >> data));
		System.out.println("~" + size + "=" + ( ~ size));
	}

}
