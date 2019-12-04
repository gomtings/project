package À¯Çï½º0530;

public class aitTest2 {
	public static void main(String [] args){
		air a [] = new air[4];
		a[0] = new air();
		a[1] = new air("a1", 300);
		a[2] = new air("a2" , 200);
		a[3] = new air("a3" , 400);
		String many_model = a[3].getModel(a);
	}

}
