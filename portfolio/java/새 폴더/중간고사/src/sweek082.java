import java.util.Scanner;
public class sweek082 {
		public static void main(String [] args){
			Scanner key=new Scanner(System.in);
			System.out.print("�ӵ� �Է�");
			int speed=key.nextInt(); //speed������ �Է¹��� ���� ����
			if(speed >=0&&speed<30){ //0�̻� 30�̸� �ϰ椷 ���� �Ǻ�
				System.out.print("�����ϴ�.");
			}
			else if(speed>=30 && speed<80){//30�̻� 80�̸� ���� 
				System.out.print("�����Դϴ�.");
			}
			else if(speed >=80){//80�̻� ���� �Ǻ� 
				System.out.print("�����ϴ�");
			}
			else{//���� ��� ��찡 �ƴѰ�� 
				System.out.print("�ӵ��Է��� �߸� �̽��ϴ�");
			}	
		}
	}