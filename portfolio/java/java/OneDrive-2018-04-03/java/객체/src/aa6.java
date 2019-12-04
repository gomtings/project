import java.util.*;
class MyMetric {
	 private static double  distance;
//계산 결과를 저장하는 정적 필드 변수 선언 distance, double형 – 본인작성
  public double  mile(double distance){
	 return  distance*0.6;
  }
	//매개변수(double)로 받은 값을 mile로 변환하여 
//distance에 저장한 후 반환 하는 정적메소드 – 본인작성
  public double  km(double distance){
		 return  distance*1.6;
	  }	
	//매개변수(double)로 받은 값을 킬로미터로 변환하여
// distance에 저장한 후 반환하는 정적 메소드 – 본인작성
	
}
public class aa6 {
	public static void main(String[] args){
		Scanner key = new Scanner(System.in);
		MyMetric obj = new MyMetric();
		System.out.println("변환할 매뉴 입력");
		System.out.println("1.km->mile \n 2.mile->km");
		int x=key.nextInt();
		switch(x){
		case 1: 
			System.out.println("변환할 km 입력");
			System.out.println(obj.mile(key.nextDouble()));
			break;
		case 2: 
			System.out.println("변환할 mile 입력");
			System.out.println(obj.mile(key.nextDouble()));
			break;
		}
	}
}
