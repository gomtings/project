package ��������;

import java.util.*;

public class arry01 {
	public static void main(String[] args) {
		Scanner key = new Scanner(System.in);
		int size;
		int st = 0;
		;
		int hap = 0;
		double p = 1;
		System.out.print("�л����� �Է� �ϼ���");
		size = key.nextInt();
		int[] sum = new int[size];
		Outter: while (true) {
			for (int j = 0; j < sum.length; j++) {
				System.out.println("�л�" + (j + 1) + " �� ������ �Է��ϼ���");
				sum[j] = key.nextInt();
				if (sum[j] >= 0 && sum[j] <= 100) {
				} else {
					System.out.println("�߸��� �Է� �Դϴ�. �ٽ� �Է��ϼ���");
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
		System.out.print("����� " + p + "�Դϴ�.");
	}
}
