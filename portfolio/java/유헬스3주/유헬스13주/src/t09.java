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
   obj.set("ȫ�浿��" , "�浿��");
		System.out.print("����:"+obj.getname());
		System.out.print("����:"+obj.getauthor());
	}
}
