class student{
	private String name;
	private int age;
	
	public student(){
		this("" ,0);
	}
	public student(String n , int a){
		this.name=n;
		this.age=a;
	}
	public String toString(){
		System.out.println("�̸�:"+this.name);
		System.out.println("����:"+this.age);
		return "";
	}
}
public class ����05 {
	public static void main(String[] args) {
		student ingyu = new student("���α�",24);
		System.out.println(ingyu);
	}

}
