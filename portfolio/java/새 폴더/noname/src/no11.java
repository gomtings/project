import java.util.Scanner;
public class no11 {
	public static void main(String[] args) {
		Scanner d =new Scanner(System.in);
		System.out.print("a.���ؼ��ڸ� �Է��� �ּ���.");
		int a =d.nextInt();
		System.out.print("b.���ؼ��ڸ� �Է��� �ּ���.");
		int b =d.nextInt();
		System.out.print("a.������ �Է��� �ּ���.");
		int c =d.nextInt();
		System.out.print("b.������ �Է��� �ּ���.");
		int e =d.nextInt();
		if(a==c&&b==e){
			System.out.print("���ؼ��ڿ� �񱳼��ڰ� �����մϴ�");
		}
		else{
			System.out.print("���ؼ��ڿ� �񱳼��ڰ� �ٸ��ϴ�.");
		}
		
	}

}
