import java.util.Scanner; 
public class test4 {
	public static void main(String[] args){
		int r;
		double c2;
		double c3;
		double c4;
		final double PI =3.14;
		
		Scanner t5 = new Scanner(System.in); 
		System.out.print("���� ��������:");
		r =t5.nextInt();
		c2 =  PI * r * r; //����
		c3 = 2 * PI * r; // �ѷ�
		c4 = 4/3*PI*r*r*r;//����
		System.out.println("��������:"+ r + "����:"+c2+"�ѷ�:"+c3+"����:"+c4 +"�Դϴ�."); 
	}
}
