import java.util.*;

class FastFood {
	static String food;
	static int pay;
	static int realpay;
	static char x;

	FastFood(char x) {
		this.x = x;
		MenuProc.y = x;
	}

	void costCal(int num) {
		realpay = pay * num;
	}

	int getrealpay() {
		return realpay;
	}

	public String toString() {
		System.out.println("==========�Ŵ� ����============");
		System.out.println("�ܹ���(H,h)/ġŲ����(C,c),���̽�ũ��(I,i)/����Ƣ��(P,p)");
		System.out.println("�ش� ������ �Է��ϼ���. ����� n �Ǵ� N:");
		return "";
	}
}

class MenuProc {
	static String food;
	static int pay;
	static int realpay;
	static char y;
	MenuProc(){
		y=FastFood.x;
	}

	static String menuName() {
		switch (y) {
		case 'H':
		case 'h':
			food = "�ܹ���";
			break;
		case 'I':
		case 'i':
			food = "���̽�ũ��";
			break;
		case 'P':
		case 'p':
			food = "����Ƣ��";
			break;
		case 'C':
		case 'c':
			food = "ġŲ����";
			break;

		}
		return food;
	}

	static int vaLue() {
		switch (FastFood.x) {
		case 'H':
		case 'h':
			pay = 2500;
			break;
		case 'I':
		case 'i':
			pay = 1500;
			break;
		case 'P':
		case 'p':
			pay = 3000;
			break;
		case 'C':
		case 'c':
			pay = 1000;
			break;

		}
		return pay;
	}
}

public class aa9 {
	public static void main(String[] args) {
		Scanner key = new Scanner(System.in);
		char x = 0;
		FastFood obj = new FastFood(x);
		while (true) {
			System.out.print(obj);
			MenuProc.menuName();
			MenuProc.vaLue();
			x = key.next().charAt(0);
			if (x == 'n' || x == 'N')
				break;
			System.out.println("* �Ŵ�" + MenuProc.food + "      " + "* ����" + MenuProc.pay);
			System.out.print("������ �Է��ϼ���");
			obj.costCal(key.nextInt());
		}
		System.out.println("���� ��:");
		int a = key.nextInt();
		System.out.println("�Ž��� ��:" + (a - obj.getrealpay()) + "�Դϴ�.");
	}

}