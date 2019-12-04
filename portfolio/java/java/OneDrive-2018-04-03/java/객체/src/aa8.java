import java.util.*;
class plane{
	private String name;
	private int pass;
	private static int planes=0;
	plane(){
		this.name="A380";
		this.pass=500;
	}
	plane(String name, int pass){
		planes++;
		this.name=name;
		this.pass=pass;
	}
	void setplane(String name, int pass){
		this.name=name;
		this.pass=pass;
	}
	String getname(){
		return name;
	}
	int getpass(){
		return pass;
	}
	static int getPlanes(){
		return planes;
	}
	
}
public class aa8 {
	public static void main(String[] args){
		Scanner key = new Scanner(System.in);
		plane obj =new plane("A340",250);
		plane obj1 =new plane("A340",250);
		plane obj2 =new plane("A340",250);
		obj.setplane("A320",100);
		obj1.setplane("A330",200);
		obj2.setplane("A350",300);
		System.out.println(obj.getname());
		System.out.println(obj.getpass());
		System.out.println(obj1.getname());
		System.out.println(obj1.getpass());
		System.out.println(obj2.getname());
		System.out.println(obj2.getpass());
		System.out.println(plane.getPlanes());
	}

}
