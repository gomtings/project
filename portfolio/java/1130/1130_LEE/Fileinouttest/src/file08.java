package ���������;
import java.io.*;
public class file08 {
	public static void main(String[] args) throws IOException{
		BufferedReader in= null;
		BufferedWriter out= null;
		String str;
		try {
			in = new BufferedReader(new FileReader("out.txt"));
			out = new BufferedWriter(new FileWriter("in.txt"));
		while((str=in.readLine())!=null) { 
			System.out.println(str);
			out.flush();
			out.write(str);	
			out.flush();
		}
			
		}finally {
			System.out.println("���α׷� �� ���� �մϴ�.");	
		}
		
		
	}
}
