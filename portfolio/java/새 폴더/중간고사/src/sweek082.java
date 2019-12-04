import java.util.Scanner;
public class sweek082 {
		public static void main(String [] args){
			Scanner key=new Scanner(System.in);
			System.out.print("속도 입력");
			int speed=key.nextInt(); //speed변수에 입력받은 정수 저장
			if(speed >=0&&speed<30){ //0이상 30미만 일경ㅇ 조건 판별
				System.out.print("느립니다.");
			}
			else if(speed>=30 && speed<80){//30이상 80미만 조건 
				System.out.print("보통입니다.");
			}
			else if(speed >=80){//80이상 조건 판별 
				System.out.print("빠릅니다");
			}
			else{//위의 모든 경우가 아닌경우 
				System.out.print("속도입력이 잘못 됫습니다");
			}	
		}
	}