import java.util.Scanner;

public class No040608 {
	public static void main(String[] args) {
		Scanner vv = new Scanner(System.in);
		int i;
		char c;
		char[] ch = { 'A', 'B', 'C', 'D', 'E', 'F', 'G'};
		char[] ch2 = { '0', '0', '0', '0', '0', '0', '0'};
		;
		while (true) {
		
			System.out.println("좌석 배치도"+"\t");
			
			for (int a = 0; a < ch.length; a++) {
				System.out.print(ch[a] + " ");
			}
			System.out.println();
			for (int a = 0; a < ch.length; a++) {
				System.out.print(ch2[a] + " ");
			}
			System.out.println();
			System.out.println("원하시는 좌석을 입력해 주세요:(x누르면 종료합니다.)");
			c = vv.next().charAt(0);
			
			if (c == 'X'|| c=='x')
				break;
			
			i = c - 65;
			if (ch2[i] == '0') 
			{
				 ch2[i] = 'X';
				System.out.println("예약이 완료되었습니다.");
				for (int a = 0; a < ch.length; a++) {
					System.out.print(ch[a] + " ");
				}
				System.out.println();
				for (int g = 0; g < ch.length; g++) {
					System.out.print(ch2[g] + " ");
				}
				
			} 
			
			else if (ch2[i] == 'X') {
				System.out.println("선택하신 좌석은 예매가 불가능 합니다.");
				System.out.println(c);
			}	
			
		}
	}
}