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
				this.book="��ȭ";
				this.rental=300;
				this.money= 300*cnt;
				break;
			case 2:
				this.book="�Ҽ�";
				this.rental=400;
				this.money= 400*cnt;
				break;
			case 3:
				this.book="����";
				this.rental=500;
				this.money= 500*cnt;
				break;
			}		
	}
    public String toString(){
    	System.out.println("����ȣ"+id);
    	System.out.println("���� ����"+book);
    	System.out.println("�Ǽ�"+cnt);
    	System.out.println("�뿩��"+rental);
    	System.out.println("�뿩�ݾ�"+money);
    	return"";
    }
}
public class t03 {
	public static void main(String[] args) {
		Scanner key = new Scanner(System.in);
       Book obj;
       System.out.println("���ȣ .���ڵ� . �Ǽ� �Է�");
       obj= new Book(key.next(),key.nextInt() ,key.nextInt());
       System.out.println(obj);
	}
}

