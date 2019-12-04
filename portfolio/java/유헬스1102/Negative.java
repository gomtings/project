package tri;

public class Negative extends Exception {
	
	public Negative(){
		this("");
	}
	public Negative(String msg){
		super(msg);
	}

}
