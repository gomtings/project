import java.util.Scanner;
public class week09 {
	public static void main(String[] args) {
		Scanner key = new Scanner(System.in);
		String id, pw=null;
		int count = 0;
		int count2 = 0;
		System.out.println("가입하실 아이디를 입력하세요.(quit 입력시 종료)");
		id = key.next(); //id 입력
		
		while (true) {  //while 시작
			if (id.equals("quit")) {//정지조건 
				break;
			}
			System.out.println("영문자와 숫자 조합으로 8자리 이상의 비밀번호만 사용가능합니다.");
			System.out.println("원하시는 비밀번호를 입력하세요.");
			pw = key.next();
			if (pw.equals("quit")) {  // 1. if정지조건 
				break;
			}//1.if 문의 끝
			if (pw.length() >= 8) { //pw의 길이가 8자리 이상 일경우 참
				int tmp=pw.length();
				for (int a = 0; a < tmp; a++){
					char s = pw.charAt(a);
					if ((s>='A'&& s<='Z')||(s>='a'&& s<='z')) {
						count++;	//영문자가 있을경우 카운트
					}
					else if((s>='0'&& s<='9')){
						count2++; //숫자가 있을경우 카운트
                     }
					} //for 종료
				 if(count ==0){ // 영문자가 없어 카운트가 안된경우 
					 System.out.println("영문자 포함되어 있지 않습니다.");
					 continue;// 없을경우 조건식으로 다시 올라간다./
				 }
				 else if(count2==0){ // 숫자가 없어 카운트가 안된경우 
					 System.out.println("숫자가 없습니다.");
					 continue; // 없을경우 조건식으로 다시 올라간다./
				 }
				 else 
					break;
					}// 문자의 길이 제한
			   System.out.println("pw 길이가 8자리 미만 입니다.");
				} //while 종료
		System.out.println(id+"님의 입력하신 비밀번호는 " +pw+ "입니다."); //id 와 pw 를 출력 한다.
			}// main 메소드 종료
	}// class 종료

