public class sweek10 {
	public static void main(String[] args) {
		for (int a = 3; a >= 0; a--) { 
			// 3부터 1씩 감소한다 0보다 크거나 같을때까지  출력할 줄수 
			for (int b = a; b < 3; b++) { //공백값 계산
				// b 값이 3보다 작을때까지 증가
				System.out.print(" ");// 공백값 출력
			}
			for (int c = 1; c <= a * 2 - 1; c++) {// 1이 a*2-1 보다 
				//작거나 같을때까지.실제 출력부  ex:3*2-1=5 첫줄에5가 출력 
				System.out.print("*");// 별출력
			}
			System.out.println();// 줄바꿈
		}
	}
}
