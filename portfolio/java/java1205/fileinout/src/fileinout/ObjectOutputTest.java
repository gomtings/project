package fileinout;

import java.io.*;
import java.util.ArrayList;

public class ObjectOutputTest {
	public static void main(String[] args) throws IOException {
		ObjectOutputStream out = null;
		int i=0;
		student st = new student();
		ArrayList<Object> list = new ArrayList() ;
		list.add(new student("�浿��","000"));
		list.add(new student("ȫ�浿","001"));
		list.add(new student("��","002"));
		list.add(new student("��","003"));
		list.add(new student("��","004"));
			try {
				do{
				out = new ObjectOutputStream(new FileOutputStream("output.txt"));
				out.writeObject(list.get(i));
				out.flush();
				i++;
				}while(i<list.size());
				
			} catch (Exception e) {
	
			} finally {
				if (out != null) {
					System.out.println("Student ��ü(" + st.getClass().getName() + ") ����� �Ϸ� �߽��ϴ�.");
					out.close();
				}
			}

		}
	}
