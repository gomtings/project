
public class �ǽ�01 {
	public static void main(String[] args) {
		int[] copyFrom = {1, 2, 3, 4, 5, 6, 7};   //�迭 ���� & ���� & �ʱ�ȭ
		int sum=0;
	       
	     //for~each�� �̿��� �迭 �� ���
for(int  temp : copyFrom)
          sum += temp;   //�迭 ���� �� ���
	System.out.println("�迭 ���� �� :" + sum);
	}
}
