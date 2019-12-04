import java.util.Scanner;
public class pw {
	public static void main(String[] args){
		Scanner key = new Scanner(System.in);
		String id,pw;
		System.out.println("아이디를 입력하세요.");
		id = key.next();
		while(true){
			System.out.println("비밀번호를 입력하세요");
			pw=key.next();
			if(pw.length()>=8){
				for(int a=0;a<pw.length();a++){
					//if(pw.charAt(a)>='A'&&)
				}
			}//pw 8자리
			
		}//while 시작
	}
}
