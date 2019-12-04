import java.util.*;
class Box{
	private int ga, se, he; //가로, 세로, 높이 저장
	int volume; //부피 저장
	
	public Box(int ga, int se, int he){
		this.ga=ga; 	this.se=se; 	this.he=he;
		volume = ga*se*he; //부피 계산
	}
	
	public int getVolume(){
		return volume;
	}
	public String toString(){
		String str="가로 : " + ga +"\t세로 : " + se + "\t높이 : " + he;
		str += "\t부피 : " + volume;
		return str;
	}
}

class BoxMax{
//매개변수로 받은 객체의 필드 volume을 비교하여 큰 volume값을 갖는 객체를 반환 
	public static Box isMax(Box b1, Box b2){
		if(b1.getVolume() > b2.getVolume())
			return b1;
		else
			return b2;
	}
}
public class aa2 {
	public static void main(String[] args) {
		Scanner in=new Scanner(System.in);
		Box obj1=new Box(5, 3, 6); //객체 선언 & 생성
Box obj2=new Box(10, 2, 5); //객체 선언 & 생성
		Box max = BoxMax.isMax(obj1, obj2);  //정적메소드는 클래스 이름으로 호출
		System.out.println("부피가 큰 박스 => " + max);
		}
}
