import java.util.Scanner;
class Product{
	private String namenum;
	private String name;
	private int num;
	private int pay;
	Product(){
		namenum="0";
		name="0";
		num=0;
		pay=0;
	}
	Product(String namenum,String name,int num,int pay){
		this.namenum=namenum;
		this.name=name;
		this.num=num;
		this.pay=pay;
	}
    int getInvoice() {
		return pay*num;
	}
    void display(){
    System.out.println("��ǰ��ȣ"+namenum);
    System.out.println("��ǰ��"+name);
    System.out.println("�ǸŰ���"+num);
    System.out.println("��ǰ����"+pay);
    System.out.println("�Ǹűݾ�"+getInvoice());
    }
  int maxProduct(Product obj1) {
	  
  }
}
public class aa10 {
	public static void main(String[] args) {
		Scanner key = new Scanner(System.in);
		 Product[] obj =  new Product[5];
	}
}
