

public class exam01_1 {
	public static void main(String[] args) {
		automobile auto =new automobile();
		truck tk = new truck();
		tk.setcarrycap(200);
		auto.upspeed(250);
		System.out.println("Truck's carrying capacity : "+tk.carrycap);
		System.out.println("Truck's current speed : "+auto.getspeed() );
	}
}
