import java.util.Scanner;
public class random {
	public static void main(String[] args){
		Scanner cc=new Scanner(System.in);
		int a=(int)(Math.random()*100+1);
		while(true){
			System.out.print("�����Է�");
			int x=cc.nextInt();
			if(x<a){
				System.out.println("���������� �۽��ϴ�.");
			}
			else if(x>a){
				System.out.println("���������� ū�� �Դϴ�.");
			}
			else if(x==a){
				System.out.print("�������� �­����ϴ�.");
				break;
			}
		}
	}
}