import java.util.Scanner;
public class ba {
	public static void main(String[]args){
		
		final int student = 5;
				int total =0;
				
				Scanner rr =new Scanner(System.in);
				int[] scores = new int[student];
				for(int c = 0; c<scores.length; c++){
					System.out.print("성적입력");
					scores [c] = rr.nextInt();
					
				}
				
				for(int c = 0; c<scores.length; c++){
					total += scores[c];
					
				}
				
				System.out.print("평균성적은" + total /student + "입니다.");	
				
	}
}
