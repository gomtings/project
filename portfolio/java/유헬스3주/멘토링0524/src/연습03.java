 class pri{
	 static int cnt;

	 static getcnt(int n){//n�� ���� �ް�����
		return cnt;
	 }
	 }
	pri1(int un){
		 System.out.println("public������ ���");
		 System.out.println("�̸���:"+name);
		 System.out.println("���̴�:"+un);
		 System.out.println("public������ ���");
		 System.out.println();
	 }
	 void print(int un , String n){
		 System.out.println("���̿� �̸� ��� �Ѱ��� ������");
		 System.out.println("�̸���:"+n);
		 System.out.println("���̴�:"+un);
		 System.out.println("public������ ���");
		 System.out.println();
	 }
 }
public class ����03 {
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