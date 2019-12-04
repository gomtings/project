import java.util.Scanner;
public class teast {
	public static void main(String[] args) {
	      Scanner in = new Scanner(System.in);
	      int i;
	      char ch2 = 0;

	         System.out.println("좌석배치도");
	         
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
	         System.out.println("원하시는 좌석을 입력해주세요:('X'입력시 종료)");
	         ch2 = in.next().charAt(0);
	         i = ch2 - 65;
	         if(ch2 == 'x'||ch2 == 'X')
	        	 break;
	            
	         if(ch1[i] == 'O'){
	         {
	            System.out.println("좌석이 예매되었습니다.");         
	            ch1[i] = 'X';
	         }
	         
	         System.out.println("좌석배치도");
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
	            System.out.println("선택하신 좌석은 예매가 불가능 합니다.");
	         }
	         System.out.println("좌석배치도");
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
	            
	      } // while문 종료 루프
	   }

	}