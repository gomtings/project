
public class 실습01 {
	public static void main(String[] args) {
		int[] copyFrom = {1, 2, 3, 4, 5, 6, 7};   //배열 선언 & 생성 & 초기화
		int sum=0;
	       
	     //for~each를 이용한 배열 합 계산
for(int  temp : copyFrom)
          sum += temp;   //배열 원소 합 계산
	System.out.println("배열 원소 합 :" + sum);
	}
}
