import java.util.Scanner;
public class no040605 {
	public static void main(String [] args){
		Scanner zz= new Scanner(System.in);
	    String[] arr ={"하나","둘","셋"};
	    for(;;){
	    	System.out.println("숫자를 입력하세요:(0입력시 종료");
	    	int d=zz.nextInt();
	    	System.out.println(arr[d-1]);
	    	if(d==0)
	    		break;
	    	}
	    }
		
	}
