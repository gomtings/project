import java.util.*;
class Circle{
	double ban; 
	public double getArea(){
		return (Math.PI)*2*ban;
	}
public double getCircum() {
		return 2*(Math.PI)*ban;
	}
public String toString() {
	return  "반지름 :"+ban +"넓이 :"+ getArea() +"둘레 : " +getCircum() ; 
}

}
public class test05 {
	public static void main(String [] args){
		Scanner key = new Scanner(System.in);
		Circle obj = new Circle();
		System.out.print("반지름 입력");
		obj.ban=key.nextDouble();
		System.out.println( obj.toString());
		
	}
}
