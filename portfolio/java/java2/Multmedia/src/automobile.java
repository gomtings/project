
public class automobile extends c {
	int seatnum;
	int getseatnum(){
		return seatnum;
	}
	void upspeed(int value) {
		if(speed + value>=300) {
			speed=300;
		}
		else {
			speed = speed+(int)value;
		}
		
	}
	

}
