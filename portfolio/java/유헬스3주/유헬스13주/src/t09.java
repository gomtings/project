class book{
	private String name;
	private String author;

	public void set(String name , String author){
		this.name = name;
		this.author=author;
	}
	public String getname(){
		return name;
	}
	public String getauthor(){
		return author;
	}
}
public class t09 {
	public static void main(String[] args){
	book obj = new book();
   obj.set("홍길동전" , "길동이");
		System.out.print("제목:"+obj.getname());
		System.out.print("저자:"+obj.getauthor());
	}
}
