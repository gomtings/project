import java.util.*; //���� ������ ���� ��Ű�� ����
public class �ǽ�02 {
	public static void main(String[] args) {
		Scanner key=new Scanner(System.in);
		int[] dim;  //�迭 ����
		int size;   //�迭 ũ��
		
		System.out.print("�迭 ũ�⸦ �Է��ϼ��� : ");
		size = key.nextInt();
		dim=new int[size];    //�Է� ���� ũ�⸸ŭ �迭 ����
		for(int i=0; i<dim.length;i++)
		    //10~100������ ������ �����Ͽ� �迭 i��°�� ����
			dim[i]= (int)(Math.random() * 91+ 10);   
		
		for(int temp : dim)   //foreach �� ����� �迭 ���� ���
			System.out.println(temp); 
	}
}
