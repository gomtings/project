import java.util.*;
class Box{
	int ga ,  sa , ha , vo;
      //핃드구성 : 가로(int), 세로(int), 높이(int), 부피(int)
	public void volume(){
		vo=ga*sa*ha;
	}
      //volume() 메소드 : 부피를 계산하여 필드에 저장, 매개변수와 반환값 없음
      //toString() 메소드 : 객체 내용(가로, 세로, 높이, 부피)을 문자열로 반환, 매개변수 없음
	public String toString(){
		String str;
		str="가로"+ga +"세로"+sa +"높이"+ ha+"부피";
		return str;
	}
}
public class test04 {
	public static void main(String[] args) {
		Scanner key=new Scanner(System.in);
		Box obj =new Box();
        //Box 클래스 객체  선언 & 생성 – 본인 작성
		System.out.println("가로 입력");
		obj.ga=key.nextInt();
		System.out.println("세로 입력");
		obj.sa=key.nextInt();
		System.out.println("높이 입력");
		obj.ha=key.nextInt();
       //입력 받은 값으로 가로, 세로, 높이 필드 초기화 – 본인작성
		obj.volume();
      //volume() 메소드 호출 – 본인작성
      //객체 내용 출력 – 본인작성
		System.out.print(obj.toString()+obj.vo);
}
} 
