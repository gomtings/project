package ���丵�迭3����;
import java.util.*;
public class test1 {
	public static void main(String[] args){
	int [] count = new int[5];
	Scanner key = new Scanner(System.in);
		System.out.println("a ���� ������ �� ������ �Է� !!");
		char c = key.next().charAt(0);
		int[] ch =new int[c-'a'];
		for(int i='a';i< c ;i++){
			ch[i-'a']= i;
		}
		for(int i=0;i<ch.length;i++){
			for(int j='a';j < c ;j++){
			if(ch[i]==j){
				count[i]++;
			}
			}
		}
		for(int i=0;i<count.length;i++){
			System.out.println(count[i]);
		}
	}
}
