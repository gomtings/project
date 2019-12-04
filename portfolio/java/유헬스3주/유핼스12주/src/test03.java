import java.util.*;
class Rectangle {
//가로와 세로 값을 저장하기 위한 필드 선언, double형으로 할 것-본인작성
	double wa,ha;
//사각형 넓이를 계산하여 반환하는 메소드 getArea()-본인작성	
public double  getArea(){
		return wa * ha ; 
	}
	
public String toString(){ //객체 내용(가로, 세로, 넓이)을 문자열로 반환-본인작성
	String str;
	return "가로 :"+wa + "세로 :"+ha + "넓이";
	}
}

public class test03 {
	public static void main(String[] args) {
        //Rectangle 클래스 rec 선언 & 생성
		Rectangle rec = new Rectangle(); 
Scanner key=new Scanner(System.in);
System.out.println("가로를 입력하세요");
      rec.wa=key.nextDouble();
System.out.println("세로를 입력하세요");
rec.ha=key.nextDouble();
     //입력받은 값을 세로필드로 초기화

      //객체 내용 출력
System.out.print(rec.toString()+rec.getArea());
}
}

