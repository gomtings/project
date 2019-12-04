import java.util.*;
public class 실습04 {
	public static void main(String[] args) {
		Scanner key=new Scanner(System.in);
		int[] dim = new int[5]; //배열 선언과 생성
		int hap=0; //배열 원소 합을 저장
		
		System.out.println("배열 원소를 입력하세요 : ");
		for(int i=0; i <dim.length; i++){
			System.out.print((i+1) + " 번째 : ");
              dim[i] = key.nextInt();
              hap+=dim[i];
		}
		System.out.println("배열 원소를 출력하세요 : ");
		for(int x=0; x<dim.length;x++){
			 System.out.println( (x+1) + " 번째 : " + dim[x]);
		}
		System.out.print("배열 원소 합 : " + hap);
	}
}
