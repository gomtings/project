import java.util.*;
class tangle {
	
	private int w ,h;
	
	public void set(int w, int h){
		this.w=w;
		this.h=h;
	}
	public int area(){
		return w*h;
	}
	public int perimeter(){
		return (w*2)*(h*2);
	}
	public String toSring(){
		return "넓이 :"+area()+"둘레 :"+perimeter();
	}
	
}
public class 연습11 {
	public static void main (String [] args){
		Scanner key = new Scanner(System.in);
		tangle obj = new tangle();
		System.out.print("가로 세로 입력");
         obj.set(key.nextInt() , key.nextInt() );
		System.out.print( obj.toSring());
	}
}
