
public class t001 {
	public static void main(String[] args) {
		int[] a = { 1, 2, 3, 4, 5 };
		int[] b = new int[5];
		for (int i = 0; i < b.length; i++) {
			b[i] = a[i];
		}
		System.out.print("¹è¿­ b :");
		for (int data : b)
			System.out.print(data + " ");
	}
}
