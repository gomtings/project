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
		System.out.println("==========매뉴 선택============");
		System.out.println("햄버거(H,h)/치킨조각(C,c),아이스크림(I,i)/감자튀김(P,p)");
		System.out.println("해당 문제를 입력하세요. 종료는 n 또는 N:");
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
			food = "햄버거";
			break;
		case 'I':
		case 'i':
			food = "아이스크림";
			break;
		case 'P':
		case 'p':
			food = "감자튀김";
			break;
		case 'C':
		case 'c':
			food = "치킨조각";
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
			System.out.println("* 매뉴" + MenuProc.food + "      " + "* 가격" + MenuProc.pay);
			System.out.print("개수를 입력하세요");
			obj.costCal(key.nextInt());
		}
		System.out.println("받은 돈:");
		int a = key.nextInt();
		System.out.println("거스름 돈:" + (a - obj.getrealpay()) + "입니다.");
	}

}