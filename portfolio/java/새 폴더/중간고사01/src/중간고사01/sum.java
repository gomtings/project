package 중간고사01;
import java.util.*;
public class sum {
	public static void main(String[] args) {
		Scanner key = new Scanner(System.in);
		int max=1;
    do{
    	System.out.print("정수 입력");
    	int z=key.nextInt();
    	if(max<z){
    		max=z;
    	}
    	if(z<=0){
    		break;
    	}
    }while(true);
    System.out.print(max);  
	}
}
