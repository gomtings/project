import java.util.Scanner; 
public class test5 {
	public static void main(String[] args){
	Scanner T6 = new Scanner(System.in);
	int cc;
	String result;
	System.out.println("�Ѱ��� ������ �Է��� �ּ���.");
	 cc = T6.nextInt(); 
	 result =(cc%4==0)? "4�ǹ�� �Դϴ�." : "4�� ����� �ƴմϴ�."; 
	 System.out.println("�Էµ� ������:"+ cc +"�̰�" + result);
}
}
