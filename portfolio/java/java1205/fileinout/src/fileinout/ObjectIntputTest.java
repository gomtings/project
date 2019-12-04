package fileinout;

import java.io.FileInputStream;
import java.io.IOException;
import java.io.ObjectInputStream;

public class ObjectInputTest {
	public static void main(String[] args) throws IOException {

		if(args.length != 1) {
			System.out.println("���α׷� ������");
			System.out.println("c:> java �������ϸ� �������ϸ�");
			System.out.println("c:> java ObjectInputTest object.dat");
			System.out.println("���� ���ϸ�� �Բ� �����Ͻñ� �ٶ��ϴ�.");
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