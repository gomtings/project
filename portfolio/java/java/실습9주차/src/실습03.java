import java.util.*; //���� ������ ���� ��Ű�� ����
public class �ǽ�03 {
	public static void main(String[] args){
		Scanner key=new Scanner(System.in);
		int[]  dim={12, 45, 23, 67, 34, 77, 9};
		int data, index=-1;
		
		System.out.print("�˻��ϰ��� �ϴ� ���� �Է��ϼ��� :  " );
		data=key.nextInt();
		
		for(int i=0; i<dim.length;i++){
			if(data == dim[i]){
				index=i;break;
			}
		}
		
		if( index >= 0  &&  index < dim.length)
			System.out.println("�˻��ϰ� �ϴ� ���� " + (index+1) + " ��°�� �ֽ��ϴ�");
		else
			System.out.println( "�Է� �� " + data + " �� �������� �ʽ��ϴ�");
		}
}
