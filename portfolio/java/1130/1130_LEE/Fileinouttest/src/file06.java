import java.io.*;
import java.util.*;
public class file06 {
	public static void main(String[] args) throws IOException{
		Scanner key = new Scanner(System.in);
		FileWriter out = null;
		try{
			System.out.println("���ڿ��� �Է��� �ּ���.");
			out= new FileWriter("out.txt");
			 out.write(key.next());
		}finally{
			out.close();
			System.out.println("�����մϴ�.");
		}
	}
}
