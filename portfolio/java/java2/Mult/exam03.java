interface ianimal {
  abstract void eat();	
}
static class icat implements inimal  {
	public void eat() {
		System.out.println("Cat likes a fish");
	}
}
static class itiger extends animal implements ianimal {
	void move() {
		System.out.println("Walk whth 4 feet");
		public void eat() {
			System.out.println("Tiger eats bear");
		}
	}
}
public class exam03{
	public static void main(String[] args) {
		icat cat = new icat();
		cat.eat();
		
		itiger tiger = new itiger();
		tiger.move();
		tiger.eat();
	}
}