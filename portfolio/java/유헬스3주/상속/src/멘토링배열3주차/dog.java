package ���丵�迭3����;
import java.util.*;
class dogs {
	String name;
	int age = 0;
	String j;

	public dogs() {
		this("�̻�", 0, "�̻�");
	}

	public dogs(String name) {
		this(name, 0, "�̻�");
	}

	public dogs(String name, int age, String j) {
		this.name = name;
		this.age = age;
		this.j = j;
	}

	public void setname(String name) {
		this.name = name;
	}

	public void setage(int age) {
		this.age = age;
	}

	public void setj(String j) {
		this.j = j;
	}

	public String getname(String name) {
		return name;
	}

	public String getj(String j) {
		return j;
	}

	public int getj(int age) {
		return age;
	}

}

public class dog {
	public static void main(String[] args) {
		System.out.println("�Է��� �ּ���.");
		Scanner key = new Scanner(System.in);
		dogs[] d = new dogs[3];
		for(int i=0; i<d.length;i++){
			System.out.println("�̸�,����,�� �� �Է��� �ּ���.");
			d[i]=new dogs(key.next(),key.nextInt(),key.next());
		}
	}
}
