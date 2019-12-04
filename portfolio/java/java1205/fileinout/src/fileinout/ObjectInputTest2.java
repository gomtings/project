package fileinout;

import java.io.FileInputStream;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.util.*;
public class ObjectInputTest2 {
	public static void main(String[] args) throws IOException {
   ArrayList<Object> ilst = new ArrayList() ; 
		ObjectInputStream in = null;
		
		try {
			in = new ObjectInputStream(new FileInputStream("output.txt"));
			student st = (student) in.readObject();
			ilst.add(st);
			System.out.println(ilst.get(0));
		} catch (Exception e) {
	
		} finally {
			if (in != null) {
				in.close();
			}
		}
	}
}