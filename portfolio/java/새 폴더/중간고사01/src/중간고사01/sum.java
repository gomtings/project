package �߰����01;
import java.util.*;
public class sum {
	public static void main(String[] args) {
		Scanner key = new Scanner(System.in);
		int max=1;
    do{
    	System.out.print("���� �Է�");
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
