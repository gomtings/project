import java.util.*;

class FastFood {
	static String food;
	static int pay;
	static int realpay;
	

	FastFood(char x) {
		food=MenuProc.menuName(x);
	}

	void costCal(int num) {
	 realpay = pay*num;
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

	static String menuName(char y) {

		switch (y) {
		case 'H':
		case 'h':
			FastFood.food = "�ܹ���";
			break;
		case 'I':
		case 'i':
			FastFood.food = "���̽�ũ��";
			break;
		case 'P':
		case 'p':
			FastFood.food = "����Ƣ��";
			break;
		case 'C':
		case 'c':
			FastFood.food = "ġŲ����";
			break;

		}
		return FastFood.food;
	}

	static int vaLue(char y) {
		FastFood.pay=0;
		switch ( y) {
		case 'H':
		case 'h':
			FastFood.pay = 2500;
			break;
		case 'I':
		case 'i':
			FastFood.pay = 1500;
			break;
		case 'P':
		case 'p':
			FastFood.pay = 3000;
			break;
		case 'C':
		case 'c':
			FastFood.pay = 1000;
			break;

		}
		return FastFood. pay;
	}
}

public class aa09 {
	public static void main(String[] args) {
		Scanner key = new Scanner(System.in);
		char x = 0;
		FastFood obj = new FastFood(x);
		while (true) {
			System.out.print(obj);
			x = key.next().charAt(0);
			if (x == 'n' || x == 'N')
				break;
			System.out.println("* �Ŵ�" +MenuProc.menuName(x) + "      " + "* ����" + MenuProc.vaLue(x));
			System.out.print("������ �Է��ϼ���");
			obj.costCal(key.nextInt());
		}
		System.out.println("���� ��:");
		int a = key.nextInt();
		System.out.println("�Ž��� ��:" + (a-obj.getrealpay()) + "�Դϴ�.");
	}

}