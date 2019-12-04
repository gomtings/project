import java.util.*;
class Student{
	//������� private �̸� Ŭ���� ���ο����� ����� �� �ִ�.
    private String name;   //�̸��� �����ϱ� ���� �ʵ� ����, ���� ���
    private int java, eng;   //������ �����ϱ� ���� �ʵ� ����, ���� ���
    
    //����Ʈ ������ - �Ű����� ����
    //�����ڴ� �ݵ�� Ŭ������� ��ġ �ؾ� �Ѵ�
    //�����ڴ� ��ü ���� �� �� �ѹ��� ȣ��
    public Student(){
this("", 0, 0); //Ŭ�������� �����ε��� ������ ȣ��, �ݵ�� ù ���忡 �ۼ��Ǿ� ��
    }
    
    //��ü�� �ʱ�ȭ �ϴ� ������
    public Student(String name, int java, int eng){
    	this.name = name;  //�ʵ�� �Ű� �������� ������ �ʵ�� �տ� this�� ���
    	this.java=java;
    	this.eng=eng;
    }

    public String getName() {  //������ �޼ҵ� : �ʵ� ��ȯ
		return name;
	}

    public void setName(String name) {  //������ �޼ҵ� : �ʵ� �ʱ�ȭ & ����
		this.name = name;
	}

	public int getEng() {
		return eng;
	}

	public void setEng(int eng) {
		this.eng = eng;
	}

	public int hap(){  //���� ���� ����Ͽ� ��ȯ�ϴ� �޼ҵ�
	   return java+eng;
	}
    
    public String toString(){  //��ü ����(�̸�, ������, ��)�� ���ڿ��� ��ȯ�ϴ� �޼ҵ�
       String str="�̸� : " + name;
       str += "\njava : " + java + "\teng : " + eng;
       str += "\n������ : " + hap();  //Ŭ���� ���� �޼ҵ� ȣ��
       return str;
    }
}

public class t02 {

	public static void main(String[] args) {
			Scanner in=new Scanner(System.in);
			Student std;
	//Student Ŭ���� ��ü obj ���� & ����
			Student obj=new Student("�賫��", 90, 80);	
		//ǥ�� �Է���ġ�� �Էµ� ���� �ʵ尪���� �ʱ�ȭ
			System.out.println("�̸��� �� ���� ������ �Է��ϼ��� :");
			String name=in.next();
			int java=in.nextInt();
			int eng=in.nextInt();
			//��ü ������ ������ �Ű������� �Է� ���� ���� ����
			std=new Student(name, java, eng);
			System.out.println(obj);  //��ü ���� ���
			System.out.println(std);  //��ü ���� ���
		}
	}
