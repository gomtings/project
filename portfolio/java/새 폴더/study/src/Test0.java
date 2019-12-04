import java.util.Scanner;
public class Test0 {
	public static void main (String[]args){
		 Scanner scan = new Scanner(System.in);
		  int month;
		  int last;
		  
		  System.out.println("해당 월을 입력하세요");
		  month = scan.nextInt();
		  
		  switch(month)
		  {
		   case 4:
		   case 6:
		   case 9:
		   case 11:
		    last = 30;
		    break;
		   case 2:
		    last = 28;
		    break;
		   default: // 기본값
		    last = 31;
		    break;
		  }
		  
		  System.out.println(month + "월의 마지막 날은 "+last);
		  
		  
		  //scan.close();
		 }
		}

