package ���������;
import java.io.*;
public class file07 {
	public static void main(String[] args) throws IOException{
		BufferedReader out1= null;
		try {
			out1 =new BufferedReader(new FileReader("out.txt"));
			String str;
			 while ((str = out1.readLine()) != null) {
			        System.out.println(str);
			        
			      }
			 out1.close();
		}finally {
			System.out.println("���α׷� �� ���� �մϴ�.");
		}
	}
}