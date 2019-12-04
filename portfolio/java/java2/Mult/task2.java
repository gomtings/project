public class task2 {
	public static void main(String[] args) {
		SmartPhone sp = new SmartPhone();
		sp.sendCall();
		sp.play();
		System.out.println(sp.calculate(5, 15));
		sp.scheduler();
	}
}