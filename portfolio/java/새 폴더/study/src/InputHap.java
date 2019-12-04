import java.util.*;
public class InputHap {
	public static void main(String[] args) {
		int cnt=5;  //입력 회수
		int hap=0;  //입력된 정수 합 저장
		int data; //입력된 정수 저장
		Scanner key=new Scanner(System.in);
		
		while(cnt > 0){
			System.out.print(cnt + "번째 입력 : ");
			data = key.nextInt();
			hap += data;
			cnt--;  //입력 회수를 1씩 감소
		}
		System.out.println("입력된 정수 합  = " + hap);  //입력된 정수 합 출력
		}
}
