public class sweek10 {
	public static void main(String[] args) {
		for (int a = 3; a >= 0; a--) { 
			// 3���� 1�� �����Ѵ� 0���� ũ�ų� ����������  ����� �ټ� 
			for (int b = a; b < 3; b++) { //���鰪 ���
				// b ���� 3���� ���������� ����
				System.out.print(" ");// ���鰪 ���
			}
			for (int c = 1; c <= a * 2 - 1; c++) {// 1�� a*2-1 ���� 
				//�۰ų� ����������.���� ��º�  ex:3*2-1=5 ù�ٿ�5�� ��� 
				System.out.print("*");// �����
			}
			System.out.println();// �ٹٲ�
		}
	}
}
