import java.util.Scanner;
public class randomsss {
	public static void main(String[] args) {
		Scanner v = new Scanner(System.in);
		int a=(int)(Math.random()*100+1);
		while(true){
			System.out.print("������ �Է��ϼ���.");
			int x=v.nextInt();
			if(x<a){
				System.out.println("�������� ���� ���� �Է��߽��ϴ�.");
			}
			else if(x>a){
				System.out.println("�������� ū ���� �Է��߽��ϴ�.");
			}
			else if(x==a){
				System.out.println("������ ������ϴ�.");
				break;
			}
		}
	}

}
