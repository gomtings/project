
import java.util.Scanner;
public class T07 {
	public static void main(String [] args){
		Scanner key = new Scanner(System.in);
		int ran,ran2;
		String [] Clubs = new String[] { "Clubs", "Diamonds", "Hearts", "Spades" };
		String[] Jack = new String[]{ "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King", "Ace" };
		System.out.print("반복횟수");
		int sum = key.nextInt();
		for(int i=0;i<sum;i++){
		 ran = (int)(Math.random()* Clubs.length);
		 ran2 = (int)(Math.random()*Jack.length);
		 System.out.println((i+1)+"번째"+Clubs[ran]+"의"+Jack[ran2]);
		}
	}
}
