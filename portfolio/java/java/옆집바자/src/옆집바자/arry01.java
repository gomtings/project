package 옆집바자;

import java.util.*;

public class arry01 {
	public static void main(String[] args) {
		Scanner key = new Scanner(System.in);
		int size;
		int st = 0;
		;
		int hap = 0;
		double p = 1;
		System.out.print("학생수를 입력 하세요");
		size = key.nextInt();
		int[] sum = new int[size];
		Outter: while (true) {
			for (int j = 0; j < sum.length; j++) {
				System.out.println("학생" + (j + 1) + " 의 성적을 입력하세요");
				sum[j] = key.nextInt();
				if (sum[j] >= 0 && sum[j] <= 100) {
				} else {
					System.out.println("잘못된 입력 입니다. 다시 입력하세요");
					j--;
				}
			}
			for (int j = 0; j < sum.length; j++) {
				if (sum[j] <= 100 && sum[(j + 1)] <= 100) {
					break Outter;
				}
			}
		}
		for (int j = 0; j < sum.length; j++) {
			hap += sum[j];
		}
		for (int j = 0; j < sum.length; j++) {

			p = hap / size;
		}
		System.out.print("평균은 " + p + "입니다.");
	}
}
