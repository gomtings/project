class Student{
String name; //�̸��� �����ϱ� ���� �ʵ� ����
int java, eng; //������ �����ϱ� ���� �ʵ� ����

public int hap(){ //���� ���� ����Ͽ� ��ȯ�ϴ� �޼ҵ�
	 return java+eng;
	}
public String toString(){ //��ü ����(�̸�, ������, ��)�� ���ڿ��� ��ȯ�ϴ� �޼ҵ�
String str="�̸� :" + name;
str += "\njava : " + java + "\teng : " + eng;
str += "\n������ : " + hap();
return str;
}
}

public class t01 {
	public static void main(String [] args){
		//Ŭ������ �ʵ�� �޼ҵ�� ��ü�� ���ؼ� ���� �ؾ� ��
				Student obj=new Student(); //Student Ŭ���� ��ü obj ���� & ����
				obj.name="�賫��"; //name �ʵ� �ʱ�ȭ
		obj.java=90; //java �ʵ� �ʱ�ȭ
		obj.eng=98; //eng �ʵ� �ʱ�ȭ
				System.out.println(obj); //��ü ���� ���

	}

}
