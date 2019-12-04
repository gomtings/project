import java.util.Scanner; 
public class test4 {
	public static void main(String[] args){
		int r;
		double c2;
		double c3;
		double c4;
		final double PI =3.14;
		
		Scanner t5 = new Scanner(System.in); 
		System.out.print("구의 반지름은:");
		r =t5.nextInt();
		c2 =  PI * r * r; //넓이
		c3 = 2 * PI * r; // 둘레
		c4 = 4/3*PI*r*r*r;//부피
		System.out.println("반지름은:"+ r + "넓이:"+c2+"둘레:"+c3+"부피:"+c4 +"입니다."); 
	}
}
