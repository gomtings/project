import java.util.*;
class Client{
	private String name; //�ֹ��� �̸�
	private int Coke; //�ݶ� ���� ����(ó���� 0������ ����)
	private int Popcorn; //���� ���� ����(ó���� 0������ ����)
	private int price;	//���� �ݾ�
	Client(){
		
	}
	String getname(){
		return name;
	}
}
class CGV{
	private Client[] c; //���� ��ü 
	private static int Co_ke = 20; // ���� CGV�� �����ִ� �ݶ� ����
	private static int Pop_corn = 20; // ���� CGV�� �����ִ� ���� ����
	public final int Coke_Price = 1000; // �ݶ� ����
	public final int Popcorn_Price = 2000; // ���ܰ���
	CGV(Client[] c){
		this.c=c;
	}
	public int SearchPerson(String name){
		int dex = 0;
		for(int i=0;i<c.length;i++){
			if(name.equals(c[i].getname())){
				dex=i;
			}
			dex=-1;
		}
		return dex;
	}
	public boolean Empty(int num,int select){
		boolean a = false;
		switch(num){
		case 1:
			if(select >Co_ke){
				System.out.println("���� �������� ���� ������ �ּ���. ���� �ݶ� ������:"+Co_ke);
				a=false;
			}
			else{
				a=true;
			}
			break;
		case 2:
			if(select >Pop_corn){
				System.out.println("���� �������� ���� ������ �ּ���. ���� ���� ������:"+Pop_corn);
				a=false;
			}
			else{
				a=true;
			}
			break;
		}
		return a;
	}
	public void The_number(){
		System.out.print("���� �ݶ��� ����"+Co_ke);
		System.out.print("���� �ݶ��� ����"+Pop_corn);
		System.out.print("���� �ݶ��� ����"+c);
	}
	public void info(int index){
		
	}
}
public class ����11 {
	public static void main(String[] args) {
		Client c[] = new Client[3];
		Scanner scan = new Scanner(System.in);
		for (int i = 0; i < c.length; i++) {
			c[i] = new Client();
			System.out.println((i + 1) + "��° ���̸�");
			c[i].setName(scan.next());
			System.out.println("�뵷");
			c[i].setPrice(scan.nextInt());

		}
		CGV CG_V = new CGV(c);
		while (true) {
			System.out.println("CGV�� ���Ű� ȯ���մϴ�.");
			System.out.println("����� ����,�ݶ� �Ǹ��ϰ� �ֽ��ϴ�. �߼��� ���ֽñ� �ٶ��ϴ�.");
			System.out.println("ȸ�� �̸��� �Է��� �ּ���");
			String n=scan.next();
			if(CG_V.SearchPerson(n)==-1){
				System.out.println("��ġ�ϴ� �̸��� �����ϴ� �ٽ� �Է����ּ���.");
				continue;
			}
			int per = CG_V.SearchPerson(n);

			System.out.println("1.�ݶ���,2.�˰���,3�� ����,4���� �ݶ�, ���� ���� 5,�Ȼ� ����");
			int select = scan.nextInt();
			if (select == 5) {
				System.out.println("���� �� ������ �� ����������� ���̷�~!");
				break;
			}
			switch (select) {
			case 1:
				System.out.println("�ݶ� ������ [ " + CG_V.Coke_Price + " ] �Դϴ�.");
				System.out.println("���� �����ִ� �ݶ� ������ [ " + CGV.getCo_ke() + " ] �Դϴ�.");
				System.out.print("���� �Է� :");
				int num = scan.nextInt();
				CG_V.Sell(per, 1, num);
				break;
			case 2:
				System.out.println("���� ������ [ " + CG_V.Popcorn_Price + " ] �Դϴ�.");
				System.out.println("���� �����ִ� ���� ������ [ " + CGV.getPop_corn() + " ] �Դϴ�.");
				System.out.print("���� �Է� :");
				int num2 = scan.nextInt();
				CG_V.Sell(per, 2, num2);
				break;
			case 3:
				CG_V.info(per);
				break;
			case 4:
				CG_V.The_number();
				break;}}}}
