
public class java02 {
	public static void main(String[] args) {
		int ary[][] = {{2, 3, 4}, {3, 6, 9}, {4, 5, 7}}; 
		
		System.out.println("�� ũ�� : " + ary.length); 	
		System.out.println("ù ��° ���� �� ũ�� : " + ary[0].length );
		
		for (int dim[] : ary) {
			for (int value : dim)
				System.out.print(value + " ");
			System.out.println();
		}

		System.out.println("===================");
		//�迭 ���� ��� : ��ø for
		for (int i=0; i<ary.length; i++) {
			for (int j=0; j<ary[i].length; j++)
				System.out.print(ary[i][j] + " ");
			System.out.println();
		}
    }
}
