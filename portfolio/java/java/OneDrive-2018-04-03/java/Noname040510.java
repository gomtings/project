import java.util.*;
public class Noname040510 {
	public static void main(String[] args){
		Scanner zz = new Scanner(System.in);
		while(true){
			int z=0;
			System.out.print("���̸� �Է��ϼ���.");
			int i =zz.nextInt();
			System.out.print("1.�簢�� 2.�����ﰢ�� 3.���ﰢ�� 4.���� ���ﰢ��5.���� ���ﰢ��");
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
		    System.out.println("0�� ������ ���� �մϴ�.");
		    int g=zz.nextInt();
		    if(g ==0)
		    	break;
			
		}
	}
}
