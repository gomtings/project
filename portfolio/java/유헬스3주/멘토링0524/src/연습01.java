 class pri{
	 private int num;
	 private String name;
	 private int num1;
	 private String name1;
	 void setNum(int n){//n�� ���� �ް�����
		 this.num1=n;
	 }
	 int getNum(){
		 return this.num1;
	 }
	 void setName(String n){//n�� ���� �ް�����
		 this.name=n;
	 }
	 String getName(){
		 return this.name1;
	 }
	 void print1(){
		 System.out.println("public������ ���");
		 System.out.println("�̸���:"+this.name1);
		 System.out.println("���̴�:"+this.num1);
		 System.out.println("public������ ���");
		 System.out.println();
	 }
	 void print(){
		 System.out.println("public������ ���");
		 System.out.println("�̸���:"+this.name);
		 System.out.println("���̴�:"+this.num);
		 System.out.println("public������ ���");
		 System.out.println();
	 }
 }
public class ����01 {
	public static void main(String[] args) {
    pri my = new pri();
//my.num=24; private�� �ȵȴ�.
  //my.name="���α�"; private�� �ȵȴ�.
my.num1=23;
my.name1="����=�α� ��ģ";
my.setNum(24);
my.setName("���α�");
my.print();
my.print1();
	}
}
