package move;
import java.util.*;
public class moveing {
	public static void main(String[] args) {
		int[] num = {1,2,3,4,5,6,7,8,9,10};
		char[] ch = {'0','0','0','0','0','0','0','0','0','0',};
		String[] id = {"","","","","","","","","",""};
		Scanner key = new Scanner(System.in);
		int x =-11;
		String ids;
		int index=0;
		while(true) {
			System.out.println("1:좌석 예약");
			System.out.println("2:예약 취소");
			System.out.println("종료하려면 0 을 누르세요!");
			x=key.nextInt();
			if(x==0) {
				break ;
			}//종료 조건 케이스 종료 
			if(1<=x&&x<=2){//시작
				if(x==1) {
				System.out.print("좌석번호:");
			for(int i=0;i<num.length;i++) {
				System.out.print(num[i]+"  ");
			}//좌석 배열 출력을 위한 반복문 종료 지점 
			System.out.println();
			System.out.print("예약상황:");
			for(int i=0;i<num.length;i++) {
				System.out.print(ch[i ]+"  ");
			}//예약 배열 출력을 위한 반복문 종료 지점 
			System.out.println();
			System.out.println("좌석 번호를 입력해 주세요.");
			x=key.nextInt();
			if(ch[x-1]=='0') {
				System.out.println("예약 가능한 좌석 입니다. id를 입력해 주세요.");
				id[x-1] = key.next();
				ch[x-1]='x';
			}
			else {
				System.out.println("선택하신 좌석은 예약이 불가능 합니다.");
			}
				}
				else if(x==2) {
					
					System.out.println("id를 입력해 주세요.__");
					ids = key.next();
					
					System.out.print("좌석번호:");
					for(int i=0;i<num.length;i++) {
						System.out.print(num[i]+"  ");
					}//좌석 배열 출력을 위한 반복문 종료 지점 
					System.out.println();
					
					System.out.print("예약상황:");
					for(int i=0;i<num.length;i++) {
						System.out.print(ch[i ]+"  ");
					}//예약 배열 출력을 위한 반복문 종료 지점 
					System.out.println();
					
					for(int i=0;i<id.length;i++){
						if(ids.equalsIgnoreCase(id[i])) {
							index=i;
							break;
						}
						else {
							index=-1;
							continue;
						}
					}
					
					System.out.println("좌석 인덱스:"+ index);
					
					if(index>-1) {
						ch[index]='0';
						System.out.println("입력하신 id에 대한 좌석의 예약을 취소 하였습니다.");
						System.out.print("좌석번호:");
						for(int i=0;i<num.length;i++) {
							System.out.print(num[i]+"  ");
						}//좌석 배열 출력을 위한 반복문 종료 지점 
						System.out.println();
						
						System.out.print("예약상황:");
						for(int i=0;i<num.length;i++) {
							System.out.print(ch[i ]+"  ");
						}//예약 배열 출력을 위한 반복문 종료 지점 
						System.out.println();
					}
					else {
						System.out.println("죄송합니다..ㅠ 입력하신 id에 대한 정보가 없습니다. ");
					}
				}
			}// 1~2 사이값 확인 종료 
		else {
				System.out.println("선택 하신 매뉴가 없습니다!!! \n다시 선택하세요!!");
			}
			
		}//while 종료 
		
	}

}
