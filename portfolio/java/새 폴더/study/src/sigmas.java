public class sigmas {
	public static void main(String[] args) {
		int a = 1;
		int re1 = 0;
		int re2 = 0;
		for (int c = 1; c <= 30; c++) {
			re1 += c * c;
			re2 += a;
		}
		System.out.println(re1 + re2);
	}
}
