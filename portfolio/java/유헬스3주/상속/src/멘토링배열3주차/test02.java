package ���丵�迭3����;
import java.util.*;
public class test02 {
	public static void main(String[] args){
	String[] a = {"Ace","dia","clover","spade"};
	char[] b ={'1','2','3','4','5','6','7','8','9','j','q','k'};
	Scanner key = new Scanner(System.in);
	System.out.println("����1~4 ���� ���� �Է�");
	int x = key.nextInt();
	System.out.println("����1~11 ���� ���� �Է�");
	int y = key.nextInt();
	System.out.println(a[x-1]);
	System.out.println(b[y-1]);
	}

}
