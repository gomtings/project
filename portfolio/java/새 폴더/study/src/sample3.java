import java.util.Scanner;
public class sample3 {
	public static void main(String[] args){
		int size;
		int data;
		Scanner aa = new Scanner(System.in);
		System.out.print("1.한개의 정수 입력");
		size = aa.nextInt();
		if(size > 50){
			System.out.print("50초과 다시 입력");
			size = aa.nextInt();
		}
		System.out.print("2.한개의 정수 입력");
		data = aa.nextInt();
		if(data >10 ){
			System.out.print("10초과 다시 입력");
			data = aa.nextInt();
		}
		System.out.println(size + "^" + data + "=" + (size ^ data));
		System.out.println(size + "|" + data + "=" + (size | data));
		System.out.println(size + ">>" + data + "=" + (size >> data));
		System.out.println("~" + size + "=" + ( ~ size));
	}

}
