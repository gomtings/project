import java.util.Scanner;
public class week09 {
	public static void main(String[] args) {//
		Scanner key = new Scanner(System.in);
		String id, pw=null;
		char u;
		int count = 0;
		int count2 = 0;
		System.out.println("가입하실 아이디를 입력하세요.(quit 입력시 종료)");
		id = key.next();
		Outter:
		while (true) {
			if (id.equals("quit")) {
				break;
			}
			System.out.println("영문자와 숫자 조합으로 8자리 이상의 비밀번호만 사용가능합니다.");
			System.out.println("원하시는 비밀번호를 입력하세요.");
			pw = key.next();
			if (pw.equals("quit")) {
				break;
			}
			if (pw.length() >= 8) {
				int tmp=pw.length();
				for (int a = 0; a < tmp; a++){
					char s = pw.charAt(a);
					//System.out.println(a);
					if ((s>='A'&& s<='Z')||(s>='a'&& s<='z')) {
						count++;	
					}
					else if((s>='0'&& s<='9')){
						count2++;
                     }
					} //for 종료
				 if(count ==0){
					 System.out.println("영문자 포함되어 있지 않습니다.");
					 continue;
				 }
				 else if(count2==0){
					 System.out.println("숫자가 없습니다.");
					 continue;
				 }
				 else 
					break;
					}// 문자의 길이 제한
			   System.out.println("pw 길이가 8자리 미만 입니다.");
				} //while 종료
		System.out.println(id+"님의 입력하신 비밀번호는 " +pw+ "입니다.");
			}// main 메소드 종료
	}// class 종료

