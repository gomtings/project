public class �迭2���� {
	public static void main(String [] args){
		int[][] and = new int[3][3];
		System.out.println("========�迭 ���� ���================");
		for (int i = 0; i <and.length; i++) {
			for (int j = 0; j < and[i].length; j++) {
				and[i][j] = (int) (Math.random() * 199 + 1);
				System.out.print(and[i][j] + " ");
			}
		}
		for (int i = 0; i < and.length; i++) {
			for (int j = 0; j <and[i].length; j++) {
				System.out.print(and[i][j] + " ");
			}
		}
		System.out.println();
		System.out.println("=============���� ���� ���================");
		for (int i = and.length; i >= 0; i--) {
			for (int j = and[i].length; j >= 0; j--) {
				System.out.print(and[i][j]);
			}
		}
	}
}
