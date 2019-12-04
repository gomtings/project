import java.util.*;

public class Test01 {
	public static void main(String[] args) {
		int[] arry = { 6, 4, 1, 7, 5 };
		int min;
		for (int i = 0; i < arry.length - 1; i++) {
			for (int j = i + 1; j < arry.length; j++) {
				if (arry[i] > arry[j]) {
					min = arry[i];
					arry[i] = arry[j];
					arry[j] = min;
				}
			}
		}
		for (int data : arry) {
			System.out.print(data + " ");
		}
	}
}
// Selection Sort 선택 정렬