import java.util.*;
public class InputHap {
	public static void main(String[] args) {
		int cnt=5;  //�Է� ȸ��
		int hap=0;  //�Էµ� ���� �� ����
		int data; //�Էµ� ���� ����
		Scanner key=new Scanner(System.in);
		
		while(cnt > 0){
			System.out.print(cnt + "��° �Է� : ");
			data = key.nextInt();
			hap += data;
			cnt--;  //�Է� ȸ���� 1�� ����
		}
		System.out.println("�Էµ� ���� ��  = " + hap);  //�Էµ� ���� �� ���
		}
}
