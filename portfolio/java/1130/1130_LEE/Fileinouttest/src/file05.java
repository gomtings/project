import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.*;
public class file05 {
		public static void main(String[] args) throws IOException{
			FileInputStream in = null;
			FileOutputStream out = null;
			int str;
			try {
				in = new FileInputStream("out_a.txt");
				out = new FileOutputStream("out_b.txt");
				do {
					str=in.read();
					out.write((char)str);
				} while (str!=-1);
			}finally {
				in.close();
				System.out.println("���α׷� �� ���� �մϴ�.");
			}
		}
	}
