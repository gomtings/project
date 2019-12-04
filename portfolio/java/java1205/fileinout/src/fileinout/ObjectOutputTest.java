package fileinout;

import java.io.*;
import java.util.ArrayList;

public class ObjectOutputTest {
	public static void main(String[] args) throws IOException {
		ObjectOutputStream out = null;
		int i=0;
		student st = new student();
		ArrayList<Object> list = new ArrayList() ;
		list.add(new student("길동이","000"));
		list.add(new student("홍길동","001"));
		list.add(new student("길","002"));
		list.add(new student("동","003"));
		list.add(new student("이","004"));
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
					System.out.println("Student 객체(" + st.getClass().getName() + ") 출력을 완료 했습니다.");
					out.close();
				}
			}

		}
	}
