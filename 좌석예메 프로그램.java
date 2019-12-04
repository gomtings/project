import java.util.*;
public class 연습3 {
	public static void main(String[] args) {
		Scanner key = new Scanner(System.in);
		String[][] name = new String[5][5];
		int[][] pay =new int[5][5];
		char[][] cha = new char[][] { { 'O', 'O', 'O', 'O', 'O' }, { 'O', 'O', 'O', 'O', 'O' },
				{ 'O', 'O', 'O', 'O', 'O' }, { 'O', 'O', 'O', 'O', 'O' }, { 'O', 'O', 'O', 'O', 'O' } };
				for(int i=0;i<pay.length;i++){
					for(int j=0;j<pay[i].length;j++){
					pay[i][j]=(int)(Math.random()*6000+6000);
					}
				}
		int h;
		int w;
		int m;
		int n;
		String Name;
		Outter:
		while (true) {
			System.out.print("===========================");
			System.out.println();
			System.out.println("1.좌석 현황 보기");
			System.out.println("2.예메 하기");
			System.out.println("3.예약 확인");
			System.out.println("4.예메 서비스 종료 ");
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
				System.out.println("예약자 이름을 입력해주세요.");
				Name = key.next(); 
				System.out.println("원하는 좌석번호를 입력해주세요.");
				System.out.println("행 입력");
				w = key.nextInt();
				System.out.println("열 입력");
				h = key.nextInt();
				m = w - 1;
				n = h - 1;
				if (cha[m][n] == 'X'&& name[m][n] != "null"&& name[m][n] != "Null") {
					System.out.println("예매이 불가능 합니다. ");
					System.out.println("선택하신 죄석은"+"["+w+"]"+"["+h+"]"+"는 이미 예약된 좌석입니다.");
					System.out.println("해당 좌석의 예약자는"+name[m][n]);
					break;
				} 
				else {
					System.out.println("선택하신 좌석"+w+","+h+"의 가격은 "+pay[m][n]+"원 입니다.");
					System.out.println("예매 하시겟습니까? y or n");
					char yn = key.next().charAt(0);
				   if(yn == 'y'){
					System.out.println("예매가 완료 되었습니다."+"선택하신 좌석"+w+","+h+"의 가격은 "+pay[m][n]+"원 입니다.");
					cha[m][n] = 'X';
					name[m][n] = Name;
				   }
				   else{
					   System.out.println("예메가 취소 되었습니다.");
				   }
				}
				break;
				
			case 3:
				System.out.println("원하는 좌석번호를 입력해주세요.");
				System.out.println("행 입력");
				w = key.nextInt();
				System.out.println("열 입력");
				h = key.nextInt();
				m = w - 1;
				n = h - 1;
			  if(cha[m][n] !='X'){
			System.out.println("예약된 좌석이 아닙니다.");  
			  }
			  else if(cha[m][n] =='X'){
	  System.out.println("선택하신 좌석은"+"["+w+"]"+"["+h+"]" +"는 이미 예약된 좌석입니다."+" 좌석의 예약자는"+name[m][n]);
	  System.out.println("가격은 "+pay[m][n]+"원 입니다.");
			  }
				break;
			case 4:
				System.out.println("예메 서비스 종료 ");
				if(num ==4)
					break Outter;
				break;
				default:
					System.out.println(" 잘못된 입력 입니다 !!!!!!!!!!!!!!!! ");
				
			}// switch 종료
		} // while 종료
	}
}
