class Student{
	private String name;
	private int rollno;
	public Student(String na , int rol){
		name = na;
		rollno = rol; 
	}
	public String toString(){
		return "학생이름 :"+name +" 학번 : "+rollno;
	}
}
public class 연습13 {
	public static void main (String [] args){
		Student obj = new Student("홍길동" , 202020 );
		System.out.print(obj.toString());
	}
}
