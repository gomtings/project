import java.util.*;
public class Noname040510 {
	public static void main(String[] args){
		Scanner zz = new Scanner(System.in);
		while(true){
			int z=0;
			System.out.print("높이를 입력하세요.");
			int i =zz.nextInt();
			System.out.print("1.사각형 2.직각삼각형 3.역삼각형 4.숫자 직삼각형5.숫자 역삼각형");
			int i2 =zz.nextInt();
		    switch(i2){
		    case 1:
		    	for(int a=1;a<=i;a++){
		    		for(int b=1;b<=i;b++){
		    			System.out.print("*");
		    		}
		    		System.out.println("");
		    	}
		    	break;
		    case 2:
		    	for(int a=1;a<=i;a++){
		    		for(int b=1;b<=a;b++){
		    			System.out.print("*");
		    		}
		    		System.out.println("");
		    	}
		    	break;
		    case 3:
		    	for(int a=0;a<=i;a++){
		    		for(z=i-a; z>0; z--){
		    			System.out.print("*");
		    		}
		    		System.out.println("");
		    	}
		    	break;
		    case 4:
		    	for(int a=1;a<=i;a++){
		    		for(int b=1;b<=a;b++){
		    			System.out.print(b);
		    		}
		    		System.out.println("");
		    	}
		    	break;
		    case 5:
		    	for(int a=0;a<=i;a++){
		    		for(z=i-a; z>0; z--){
		    			System.out.print(z);
		    		}
		    		System.out.println("");
		    	}
		    	break;
		      default :
		      
		    }
		    System.out.println("0을 누르면 종료 합니다.");
		    int g=zz.nextInt();
		    if(g ==0)
		    	break;
			
		}
	}
}
