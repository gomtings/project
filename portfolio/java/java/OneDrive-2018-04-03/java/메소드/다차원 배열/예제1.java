import java.util.*;

public class ����1 {
	public static void main(String[] args) {
		Scanner key = new Scanner(System.in);
		int sum = 0;
		System.out.println("1�� -------------------------------------------");
		int[][] arm = new int[][] { { 1, 2, 3 }, { 4, 5, 6, }, { 7, 8, 9 }, { 10, 11, 12 } };
		for (int i = 0; i <arm.length; i++) {
			for (int j = 0; j <arm[i].length; j++) {
				sum += arm[i][j];
			}
		}
		System.out.println("�迭 ���� �� :" + sum);
		System.out.println("2�� -------------------------------------------");
		int[][] dim;
		System.out.println("�迭 ũ�� �Է�");
		int size = key.nextInt();
		dim = new int[size][size];
		for (int i = 0; i < dim.length; i++) {
			for (int j = 0; j < dim[i].length; j++) {
				dim[i][j] = (int) (Math.random() * 91 + 10);
				System.out.print(dim[i][j] + " ");
			}

		}
		System.out.println();
		System.out.println("3�� -------------------------------------------");
		int[][] arry = new int[][] { { 1, 2, 3 }, { 4, 5, 6, }, { 7, 8, 9 }, { 10, 11, 12 } };
		int data, index = -1, index2 = -1;
		System.out.println("�˻��� �� �Է� ");
		data = key.nextInt();
		for (int i = 0; i < arry.length; i++) {
			for (int j = 0; j <arry[i].length; j++) {
				if (data == arry[i][j]) {
					index = i;
					index2 = j;
				}
			}
		}
		if (index >= 0 && index2 >= 0 && index < arry.length && index2 < arry.length) {
			System.out.println("�Է°�:" + data + "�� " + (index + 1) + "�� " + (index2 + 1) + "��ġ�� �ֽ��ϴ�.");
		} else {
			System.out.println("�Է� �� " + data + " �� �������� �ʽ��ϴ�");
		}
		System.out.println("4�� -------------------------------------------");
		System.out.println();
		int hap = 0;
		int[][] arr = new int[3][2];
		System.out.println(arr.length);
		for (int i = 0; i < arr.length; i++) {
			for (int j = 0; j <arr[i].length; j++) {
				System.out.println("������ �Է� �ϼ���");
				arr[i][j] = key.nextInt();
			}
		}
		for (int i = 0; i <arr.length ; i++) {
			for (int j = 0; j <arr[i].length ; j++) {
				hap += arr[i][j];
				System.out.println("��ġ��" + "[" + (i + 1) + "][" + (j + 1) + "]" + arr[i][j]);
			}
		}
		System.out.println("�迭�� ����" + hap);

		System.out.println("5�� -------------------------------------------"); 
		System.out.println();
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
		for (int i = 3; i >= 0; i--) {
			for (int j = 3; j >= 0; j--) {
				System.out.print(and[i][j]);
			}
		}

		System.out.println();
		System.out.println("6�� -------------------------------------------");
		System.out.println("=============�迭 ���� ���================");
		char[][] any = new char[][] { { 'a', 'b', 'c' }, { 'd', 'e', 'f', }, { 'g', 'h', 'i' }, { 'j', 'k', 'l' } };
		for (int i = 0; i < any.length; i++) {
			for (int j = 0; j <any[i].length; j++) {
				System.out.print(any[i][j] + " ");
			}
		}
		System.out.println();
		System.out.println("=============�迭 ���� ���================");
		for (int i = 0; i <any.length; i++) {
			for (int j = 0; j < any[i].length; j++) {
				System.out.print((char) (any[i][j] - 32) + " ");
			}
		}
		System.out.println();
		System.out.println("7�� -------------------------------------------");
		int[][] vvv;
		int max = 0, min = 0;
		int max1 = -1, min1 = -1;
		int max2 = -1, min2 = -1;
		vvv = new int[3][3];
		System.out.println();
		System.out.println("=============�迭 ���� ���================");
		for (int i = 0; i < vvv.length; i++) {
			for (int j = 0; j < vvv[i].length; j++) {
				vvv[i][j] = (int) (Math.random() * 90 + 10);
				System.out.print(vvv[i][j] + " ");
				if (vvv[i][j] > max) {
					max = vvv[i][j];
					max1 = i;
					max2 = j;
				} else {
					min = vvv[i][j];
					min1 = i;
					min2 = j;
				}
			}

		}
		System.out.println();
		System.out.println();
		System.out.println("����ū ���� " + max + "    " + "index=" + max1 + "," + max2);
		System.out.println("����ū ���� " + min + "    " + "index=" + min1 + "," + min2);
	}
}