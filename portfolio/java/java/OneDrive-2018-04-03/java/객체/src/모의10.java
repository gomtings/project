class Student{
	private static String sam;
	private String stu;
	private static int num=0;
	Student(){
		num++;
		sam="������";
		this.stu="anonymous";
	}
	Student(String su){
		num++;
		this.stu=su;
	}
	static int getCount(){
		return num;
	}
	String getstu(){
		return stu;
	}
}
class OurClass {
	private String sam;
	Student[] stu;
    OurClass (String s ,Student[] std){
      sam=s;
      this.stu=std;
    }
   public String toString(){
	   System.out.print("OurClass ������ [teacher="+sam+","+"student="+stu[0]. getstu()+stu[1]. getstu()+stu[2]. getstu()+"]");
    	return"";
    }
}
public class ����10 {
	  public static void main(String[] args) {

		    Student[] std = new Student[3];
		    std[0] = new Student();
		    std[1] = new Student("benny");
		    std[2] = new Student("danny");

		    OurClass oca = new OurClass("������", std);

		    System.out.println(oca);
		    System.out.println("student count=" + Student.getCount());
		  }
		}
