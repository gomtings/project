package 파일입출력;
import java.io.*;
public class file10 {
	public static void main(String[] args) {
		DataInputStream out =null;
		try {
			Double a;
			out = new DataInputStream(new FileInputStream("data.txt"));
				System.out.println(out.readDouble());
				if(out != null)
					out.close();
			out.close();
		} catch (Exception e) {
		}finally {
			System.out.println("프로그램 을 종료 합니다.");	
		}
	}
}
