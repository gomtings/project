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
		System.out.println("이름:"+this.name);
		System.out.println("나이:"+this.age);
		return "";
	}
}
public class 연습05 {
	public static void main(String[] args) {
		student ingyu = new student("김인규",24);
		System.out.println(ingyu);
	}

}
