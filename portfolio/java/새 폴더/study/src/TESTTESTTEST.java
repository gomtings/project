import java.util.*;

public class TESTTESTTEST {

	public static void main(String args 
			) {
		Scanner in = new Scanner(System.in);
		int cnt = 0;
		char ch = in.next().charAt(0);
		
		while(true){	
			ch = in.next().charAt(0);
			if(ch == 'q')
				break;			
			++cnt;
		}
		System.out.print("ют╥б╣х х╫╪Ж:" + cnt);
	}

}
