package 파일입출력;
import java.io.*;
import java.util.*;
public class file09 {
	public static void main(String[] args) {
		Scanner key  = new Scanner(System.in);
		DataOutputStream out =null;
		//out.write(key.nextDouble());
		try {
			out = new DataOutputStream(new FileOutputStream("data.txt"));
			System.out.println("실수 한개를 입력해 주세요!");
			out.writeDouble(key.nextDouble());
			out.close();
		} catch (Exception e) {
		}finally {
			System.out.println("프로그램 을 종료 합니다.");	
		}
	}
}