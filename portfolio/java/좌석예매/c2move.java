package project;

import java.util.*;

public class c2move {

	public static void main(String[] args) {

		Scanner key = new Scanner(System.in);
		int number = 0, index,er=0;
		char a = 'A',c;
		String nm;
		char[][] mj = new char[5][10];
		String[][] name = new String[5][10];
		for (int i = 0; i < mj.length; i++) {
			for (int j = 0; j < mj[i].length; j++) {
				mj[i][j] = 'o';
				number++;
			}
		}
		
		while (true) {
			System.out
					.println("좌석 예매 시스템 입니다. 좌석예약.1번/예약 취소.2번/예약확인.3번/잔여석 확인.4번 입니다.");
			switch (key.nextInt()) {

			case 1:

				Outter: while (true) {
					System.out.println("좌석 예약을 시작 합니다.");
					System.out.print("* ");
					for (int j = 0; j < 10; j++) {
						System.out.print(" " + (j + 1));
					}
					System.out.println();
					for (int i = 0; i < mj.length; i++) {
						System.out.print(a++ + "  ");
						for (int j = 0; j < mj[i].length; j++) {
							System.out.print(mj[i][j] + " ");
						}
						System.out.println();
					}
					System.out.println("현재 잔여 좌석은 : " + number
							+ "석 남았습니다. \n 좌석을 선택해 주세요.(줄(행)입력->A~E)");
					while (true) {// 입력 오류를 제어 하기 위한 반복문
						c = key.next().charAt(0);
						if (c >= 'A' && c <= 'E' || c >= 'a' && c <= 'e') {
							System.out.println("좌석 번호를 입력해 주세요. 1~10");
							int x = key.nextInt();
							if (x >= 1 && x <= 10) {
								if (c < 97) {
									index = 65 - c;
								} else {
									index = 97 - c;
								}
								if (mj[index][x - 1] == 'o') {
									System.out.println("선택하신 좌석" + c + x
											+ " 를 예약 할까요?  y or n");
									c = key.next().charAt(0);
									if (c == 'y' || c == 'Y') {
										System.out.println("예약자 이름을 입력해 주세요.");
										name[index][x - 1] = key.next();
										System.out.println(+c + x
												+ "석을 예약 하였습니다.");
										mj[index][x - 1] = 'x';
										number--;
										break Outter;
									} else {
										System.out.println("예약을 취소 합니다.");
										break Outter;
									}
								}
							} else {
								System.out
										.println(" 선택한 좌석은 없는 좌석 입니다. 좌석 번호를 다시 입력해 주세요. 1~10");
							}

						} else {
							System.out.println("다시 입력해 주세요.(줄(행)입력->A~E)");
						}
					}// 입력 오류를 제어 하기 위한 반복문 종료
				}// while 종료

				break;

			case 2:
				
				Outter:
				while (true) {
					System.out.println("예약을 취소 합니다. 예약자 이름을 입력해 주세요.");
					for(int i=0; i<mj.length;i++){
						for(int j=0;j<mj[i].length;j++){
							nm=key.next();
							if(nm.equals(name[i][j])){
								System.out.println(name[i][j]+"님 의 예약 하신 "+(char)(65+i)+j+"석의 예약을 취소 할까요?");
								c=key.next().charAt(0);
								if(c=='y'||c=='Y'){
									mj[i][j] = 'o';
									number++;
									break Outter;
								}else{
									System.out.println("예약 취소를 취소 하였습니다.");
									break Outter;
								}
							}else{
								er++;
								if(er==50)
									System.out.println(nm+"는 예약자 목록에 없습니다.");
							}
						}
					}
				}
				
				break;

			case 3:
				while(true){
					System.out.println("예약을 을 확인 합니다. 예약자 이름을 입력해 주세요.");
					nm=key.next();
					if(number==50)
						System.out.println("예약된 좌석이 없습니다.");
					
					System.out.println(nm+"님의 예약 좌석은 : ");
					for(int i=0; i<mj.length;i++){
						for(int j=0;j<mj[i].length;j++){
							if(nm.equals(name[i][j])){
								System.out.println((char)(65+i)+j+"");
							}else{
							}
						}
						System.out.println(",");
					}
					
				}
				break;

			case 4:

				break;

			}

		}
	}
}
