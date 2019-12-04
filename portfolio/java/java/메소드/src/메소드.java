import java.util.*;

public class 메소드 {

	public static void lee(int[] arry) {// 배열 초기화 메소드
		for (int i = 0; i < arry.length; i++) {
			arry[i] = (int) (Math.random() * 100 + 1);
			System.out.print(arry[i] + "  ");

		}
	}

	public static void le2(int[][] arry) { // 2차원 배열 초기화 메소드
		for (int i = 0; i < arry.length; i++) {
			for (int j = 0; j < arry[i].length; j++) {
				arry[i][j] = (int) (Math.random() * 100 + 1);
			}
		}
	}
	

	public static int print(String msg, Scanner key) {
		System.out.print(msg);
		return key.nextInt();
	}

	public static void main(String[] args) {
		Scanner key = new Scanner(System.in);

		int[] abc = new int[10];
		int[] abc2 = new int[5];
		lee(abc);
		System.out.println();
		System.out.println("=======================================");
		lee(abc2);
		System.out.println();
		System.out.println("=======================================");

		int[] arr = new int[print("사이즈 입력", key)];
		lee(arr);
		int temp = 0;
		for (int i = 0; i < arr.length - 1; i++) {
			for (int j = i + 1; j < arr.length; j++) {
				if (arr[i] < arr[j]) {
					temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;
				}
			}
		}

		System.out.println();
		System.out.println("=======================================");
		for (int i = 0; i < arr.length; i++) {
			System.out.print(arr[i] + "  ");
		}
		System.out.println();
		System.out.println("=======================================");
		int[][] ar = new int[4][4];
		le2(ar);
		for (int[] data : ar) {
			for (int data2 : data) {
				System.out.print(data2 + "\t");
			}
			System.out.println();
		}
		int[][] asd = new int[3][3];
		int[][] asd2 = new int[3][3];
		int[][] hap = new int[3][3];
		le2(asd);
		le2(asd2);
		for (int i = 0; i < hap.length; i++) {
			for (int j = 0; j < hap[i].length; j++) {
				hap[i][j] = asd[i][j] + asd2[i][j];
			}
		}
		System.out.println();
		System.out.println("=======================================");
		for (int i = 0; i < hap.length; i++) {
			for (int j = 0; j < hap[i].length; j++) {
				System.out.print(hap[i][j] + "\t");
			}
			System.out.println();
		}
	}
}
