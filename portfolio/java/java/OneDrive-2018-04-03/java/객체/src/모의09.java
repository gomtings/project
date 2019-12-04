class Employee{
	private String name;
	private int num;
	private String pay;
	static int ver=0;
	private int real;
	Employee(){	
		ver++;
		this.name=null;
		this.num=0;
		this.pay=null;
		real=0;
	}
	Employee(String n ,int m,String p){
		ver++;
		this.name=n;
		this.num=m;
		this.pay=p;
		real=(int)(Math.random()*3000+1000);
	}
	void setData(int m){
		this.num=m;
	}
	void setData(String p){
		this.pay=p;
	}
	static int getEmpNum(){
		return ver;
	}
	public String toString(){
		System.out.println("Employee [ 이름="+name+"급여="+num+"전화번호="+pay+"연봉="+real);
		return "";
	}
	
}
public class 모의09 {
	public static void main(String[] args) {
		Employee e1 = new Employee();
		Employee e2 = new Employee("홍기동", 200, "111-1111");
		Employee e3 = new Employee("김기동", 250, "2222-2222");
		
		System.out.println("\n==>생성된 객체정보 출력");		
		System.out.println(e1);
		System.out.println(e2);
		System.out.println(e3);
		
		e3.setData(300);
		e3.setData("3333-3333");
		System.out.println("\n==>김기동 급여 변경 후 출력");		
		System.out.println(e3);		
		System.out.println("\n==> 생성된 직원 객체수 = " + Employee.getEmpNum());
	}
}
