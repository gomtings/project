package ���;

public class Magazinetest {
	public static void main(String[] args){
		Magazine[] mag = new Magazine[2];
		mag[0] = new Magazine("����A","10","����A","2010�� 2�� 25��"); 
		mag[1] = new Magazine("����B","20","����B","2010�� 3�� 8��");
		
		System.out.println(mag[0].toString());
		System.out.println(mag[1].toString());

	}
}
