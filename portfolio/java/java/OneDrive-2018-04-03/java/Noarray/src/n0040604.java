import java.util.Scanner;
public class n0040604 {
	public static void main(String [] args){
		Scanner zz= new Scanner(System.in);
		System.out.println("���ϴ� ȸ������ŭ ����� �Է��ϼ���.");
		int ar = zz.nextInt();
		System.out.println(ar+"��ŭ ȸ���� ��ŭ �Է°����մϴ�.");
		String[] arry=new String[ar];
		for(int a1=0;a1<arry.length;a1++){
			System.out.print("���ڿ� �Է�");
			arry[a1]=zz.nextLine();
		}
		for(String z:arry){
			System.out.println(z);
		}
	}
}
