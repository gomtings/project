package 멘토링배열3주차;
import java.util.*;
public class test02 {
	public static void main(String[] args){
	String[] a = {"Ace","dia","clover","spade"};
	char[] b ={'1','2','3','4','5','6','7','8','9','j','q','k'};
	Scanner key = new Scanner(System.in);
	System.out.println("숫자1~4 사이 숫자 입력");
	int x = key.nextInt();
	System.out.println("숫자1~11 사이 숫자 입력");
	int y = key.nextInt();
	System.out.println(a[x-1]);
	System.out.println(b[y-1]);
	}

}
