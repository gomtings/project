import java.util.*;
import java.io.*;

public class file03 {
	public static void main(String[] args) throws IOException{
		Scanner key = new Scanner(System.in);
		FileOutputStream out = null;
		int str;
		try {
			out = new FileOutputStream("out_a.txt", false);
			do {
				System.out.println("���ڸ� �Է��ϼ���");
				str=key.next().charAt(0);
				if(Character.toLowerCase(str)=='q')
					break;
				out.write(str);
			} while (true);

		}finally {
			out.close();
			System.out.println("���α׷� �� ���� �մϴ�.");
		}
	}
}
