package 멘토링배열3주차;
import java.util.*;
class dogs {
	String name;
	int age = 0;
	String j;

	public dogs() {
		this("미상", 0, "미상");
	}

	public dogs(String name) {
		this(name, 0, "미상");
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
		System.out.println("입력해 주세요.");
		Scanner key = new Scanner(System.in);
		dogs[] d = new dogs[3];
		for(int i=0; i<d.length;i++){
			System.out.println("이름,나이,종 을 입력해 주세요.");
			d[i]=new dogs(key.next(),key.nextInt(),key.next());
		}
	}
}
