public class HapDowhile {
	public static void main(String[] args) {
		int hap=0;  //������ ���� �����ϴ� ����, �ݵ�� �ʱ�ȭ �Ǿ�� �Ѵ�
		int i=1;
		
		do{
			hap += i;
			i++; //������ ����
		}while(i<=100);
		System.out.println("1���� 100���� ��  = " + hap);  //
		}
}

