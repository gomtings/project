import java.util.Scanner;
public class teast {
	public static void main(String[] args) {
	      Scanner in = new Scanner(System.in);
	      int i;
	      char ch2 = 0;

	         System.out.println("�¼���ġ��");
	         
	         char[] ch = new char[]{'A','B','C','D','E','F','G'};
	         for(int a = 0; a < ch.length; a++){
	            System.out.print(ch[a] + " ");
	         }
	         
	         System.out.println();
	         
	         char[] ch1 = new char[]{'O','O','O','O','O','O','O'};
	         for(int b = 0; b < ch1.length; b++){
	            System.out.print(ch1[b] + " ");
	         }
	         System.out.println();
	         
	      while(true){         
	         System.out.println("���Ͻô� �¼��� �Է����ּ���:('X'�Է½� ����)");
	         ch2 = in.next().charAt(0);
	         i = ch2 - 65;
	         if(ch2 == 'x'||ch2 == 'X')
	        	 break;
	            
	         if(ch1[i] == 'O'){
	         {
	            System.out.println("�¼��� ���ŵǾ����ϴ�.");         
	            ch1[i] = 'X';
	         }
	         
	         System.out.println("�¼���ġ��");
	         for(int a = 0; a < ch.length; a++){
	            System.out.print(ch[a] + " ");
	         }
	         
	         System.out.println();
	         
	         
	         for(int b = 0; b < ch1.length; b++){
	            System.out.print(ch1[b] + " ");
	         }
	         
	         System.out.println();
	         }
	         
	  
	         else if(ch1[i] == 'X'){
	         {
	            System.out.println("�����Ͻ� �¼��� ���Ű� �Ұ��� �մϴ�.");
	         }
	         System.out.println("�¼���ġ��");
	         for(int a = 0; a < ch.length; a++){
	            System.out.print(ch[a] + " ");
	         }
	         
	         System.out.println();
	         
	         
	         for(int b = 0; b < ch1.length; b++){
	            System.out.print(ch1[b] + " ");
	         }
	         
	         System.out.println();
	         }
	         
	         if(ch2 == 'X')
	            break;
	            
	      } // while�� ���� ����
	   }

	}