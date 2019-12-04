class MaxDim{
 public int max(int [] a){
	 int mas =a[0];
	 for(int i=0; i<a.length;i++){
		 if( a[i] > mas){
			mas=a[i]; 
		 }
	 }
	 return mas;
 }
//정수형 배열을 매개변수로 받아 가장 큰 값을 반환하는 max() - 본인 작성

//실수형 배열을 매개변수로 받아 가장 큰 값을 반환하는 max() - 본인 작성
 public double max(double [] a){
	 double mas =a[0];
	 for(int i=0; i<a.length;i++){
		 if( a[i] > mas){
			mas=a[i]; 
		 }
	 }
	 return mas;
 }
//문자형 배열을 매개변수로 받아 가장 큰 값을 반환하는 max() - 본인 작성
 public char max(char [] a){
	 char mas =a[0];
	 for(int i=0; i<a.length;i++){
		 if( a[i] > mas){
			mas=a[i]; 
		 }
	 }
	 return mas;
 }
}
public class text07 {
	public static void main(String[] args) {
		 MaxDim obj = new  MaxDim();
		 //MaxDim 클래스 객체 선언 & 생성 

	//max() 메소드 호출, 정수형 무명 배열을 매개변수로 전달, 반환값 변수에 저장
         int a=obj.max(  new int[]{1,2,3,4,5,6,7,});
	//max() 메소드 호출, 실수형 무명 배열을 매개변수로 전달, 반환값 변수에 저장
         double b= obj.max(  new double[]{1.1,2.2,3.2,4.8,5.2,6.9,7.2,});
	//max() 메소드 호출, 문자형 무명 배열을 매개변수로 전달, 반환값 변수에 저장
        char c= obj.max(  new char[]{'a','b','c','d','e','f'});
	// 반환받은 결과출력
 System.out.print(  "정수"+a +"  "+"실수"+b+"  "+"문자 "+c+"  " );
		}
	}
