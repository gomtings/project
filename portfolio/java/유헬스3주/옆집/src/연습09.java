class Rectangle {
	int width, height;

	int area() {
		return width * height;
	}
}

public class ����09 {
	public static void main(String[] args){
			Rectangle myRect = new Rectangle();
			myRect.width = 10;
			myRect.height = 20;
			System.out.println("������ " + myRect.area());
			}
		
}