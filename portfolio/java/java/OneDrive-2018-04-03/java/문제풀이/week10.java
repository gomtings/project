import java.util.Scanner;
public class week10 {
	public static void main(String[] args) {
		Scanner key = new Scanner(System.in);
		String id,pw; // id,pw 변수 
		int ing=0,num=0;// 영문,숫자 카운트 변수 
		//id 입력부
		System.out.println("id를 입력하세요.(quit 입력시 종료)");
	   id=key.next(); //id 입력 
	 //id 입력 종료 
	   while(true){// while 문의 시작,무한루프 
		   //pw 입력.판별시작. 
		   System.out.println("pw를 입력하세요.");
		   pw=key.next();//pw 입력 
		   if(pw.equalsIgnoreCase("quit")){// quit 입력시 종료 
			   break;
		   }
		   if(pw.length()>=8){//pw의 길이가 8자리 이상 판별 
			   for(int a=0;a<pw.length();a++){//for 문시작.
				   if((pw.charAt(a) >='A' && pw.charAt(a)<='Z')||(pw.charAt(a)>='a' && pw.charAt(a)<='z')){
					   ing++;
					   //영문자 조건판별,영문자 포함되 있을경우 카운트 한다. 
				   }
				   else if(pw.charAt(a)>='0'&&pw.charAt(a)<='9'){
					   num++;
					   //숫자 판별을 한다. 숫자포함시 카운트 
				   }   
			   } //for문 종려
			   //에러의 종류 코드 출력 
			   if(ing ==0){  //영문자가 없을 경우 
				   System.out.println("영문자가 포함되어있지 않습니다.");
				   continue; 
			   }
			   else if (num == 0){ //숫자가 없을경우 
				   System.out.println("숫자가 포함되어있지 않습니다.");
				   continue;  
			   }
			   else // 위 두조건에 포함이 안될경우  반복을 종료 한다. 
				   break;
		   }// pw길이 판별 참 부분 종료 
		   System.out.println("미밀번호가 8자리 미만 입니다. 다시입력하세요.");
	   }//while 종료 
	   System.out.print( id + "님 입력하신 비밀번호는"  + pw + "입니다.");
	}//main 메소드 종료 
}//class 종료 
