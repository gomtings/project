import java.util.*;
class Rectangle {
	private int ga;    //����
	private int se;    //����
	public Rectangle(int ga , int se){
		this.ga=ga;
		this.se = se;
	}
	int getArea()	{  //���̸� ����Ͽ� ��ȯ
		int result=ga*se;
		return result;
	}
	public int ga(){
		return ga;
	}
	public int se(){
		return se;
	}
	
	
	public String toString(){  //��ü ������ ���ڿ��� ��ȯ
		String str="���� : " + ga;
		str +="\n���� : " + se;
		str +="\n���� : " + getArea(); //���̸� ����Ͽ� ��ȯ�ϴ� �޼ҵ�ȣ��
		return str;
	}
}

public class t05 {
	public static void main(String[] args) {
		Scanner key = new Scanner (System.in);
		Rectangle obj;
		System.out.print("���� ���� �Է�");
		obj=new Rectangle(key.nextInt() , key.nextInt() );
		System.out.println(obj); //��ü ���� ���
	}
}

