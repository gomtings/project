import java.util.*;
public class t06 {
	 public static void main(String[]  args){
		 Scanner key = new Scanner(System.in);
	      String str; //���ڿ� ���� ����
	while(true){
		System.out.println("���ڿ� �Է�");
	       str=key.next();   //���ڿ� �Է�
	          if(str.equalsIgnoreCase("quit")){
	        	  break;
	        	  //�Է� ���� ���ڿ��� ��quit�� �� ������ �ݺ��� ���� 
	          }
	          System.out.println("���ڿ� ���̴�:"+str.length());
	          //���ڿ� ���� ���
	}
	}
}
