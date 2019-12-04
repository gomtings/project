
public class week03 {
    Double x=11.3;
	public static void main(String[] args){
		long x=23;
		{
			double y=x;
			x=3;
			System.out.println("x="+x);
			System.out.println("y="+y);
		}
		System.out.println("x="+x);
	}
}
