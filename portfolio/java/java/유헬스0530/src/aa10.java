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
	  if(getInvoice() > obj1.getInvoice()) {
		return 1;  
	  }
	  else{
		  return -1;
	  }
		  
  }
}
public class aa10 {
	public static void main(String[] args) {
		Scanner key = new Scanner(System.in);
		 Product[] obj =  new Product[3];
		 for(int i=0;i<obj.length;i++){
			 System.out.println("��ǰ ��ȣ,�̸�,����,���� �Է�");
			 obj[i]=new Product(key.next(),key.next(),key.nextInt(),key.nextInt());
		 }
		 for(int i=0;i<obj.length;i++){
			 obj[i].display();
		 }
		 Product max=obj[0];;
		 for(int i=0;i<obj.length;i++){
			 if(max.maxProduct(obj[i]) == -1){
				max= obj[i];
			 }
		 }System.out.println("=== �ִ� ===");
		 max.display();
	}
}