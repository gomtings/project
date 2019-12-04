import java.io.*;
import java.util.*;
public class file06 {
	public static void main(String[] args) throws IOException{
		Scanner key = new Scanner(System.in);
		FileWriter out = null;
		try{
			System.out.println("문자열을 입력해 주세요.");
			out= new FileWriter("out.txt");
			 out.write(key.next());
		}finally{
			out.close();
			System.out.println("종료합니다.");
		}
	}
}
