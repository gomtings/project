import java.util.*;
class Student{
	private String name;
	private int d1,d2,d3;
	int hap;
	public Student gethap;
//�̸�(String name), �� ���� ����(int d1, d2, d3), ��(int hap)�� �����ϱ� ���� �ʵ� ���� - ������
	Student(int d1, int d2,int d3 ,String name){
		this.d1=d1;
		this.d2=d2;
		this.d3=d3;
		this.hap=d1+d2+d3;
		this.name=name;
	}
//�Ű������� ���� �����͸� �ʵ尪���� �ʱ�ȭ(�̸��� �� ���� ����)�ϴ� ������. ��, �����ڿ��� ���� ����ϵ��� �Ѵ�

	public String toString(){
		System.out.println("�̸�:"+name);
		System.out.println("d1:"+d1);
		System.out.println("d2:"+d2);
		System.out.println("d3:"+d3);
		System.out.println("��:"+hap);
		return "";
	}
	int gethap(){
		return hap;
	}
//��ü ����(�̸�, �� ���� ����, ��)�� ���ڿ��� ��ȯ�ϴ� toString()
}
class StdComp{
public static Student setmax(Student hap ,Student hap2){
	 Student temp=null;
	 if(hap.gethap() >hap2.gethap()){
		 temp=hap;
		 }
	 else if(hap.gethap() <hap2.gethap()){
		 temp=hap2;
	 }
	 return temp;
 }

	}

public class aa7 {
	public static void main(String[] args){
		Scanner key = new Scanner(System.in);
		System.out.println("���� �Է�");
		int x=key.nextInt();
		int x1=key.nextInt();
		int x2=key.nextInt();
		System.out.println("2.���� �Է�");
		int x3=key.nextInt();
		int x4=key.nextInt();
		int x5=key.nextInt();
		Student obj = new Student(x,x1,x2,"ȫ�浿");
		Student obj2 = new Student(x3,x4,x5,"ȫ����");
		StdComp obj3 = new StdComp();
		System.out.println("��ü1"+obj);
		System.out.println("��ü2"+obj2);
		System.out.println("ū��ü��");
		System.out.println(StdComp.setmax(obj ,obj2));
		System.out.println("�Դϴ�.");
	}

}
