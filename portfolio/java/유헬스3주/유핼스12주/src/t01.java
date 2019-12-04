class Student{
String name; //이름을 저장하기 위한 필드 선언
int java, eng; //과목을 저장하기 위한 필드 선언

public int hap(){ //과목 합을 계산하여 반환하는 메소드
	 return java+eng;
	}
public String toString(){ //객체 내용(이름, 과목성적, 합)을 문자열로 반환하는 메소드
String str="이름 :" + name;
str += "\njava : " + java + "\teng : " + eng;
str += "\n과목합 : " + hap();
return str;
}
}

public class t01 {
	public static void main(String [] args){
		//클래스의 필드와 메소드는 객체를 통해서 접근 해야 함
				Student obj=new Student(); //Student 클래스 객체 obj 선언 & 생성
				obj.name="김낙준"; //name 필드 초기화
		obj.java=90; //java 필드 초기화
		obj.eng=98; //eng 필드 초기화
				System.out.println(obj); //객체 내용 출력

	}

}
