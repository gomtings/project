import java.util.*;
class Student{
	//접근제어가 private 이면 클래스 내부에서만 사용할 수 있다.
    private String name;   //이름을 저장하기 위한 필드 선언, 전용 멤버
    private int java, eng;   //과목을 저장하기 위한 필드 선언, 전용 멤버
    
    //디폴트 생성자 - 매개변수 없음
    //생성자는 반드시 클래스명과 일치 해야 한다
    //생성자는 객체 생성 시 딱 한번만 호출
    public Student(){
this("", 0, 0); //클래스내에 오버로딩된 생성자 호출, 반드시 첫 문장에 작성되야 함
    }
    
    //객체를 초기화 하는 생성자
    public Student(String name, int java, int eng){
    	this.name = name;  //필드와 매개 변수명이 같으면 필드명 앞에 this를 사용
    	this.java=java;
    	this.eng=eng;
    }

    public String getName() {  //접근자 메소드 : 필드 반환
		return name;
	}

    public void setName(String name) {  //설정자 메소드 : 필드 초기화 & 변경
		this.name = name;
	}

	public int getEng() {
		return eng;
	}

	public void setEng(int eng) {
		this.eng = eng;
	}

	public int hap(){  //과목 합을 계산하여 반환하는 메소드
	   return java+eng;
	}
    
    public String toString(){  //객체 내용(이름, 과목성적, 합)을 문자열로 반환하는 메소드
       String str="이름 : " + name;
       str += "\njava : " + java + "\teng : " + eng;
       str += "\n과목합 : " + hap();  //클래스 내의 메소드 호출
       return str;
    }
}

public class t02 {

	public static void main(String[] args) {
			Scanner in=new Scanner(System.in);
			Student std;
	//Student 클래스 객체 obj 선언 & 생성
			Student obj=new Student("김낙준", 90, 80);	
		//표준 입력장치로 입력된 값을 필드값으로 초기화
			System.out.println("이름과 두 과목 성적을 입력하세요 :");
			String name=in.next();
			int java=in.nextInt();
			int eng=in.nextInt();
			//객체 생성시 생성자 매개변수로 입력 받은 값을 전달
			std=new Student(name, java, eng);
			System.out.println(obj);  //객체 내용 출력
			System.out.println(std);  //객체 내용 출력
		}
	}
