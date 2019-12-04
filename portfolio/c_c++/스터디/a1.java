import java.util.*;

public class a1 {
	
	public static void addPerson(String[][] ap,Scanner key, int a1, int b1) {
		int clo,ho;
		System.out.println("이름을 입력해 주세요.");
		String name = key.next();
		while (true) {
			System.out.println("몇 층에 거주 하시겟습니까?");
			clo = key.nextInt();
			if (clo <= a1) {
			} else {
				System.out.println("존재 하지 않는 층수 입니다. ");
			}
			if (clo <= a1)
				break;
		}
		while (true) {
			System.out.println("몇 호에 거주 하시겟습니까?");
			 ho = key.nextInt();
			if (ho <= b1) {
			} else {
				System.out.println("존재 하지 않는 호수 입니다. ");
			}
			if (ho <= b1)
				break;
		}
		if(ap[clo][ho].equals("빈 방")){
			ap[clo][ho]=name;
		}
		else{
			System.out.println("빈 방이 아닙니다. ");
		}
	}
	public static void subPerson(Scanner key, int a1, int b1) {
		
	}
	public static void main(String[] args) {
		Scanner key = new Scanner(System.in);
		int a, b, c, d;
		System.out.println("건설할 아파트의 층수를 입력해 주세요.");
		a = key.nextInt();
		System.out.println("각 층마다 이루어질 호수를 입력하세요.");
		b = key.nextInt();
		String[][] room = new String[a][b];
		System.out.println("생성이 완료되었습니다.");
		for (int i = 0; i < room.length; i++) {
			for (int j = 0; j < room[i].length; j++) {
				room[i][j] = "빈 방";
			}
		}
		System.out.println("초기화가 완료 되었습니다.");
		System.out.println("**************");
		System.out.println("1.인원추가");
		System.out.println("2.인원삭제");
		System.out.println("3.거주정보");
		System.out.println("4.종료");
		System.out.println("**************");
		System.out.println("선택 :");
		int menu = key.nextInt();
		switch (menu) {
		case 1:
			addPerson(room,key, a, b);
			break;
		case 2:
			
			break;
		}
	}
}
