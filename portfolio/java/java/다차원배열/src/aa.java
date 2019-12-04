public class aa {
	public static void main(String [] args){
		System.out.println();
		int[][] and = new int[3][3];
		System.out.println("========배열 원소 출력================");
		for (int i = 0; i <and.length; i++) {
			for (int j = 0; j < and[i].length; j++) {
				and[i][j] = (int) (Math.random() * 200 + 1);
				System.out.print(and[i][j] + " ");
			}
		}
		for (int i = 0; i < and.length; i++) {
			for (int j = 0; j <and[i].length; j++) {
				System.out.print(and[i][j] + " ");
			}
		}
		System.out.println();
		System.out.println("=============역순 으로 출력================");
		for (int i = and.length; i >= 0; i--) {
			for (int j = and[i].length; j >= 0; j--) {
				System.out.print(and[i][j]);
			}
		}
	}
}
