package ���������;
import java.io.*;
import java.util.*;
public class file09 {
	public static void main(String[] args) {
		Scanner key  = new Scanner(System.in);
		DataOutputStream out =null;
		//out.write(key.nextDouble());
		try {
			out = new DataOutputStream(new FileOutputStream("data.txt"));
			System.out.println("�Ǽ� �Ѱ��� �Է��� �ּ���!");
			out.writeDouble(key.nextDouble());
			out.close();
		} catch (Exception e) {
		}finally {
			System.out.println("���α׷� �� ���� �մϴ�.");	
		}
	}
}