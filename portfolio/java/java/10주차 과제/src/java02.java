
public class java02 {
	public static void main(String[] args) {
		int ary[][] = {{2, 3, 4}, {3, 6, 9}, {4, 5, 7}}; 
		
		System.out.println("행 크기 : " + ary.length); 	
		System.out.println("첫 번째 행의 열 크기 : " + ary[0].length );
		
		for (int dim[] : ary) {
			for (int value : dim)
				System.out.print(value + " ");
			System.out.println();
		}

		System.out.println("===================");
		//배열 원소 출력 : 중첩 for
		for (int i=0; i<ary.length; i++) {
			for (int j=0; j<ary[i].length; j++)
				System.out.print(ary[i][j] + " ");
			System.out.println();
		}
    }
}
