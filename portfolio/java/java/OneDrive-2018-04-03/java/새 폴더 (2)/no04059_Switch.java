import java.util.*;
public class no04059_Switch {
	public static void main(String [] args){
		Scanner zz = new Scanner(System.in);
		while(true){
			System.out.println("1.2.3.4 각 1~10출력,홀수,짝수,역순");
			int a=zz.nextInt();
			switch(a){
			case 1:
				for(int z =1;z<=10;z++){
					System.out.print(z);	    
				}
				break;
				
			case 2:
				for(int z =1;z<=10;z+=2){
					System.out.print(z);	    
				}
				break;
				
			case 3:
				for(int z =1;z<=10;z++){
					if(z%2==0)
					System.out.print(z);	    
				}
				
			break;
			
			case 4:
				for(int z = 10 ;z<=10;z--){
					System.out.println(z);
					if(z ==1){
						break;
					}
				}
				break;
			
			}
			System.out.println("종료할려면 0을 입력하세요.");
			int k=zz.nextInt();
			 if(k==0){
				 break;
			 }
			 switch(a){
				case 1:
					for(int z =1;z<=15;z++){
						System.out.print(z);	    
					}
					break;
					
				case 2:
					for(int z =1;z<=15;z+=2){
						System.out.print(z);	    
					}
					break;
					
				case 3:
					for(int z =1;z<=15;z++){
						if(z%2==0)
						System.out.print(z);	    
					}
					
				break;
				
				case 4:
					for(int z = 15 ;z<=15;z--){
						System.out.println(z);
						if(z ==1){
							break;
						}
					}
					break;
				} 	 
		}
	}
}

