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
		System.out.println("Employee [ �̸�="+name+"�޿�="+num+"��ȭ��ȣ="+pay+"����="+real);
		return "";
	}
	
}
public class ����09 {
	public static void main(String[] args) {
		Employee e1 = new Employee();
		Employee e2 = new Employee("ȫ�⵿", 200, "111-1111");
		Employee e3 = new Employee("��⵿", 250, "2222-2222");
		
		System.out.println("\n==>������ ��ü���� ���");		
		System.out.println(e1);
		System.out.println(e2);
		System.out.println(e3);
		
		e3.setData(300);
		e3.setData("3333-3333");
		System.out.println("\n==>��⵿ �޿� ���� �� ���");		
		System.out.println(e3);		
		System.out.println("\n==> ������ ���� ��ü�� = " + Employee.getEmpNum());
	}
}
