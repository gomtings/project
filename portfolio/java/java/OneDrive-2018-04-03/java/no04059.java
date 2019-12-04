import java.util.*;
public class no04059 {
	public static void main(String [] args){
		Scanner zz = new Scanner(System.in);
		while(true){
			System.out.println("숫자를 입력하세요");
			int a=zz.nextInt();
			if(a == 1){
				for(int z =1;z<=10;z++){
					System.out.println(z);	    
				}
				}
			else if(a == 2){
				for(int z =1;z<=10;z+=2){
					System.out.println(z);	    
				}
				}
			else if (a == 3){
				for(int z =1;z<=10;z+=1){
					System.out.println(z);	    
				}
			}
				else if(a == 4){
					for(int z = 10 ;z<=10;z--){
						System.out.println(z);
						if(z ==1){
							break;
						}
					}
				}
			System.out.println("종료할려면 0을 입력하세요.");
			int k=zz.nextInt();
			 if(k==0){
				 break;
			 }
			 System.out.println("숫자를 입력하세요");
				int s =zz.nextInt();
				if(s == 1){
					for(int z =1;z<=15;z++){
						System.out.println(z);	    
					}
					}
				else if(s == 2){
					for(int z =1;z<=15;z+=2){
						System.out.println(z);	    
					}
					}
				else if (s == 3){
					for(int z =1;z<=15;z+=1){
						System.out.println(z);	    
					}
				}
					else if(s == 4){
						for(int z = 15 ;z<=15;z--){
							System.out.println(z);
							if(z ==1){
								break;
							}
				}
			 
			 }
	}
	}
}

	

