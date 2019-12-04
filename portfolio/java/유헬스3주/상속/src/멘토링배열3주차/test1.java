package 멘토링배열3주차;
import java.util.*;
public class test1 {
	public static void main(String[] args){
	int [] count = new int[5];
	Scanner key = new Scanner(System.in);
		System.out.println("a 부터 개수를 샐 영문자 입력 !!");
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
