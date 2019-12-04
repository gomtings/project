import java.util.Scanner;
public class gugudan {
	public static void main(String [] args){
		int count=0;
		Scanner scr=new Scanner(System.in);
		do{
			System.out.print("구구단을 학습합니다.(정지는 n or N 계속은 Y or y)");
			char a=scr.next().charAt(0);
			if(a =='y'|| a=='Y'){
			for(int c=1;c<=4;c++){
			int m=(int)(Math.random()*9+1);// 랜덤 정수를 생성한다. 
			int n=(int)(Math.random()*9+1);
			int z=m*n;
			System.out.print(m+"*"+n+"=??");
			int x=scr.nextInt();
			if(x == z){
				System.out.println("정답입니다.");
				count++;
			}
			else {
				System.out.println("오답입니다.");	
			}
			}//for문	
				}
			else 
				break;
		}while(true);// while 문
		System.out.print("정답 개수는"+count);
	}			
	}



