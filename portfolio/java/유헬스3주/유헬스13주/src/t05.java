import java.util.*;
class Rectangle {
	private int ga;    //가로
	private int se;    //세로
	public Rectangle(int ga , int se){
		this.ga=ga;
		this.se = se;
	}
	int getArea()	{  //넓이를 계산하여 반환
		int result=ga*se;
		return result;
	}
	public int ga(){
		return ga;
	}
	public int se(){
		return se;
	}
	
	
	public String toString(){  //객체 내용을 문자열로 반환
		String str="가로 : " + ga;
		str +="\n세로 : " + se;
		str +="\n넓이 : " + getArea(); //넓이를 계산하여 반환하는 메소드호출
		return str;
	}
}

public class t05 {
	public static void main(String[] args) {
		Scanner key = new Scanner (System.in);
		Rectangle obj;
		System.out.print("가로 세로 입력");
		obj=new Rectangle(key.nextInt() , key.nextInt() );
		System.out.println(obj); //객체 내용 출력
	}
}

