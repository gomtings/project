
public class truck extends c {
	int carrycap;
	int getcarrycap() {
	return carrycap;	
	}
	public void setruck (int carrycap ,int speed) {
		this.carrycap=carrycap;
		this.speed=speed;
	}
	void setcarrycap(int value) {
		carrycap = value;
	}
	void upspeed(int value) {
		if(speed+value>=150) {
			speed=200;
		}
		else {
			speed = speed+value;
		}
		
	}

}
