 class c{
	String color;
	int speed;
	static int CarCount = 0;
	final static int maxspeed = 200;
	final static int minspeed = 50;
		
	static int currentcarcount() {
		return CarCount;
	}
	c(String color , int speed){
		this.color = color;
		this.speed=speed;
		CarCount++;
	}
	c(int speed){
		this.speed=speed;
	}
	c(){ }
	int getspeed() {
		return speed;
	}
	void upspeed(int value) {
		if(speed+value>=200) {
			speed=200;
		}
		else {
			speed = speed+value;
		}
		
	}
	void downspeed(int value) {
		if(speed - value<=0) {
			speed = 0;
		}
		else{
			speed = speed-value;
		}
	}
	String getColor() {
		return color;
	}
}
public class ex01 {
	public static void main(String[] args) {
	}
}
