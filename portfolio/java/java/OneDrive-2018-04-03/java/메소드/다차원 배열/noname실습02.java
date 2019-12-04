package noname;

import java.util.Scanner;

public class noname실습02 {
	public static void main(String[] args) {
		Scanner key = new Scanner(System.in);
		char[][] cha = new char[][] { { 'O', 'O', 'O', 'O', 'O' }, { 'O', 'O', 'O', 'O', 'O' },
				{ 'O', 'O', 'O', 'O', 'O' }, { 'O', 'O', 'O', 'O', 'O' }, { 'O', 'O', 'O', 'O', 'O' } };
		int h;
		int w;
		int m;
		int n;
		Outter:
		while (true) {
			System.out.print("===========================");
			System.out.println();
			System.out.println("1.좌석 현황 보기");
			System.out.println("2.예메 하기");
			System.out.println("3.예메 서비스 종료 ");
			System.out.print("===========================");
			System.out.println();
			int num = key.nextInt();
			switch (num) {

			case 1:
				int i = 0;
				System.out.print("     " + "1행");
				for (int a = 1; a < 5; a++) {
					System.out.print("      " + (a + 1) + "행" + "");
				}
				System.out.println();
				for (i = 0; i < cha.length; i++) {
					System.out.print(i + 1 + "열" + "      ");
					for (int j = 0; j < cha[i].length; j++) {
						System.out.print(cha[i][j] + "     ");
					}
					System.out.println();
				}
				break;
			case 2:
				
				System.out.println("원하는 좌석번호를 입력해주세요.");
				System.out.println("행 입력");
				w = key.nextInt();
				System.out.println("열 입력");
				h = key.nextInt();
				m = w - 1;
				n = h - 1;
				if (cha[m][n] == 'X') {
					System.out.println("예매이 불가능 합니다. ");
					break;
				} 
				else {

					System.out.print("예매가 완료 되었습니다.");
					cha[m][n] = 'X';	
				}
				break;
				
			case 3:
				if(num ==3)
					break Outter;
				break;
				default:
					System.out.println(" 잘못된 입력 입니다 !!!!!!!!!!!!!!!! ");
				
			}// switch 종료
		} // while 종료
	}
}