import java.util.*;
class Box{
	private int ga, se, he; //����, ����, ���� ����
	int volume; //���� ����
	
	public Box(int ga, int se, int he){
		this.ga=ga; 	this.se=se; 	this.he=he;
		volume = ga*se*he; //���� ���
	}
	
	public int getVolume(){
		return volume;
	}
	public String toString(){
		String str="���� : " + ga +"\t���� : " + se + "\t���� : " + he;
		str += "\t���� : " + volume;
		return str;
	}
}

class BoxMax{
//�Ű������� ���� ��ü�� �ʵ� volume�� ���Ͽ� ū volume���� ���� ��ü�� ��ȯ 
	public static Box isMax(Box b1, Box b2){
		if(b1.getVolume() > b2.getVolume())
			return b1;
		else
			return b2;
	}
}
public class aa2 {
	public static void main(String[] args) {
		Scanner in=new Scanner(System.in);
		Box obj1=new Box(5, 3, 6); //��ü ���� & ����
Box obj2=new Box(10, 2, 5); //��ü ���� & ����
		Box max = BoxMax.isMax(obj1, obj2);  //�����޼ҵ�� Ŭ���� �̸����� ȣ��
		System.out.println("���ǰ� ū �ڽ� => " + max);
		}
}
