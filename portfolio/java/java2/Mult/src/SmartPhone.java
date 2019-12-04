interface MobilePhone {
	public void sendCall();
	public void receiveCall();
	public void sendSMS();
	public void receiveSMS();
}

interface MP3 {
	public void play();
	public void stop();
}

class PDA {
	public int calculate(int x, int y) {
		return x + y;
	}
}

public class SmartPhone extends PDA implements MobilePhone, MP3 {
	@Override
	public void sendCall() {
		System.out.println("Send Call !!");
	}

	@Override
	public void receiveCall() {

	}
	
	@Override
	public void sendSMS() {

	}
	
	@Override
	public void receiveSMS() {

	}

	@Override
	public void play() {
		System.out.println("Play Music !!");
	}

	@Override
	public void stop() {

	}


	public void scheduler() {
		System.out.println("Schedular !!");
	}
}