import java.util.*;

class join {
	private String Account;//���̵�
	private String Name;//�̸�
	private String Live;//�ּ� 
	private String Password;//��й�ȣ
	private int Born_year;//�������  
	private static int count = 0;//ȸ����
	join(String Account , String Password ,String Name ,String Live ,int Born_year){
		this.Account=Account;
		this.Password=Password;
		this.Name=Name;
		this.Live=Live;
		this. Born_year= Born_year;
	}
}
class pcroom{
	private join[] MJ;
	private String Pcname = "Root";
	private String Pcpassword = "1234";
	private int time;	
	pcroom(join[] mj , int time){
		this.MJ=mj;
		this.time=time;
	}
	public boolean Login(String Account, String password){
		boolean x ,y;
		if(Account.equals(Account)&&password.equals(password)){
			x=true;
		}
		else{
			x=false;
		}
		
		return x;
	}
}

public class t05 {
	public static void main(String[] args) {
		join mj[] = new join[5];
		mj[0] = new join("Happy", "���", "��õ", "hs12", 96);
		mj[1] = new join("Love", "����", "����", "ge12", 98);
		mj[2] = new join("Great", "����", "����", "sy12", 97);
		mj[3] = new join("Pretty", "����", "����", "js12", 97);
		mj[4] = new join("Handsome", "�ֻ�", "����", "ljs12", 93);
		int time=(int)(Math.random()*23+1);
		pcroom pc = new pcroom(mj , time);
		Scanner scan = new Scanner(System.in);
		while (true) {
			System.out.println("Noname �ǽù濡 ���Ű� ȯ���մϴ�. ���� �ð��� "+time+ "�� �Դϴ�.");
			System.out.println("1.�α���");
			System.out.println("2.��й�ȣ ã��");
			System.out.println("3.������ �α���");
			System.out.println("4.����");
			int num = scan.nextInt();
			if (num == 4) {
				System.out.println("������ �� �̿����ּ���");
				break;
			}
			switch (num) {
			case 1:
				System.out.println("ID�Է�");
				String id = scan.next();
				System.out.println("Password �Է�");
				String pw = scan.next();
				if (pc.Login(id, pw) == true) {
					System.exit(0);
				}
				break;

			case 2:
				System.out.println("ID�Է�");
				id = scan.next();
				System.out.println("�̸� �Է�");
				String name = scan.next();
				pc.Pass(id, name);
				break;
			case 3:
				System.out.println("������ID�Է�");
				id = scan.next();
				System.out.println("Password �Է�");
				pw = scan.next();
				if (pc.getPcname().equals(id)) {
					if (pc.getPcpassword().equals(pw))
						pc.PcM();
				}
				break;
			}

		}

	}
}
