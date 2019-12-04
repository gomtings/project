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
		System.out.println("==========매뉴 선택============");
		System.out.println("햄버거(H,h)/치킨조각(C,c),아이스크림(I,i)/감자튀김(P,p)");
		System.out.println("해당 문제를 입력하세요. 종료는 n 또는 N:");
		return "";
	}
}

class MenuProc {

	static String menuName(char y) {

		switch (y) {
		case 'H':
		case 'h':
			FastFood.food = "햄버거";
			break;
		case 'I':
		case 'i':
			FastFood.food = "아이스크림";
			break;
		case 'P':
		case 'p':
			FastFood.food = "감자튀김";
			break;
		case 'C':
		case 'c':
			FastFood.food = "치킨조각";
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
			System.out.println("* 매뉴" +MenuProc.menuName(x) + "      " + "* 가격" + MenuProc.vaLue(x));
			System.out.print("개수를 입력하세요");
			obj.costCal(key.nextInt());
		}
		System.out.println("받은 돈:");
		int a = key.nextInt();
		System.out.println("거스름 돈:" + (a-obj.getrealpay()) + "입니다.");
	}

}