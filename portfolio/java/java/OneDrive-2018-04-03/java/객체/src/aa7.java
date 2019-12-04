import java.util.*;
class Student{
	private String name;
	private int d1,d2,d3;
	int hap;
	public Student gethap;
//이름(String name), 세 개의 성적(int d1, d2, d3), 합(int hap)을 저장하기 위한 필드 선언 - 전용멤버
	Student(int d1, int d2,int d3 ,String name){
		this.d1=d1;
		this.d2=d2;
		this.d3=d3;
		this.hap=d1+d2+d3;
		this.name=name;
	}
//매개변수로 받은 데이터를 필드값으로 초기화(이름과 세 개의 성적)하는 생성자. 단, 생성자에서 합을 계산하도록 한다

	public String toString(){
		System.out.println("이름:"+name);
		System.out.println("d1:"+d1);
		System.out.println("d2:"+d2);
		System.out.println("d3:"+d3);
		System.out.println("합:"+hap);
		return "";
	}
	int gethap(){
		return hap;
	}
//객체 내용(이름, 세 과목 성적, 합)을 문자열로 반환하는 toString()
}
class StdComp{
public static Student setmax(Student hap ,Student hap2){
	 Student temp=null;
	 if(hap.gethap() >hap2.gethap()){
		 temp=hap;
		 }
	 else if(hap.gethap() <hap2.gethap()){
		 temp=hap2;
	 }
	 return temp;
 }

	}

public class aa7 {
	public static void main(String[] args){
		Scanner key = new Scanner(System.in);
		System.out.println("정수 입력");
		int x=key.nextInt();
		int x1=key.nextInt();
		int x2=key.nextInt();
		System.out.println("2.정수 입력");
		int x3=key.nextInt();
		int x4=key.nextInt();
		int x5=key.nextInt();
		Student obj = new Student(x,x1,x2,"홍길동");
		Student obj2 = new Student(x3,x4,x5,"홍길이");
		StdComp obj3 = new StdComp();
		System.out.println("객체1"+obj);
		System.out.println("객체2"+obj2);
		System.out.println("큰객체는");
		System.out.println(StdComp.setmax(obj ,obj2));
		System.out.println("입니다.");
	}

}
