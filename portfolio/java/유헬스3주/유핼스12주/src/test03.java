import java.util.*;
class Rectangle {
//���ο� ���� ���� �����ϱ� ���� �ʵ� ����, double������ �� ��-�����ۼ�
	double wa,ha;
//�簢�� ���̸� ����Ͽ� ��ȯ�ϴ� �޼ҵ� getArea()-�����ۼ�	
public double  getArea(){
		return wa * ha ; 
	}
	
public String toString(){ //��ü ����(����, ����, ����)�� ���ڿ��� ��ȯ-�����ۼ�
	String str;
	return "���� :"+wa + "���� :"+ha + "����";
	}
}

public class test03 {
	public static void main(String[] args) {
        //Rectangle Ŭ���� rec ���� & ����
		Rectangle rec = new Rectangle(); 
Scanner key=new Scanner(System.in);
System.out.println("���θ� �Է��ϼ���");
      rec.wa=key.nextDouble();
System.out.println("���θ� �Է��ϼ���");
rec.ha=key.nextDouble();
     //�Է¹��� ���� �����ʵ�� �ʱ�ȭ

      //��ü ���� ���
System.out.print(rec.toString()+rec.getArea());
}
}

