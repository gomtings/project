import java.util.Scanner;
public class gugudan {
	public static void main(String [] args){
		int count=0;
		Scanner scr=new Scanner(System.in);
		do{
			System.out.print("�������� �н��մϴ�.(������ n or N ����� Y or y)");
			char a=scr.next().charAt(0);
			if(a =='y'|| a=='Y'){
			for(int c=1;c<=4;c++){
			int m=(int)(Math.random()*9+1);// ���� ������ �����Ѵ�. 
			int n=(int)(Math.random()*9+1);
			int z=m*n;
			System.out.print(m+"*"+n+"=??");
			int x=scr.nextInt();
			if(x == z){
				System.out.println("�����Դϴ�.");
				count++;
			}
			else {
				System.out.println("�����Դϴ�.");	
			}
			}//for��	
				}
			else 
				break;
		}while(true);// while ��
		System.out.print("���� ������"+count);
	}			
	}



