import java.util.Scanner;  
public class Test2 {
	public static void main(String[] args){
	Scanner T2 = new Scanner(System.in);
	float cc;
	String result;
	System.out.println("�Ǽ��� �Է��� �ּ���.");
	 cc = T2.nextInt(); 
	 result =(cc>0)? "����Դϴ�." : "Ȧ�� �Դϴ�."; 
	 System.out.println("�Էµ� �Ǽ���:"+ cc + result);
}
}
