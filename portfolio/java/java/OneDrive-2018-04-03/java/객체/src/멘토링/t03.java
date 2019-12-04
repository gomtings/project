import java.util.*;
class Book{
	private String id;
	private String book;
	private int cnt;
	private int rental;
	private int money;
	public Book(){
		this.id=id;
		this.book="0";
		this.cnt=0;
		this.rental=0;
		this.money= 0;
	}
	public Book(String id , int code ,int cnt ){
		this.id=id;
		this.cnt=cnt;
			switch(code){
			case 1:
				this.book="만화";
				this.rental=300;
				this.money= 300*cnt;
				break;
			case 2:
				this.book="소설";
				this.rental=400;
				this.money= 400*cnt;
				break;
			case 3:
				this.book="잡지";
				this.rental=500;
				this.money= 500*cnt;
				break;
			}		
	}
    public String toString(){
    	System.out.println("고객번호"+id);
    	System.out.println("도서 종류"+book);
    	System.out.println("권수"+cnt);
    	System.out.println("대여비"+rental);
    	System.out.println("대여금액"+money);
    	return"";
    }
}
public class t03 {
	public static void main(String[] args) {
		Scanner key = new Scanner(System.in);
       Book obj;
       System.out.println("곡객번호 .북코드 . 권수 입력");
       obj= new Book(key.next(),key.nextInt() ,key.nextInt());
       System.out.println(obj);
	}
}

