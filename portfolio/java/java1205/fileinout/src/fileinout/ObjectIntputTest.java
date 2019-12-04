package fileinout;

import java.io.FileInputStream;
import java.io.IOException;
import java.io.ObjectInputStream;

public class ObjectInputTest {
	public static void main(String[] args) throws IOException {

		if(args.length != 1) {
			System.out.println("프로그램 실행방법");
			System.out.println("c:> java 실행파일명 읽을파일명");
			System.out.println("c:> java ObjectInputTest object.dat");
			System.out.println("읽을 파일명과 함께 실행하시기 바랍니다.");
			System.exit(0);
		}
		ObjectInputStream in = null;
		
		try {
			in = new ObjectInputStream(new FileInputStream(args[0]));
			student st = (student) in.readObject();
			System.out.println(st);
     		} catch (Exception e) {
			System.out.println("Exception => " + e);
		} finally {
			if (in != null) {
            	in.close();
		}
	}
}