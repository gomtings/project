	import java.util.Scanner;

public class vvv {
			public static void main(String[] args){
			Scanner T7 = new Scanner(System.in);
			System.out.print((3/4.0));
			double cc;
			double cc2;
	         double str;
	        
	         System.out.println("두개의 실수를 입력해 주세요.");
			 cc = T7.nextDouble(); 
			 cc2 = T7.nextDouble(); 
		str =(cc>cc2)? cc : cc2;
		System.out.print("두실수:" + cc +"과"+ cc2 +"--->"+"큰수는:"+str);
		}
	}
