public class HapWhile{
	public static void main(String[] args) {
		int hap=0;  //������ ���� �����ϴ� ����, �ݵ�� �ʱ�ȭ �Ǿ�� �Ѵ�
		int i=1;
		
		while(i<=100){
//���� i�� ���� hap�� ����� ���� ���Ͽ� ���� hap�� ����(����)
			hap += i;
			i++; //������ ����
		}
		System.out.println("1���� 100���� ��  = " + hap);  //
		}
}
