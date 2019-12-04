import java.util.Scanner;
public class random {
	public static void main(String[] args){
		Scanner cc=new Scanner(System.in);
		int a=(int)(Math.random()*100+1);
		while(true){
			System.out.print("Á¤¼öÀÔ·Â");
			int x=cc.nextInt();
			if(x<a){
				System.out.println("³­¼ö°ªº¸´Ù ÀÛ½À´Ï´Ù.");
			}
			else if(x>a){
				System.out.println("³­¼ö°ªº¸´Ù Å«°ª ÀÔ´Ï´Ù.");
			}
			else if(x==a){
				System.out.print("³­¼ö°ªÀ» ¸Â­Ÿ½À´Ï´Ù.");
				break;
			}
		}
	}
}