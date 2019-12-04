class Dim {
	//메소드 오버로딩 : 매개변수 개수와 타입, 메소드 반환타입을 다르게 정의
	//단, 메소드 이름은 동일하다
	int sum(int[] arr){
		int hap=0;
		for(int i=0; i<arr.length;i++)
			hap += arr[i];
		return hap;
	}
	
	double sum(double[] arr){
		double hap=0;
		for(double d : arr)
			hap += d;
		return hap;
	}
}
public class test06 {
	public static void main(String[] args) {
		Dim obj=new Dim(); //객체 생성
		//정수형 무명 배열을 매개변수로 전달
		int ihap=obj.sum(new int[] {4,2,6,5,8,9}); 
//실수형 무명 배열을 매개변수로 전달
		double dhap = obj.sum(new double[] {12.3, 4.2, 5.7, 2.4, 4.1});
		System.out.println("정수 배열 합 " + ihap);
		System.out.println("실수 배열 합 " + dhap);
	}
}
