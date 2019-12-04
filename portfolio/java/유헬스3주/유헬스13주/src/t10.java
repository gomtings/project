import java.util.*;
class PetRecord {
	private String name;
	private int age;
	private double kg;
	public  void setter (String name ,int age , double kg){
		this.name = name;
		if(age < 0)
		this.age=0;
		this.age=age;
		if(kg <0)
		this.kg=0;
		this.kg=kg;
	}
	public int getage(){
		return age;
	}
	public double getkg(){
		return kg;
	}
	public String getneme(){
		return name;
	}
	public String toString(){
		return "이름:"+getneme() +"나이:"+getage()+"몸무게:"+getkg();
	}
}
public class t10 {
	public static void main(String[] args){
		Scanner key = new Scanner(System.in);
		PetRecord obj = new PetRecord();
		System.out.println("이름 , 나이 ,무게 입력");
		obj.setter(key.next() , key.nextInt(), key.nextDouble());
		System.out.print(obj.toString());
	}
}
