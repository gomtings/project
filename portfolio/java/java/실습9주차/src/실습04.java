import java.util.*;
public class �ǽ�04 {
	public static void main(String[] args) {
		Scanner key=new Scanner(System.in);
		int[] dim = new int[5]; //�迭 ����� ����
		int hap=0; //�迭 ���� ���� ����
		
		System.out.println("�迭 ���Ҹ� �Է��ϼ��� : ");
		for(int i=0; i <dim.length; i++){
			System.out.print((i+1) + " ��° : ");
              dim[i] = key.nextInt();
              hap+=dim[i];
		}
		System.out.println("�迭 ���Ҹ� ����ϼ��� : ");
		for(int x=0; x<dim.length;x++){
			 System.out.println( (x+1) + " ��° : " + dim[x]);
		}
		System.out.print("�迭 ���� �� : " + hap);
	}
}
