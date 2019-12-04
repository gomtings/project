
public class sweek102 {
	public static void main(String[] args) {
		for (int a = 2; a >= 0; a--) { 
			// 2부터 1씩 감소한다 0보다 크거나 같을때까지  출력할 줄수 
			for (int b = a; b > 0; b--) { //공백값 계산
				// b 값이 0보다 클을때까지 증가
				System.out.print(" ");// 공백값 출력
			}
			for (int c = 1; c <= 5; c++) {//5보다 작거나 같을경우 까지 출력
				//->별이 5개까지 출력
				 
				System.out.print("*");// 별출력
			}
			System.out.println();// 줄바꿈
		}
	}
}
