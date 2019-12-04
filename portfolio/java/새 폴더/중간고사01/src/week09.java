import java.util.*;
public class week09 {//class 선언 
	public static void main(String [] args){ // 메인메소드 선언 
		Scanner key = new Scanner(System.in);
		String id,pw;//문자열 id.pw변수 생성
		int ing=0,num=0;//영문,숫자 카운트 변수 
		System.out.print("아이디를 입력하세요.");
		id=key.next();
		while(true){
			System.out.print("비밀번호를 입력하세요.");
			pw=key.next();
			if(pw.equalsIgnoreCase("quit"))
				break;
			if(pw.length()>= 8 ){//비밀번호 8자리 판별 
				for(int a=0;a<pw.length();a++){//for 시작 
					if(pw.charAt(a)>='A'&&pw.charAt(a)<='Z'||pw.charAt(a)>='a'&&pw.charAt(a)<='z'){//영문자 판별
						ing++;//영문 개수 카운트 
						
					}//if 종료
					else if(pw.charAt(a)>='0'&&pw.charAt(a)<='9'){//숫자 판별부 
						num++;//숫자개수 카운트 
					}//숫자판별 종료 
				}//for 종료 
				if(ing ==0 ){//영문 에러코드 출력 
					System.out.println("영문자가 포함되어있지 않습니다. ");
					continue;
				}
				else if(num == 0 ){ //숫자 에러 코드 출력 
					System.out.println("숫자가 포함되어있지 않습니다. ");
					continue;
				}
				else if(num>0&&ing >0){
					System.out.println(id+ "님의 입력하신 비밀번호는 "+ pw + "는 사용가능한 비밀번호 입니다." );
					break;
				}	
			}//if 문종료 
			System.out.println("비밀번호가 8자리 미만입니다. ");
			continue;
		}//while 종료 
		
	}//메인 메소드 종료 
}//class 종료 
