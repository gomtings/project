import java.util.*;

public class t08 {
	public static void main(String[] args) {
		Scanner key = new Scanner(System.in);
		String str;
		do {
			System.out.println("문자열 입력");
			str = key.next();
			int a = str.length();
			if (str.equalsIgnoreCase("finish"))
				break;
			for (int j = a - 1; j >= 0; j--) {
				System.out.print(str.charAt(j));
			}
			System.out.println();
		} while (true);
	}
}
