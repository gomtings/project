package noname;
import java.util.Scanner;
public class No04053 {
	public static void main(String [] args ){
		Scanner zz=new Scanner(System.in);
		System.out.println("���ڿ��� �Է��ϼ���.");
		String str = zz.nextLine();
		System.out.println("2.���ڿ��� �Է��ϼ���.");
		String str2 = zz.nextLine();
		if(str.equals(str2)){ //��ҹ��� ���� ���� ���Ϸ���.
			//str.equalsIgnoreCase(str2)<-������ ���� �ۼ��ؾ��Ѵ�.
			System.out.println("����.");
		}
		else{
			System.out.println("�ٸ���.");
		}
	}

}
