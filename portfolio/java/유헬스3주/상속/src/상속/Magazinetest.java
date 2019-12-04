package 상속;

public class Magazinetest {
	public static void main(String[] args){
		Magazine[] mag = new Magazine[2];
		mag[0] = new Magazine("잡지A","10","기자A","2010년 2월 25일"); 
		mag[1] = new Magazine("잡지B","20","기자B","2010년 3월 8일");
		
		System.out.println(mag[0].toString());
		System.out.println(mag[1].toString());

	}
}
