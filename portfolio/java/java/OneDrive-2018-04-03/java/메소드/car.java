package nasode;
import java.util.*;
public class car {
	String menu;
	String color;
	String menu2;
	String color2;
	public static void main(String []args){
		Scanner vv=new Scanner(System.in);
		car carm = new car();
		carm.menu ="람보르기니";
		carm.color ="주황색";
		carm.menu2 ="소나타";
		carm.color2 ="빨간색";
		System.out.println("차종:"+carm.menu);
		System.out.println("차색상:"+carm.color);
		System.out.println("---------------------");
		System.out.println("차종:"+carm.menu2);
		System.out.println("차색상:"+carm.color2);
		
	}

}
