import java.util.Scanner;
public class max {
	public static void main(String [] args){
		Scanner scr=new Scanner(System.in);
		int max=0;
		do{
			System.out.print("���� �Է�");
			int i=scr.nextInt();
			if(i>max){
				max=i;
			}
			if(i==0)
				break;
		}while(true);
		System.out.print("�ִ밪��"+max);
	}

}
