class MaxDim{
 public int max(int [] a){
	 int mas =a[0];
	 for(int i=0; i<a.length;i++){
		 if( a[i] > mas){
			mas=a[i]; 
		 }
	 }
	 return mas;
 }
//������ �迭�� �Ű������� �޾� ���� ū ���� ��ȯ�ϴ� max() - ���� �ۼ�

//�Ǽ��� �迭�� �Ű������� �޾� ���� ū ���� ��ȯ�ϴ� max() - ���� �ۼ�
 public double max(double [] a){
	 double mas =a[0];
	 for(int i=0; i<a.length;i++){
		 if( a[i] > mas){
			mas=a[i]; 
		 }
	 }
	 return mas;
 }
//������ �迭�� �Ű������� �޾� ���� ū ���� ��ȯ�ϴ� max() - ���� �ۼ�
 public char max(char [] a){
	 char mas =a[0];
	 for(int i=0; i<a.length;i++){
		 if( a[i] > mas){
			mas=a[i]; 
		 }
	 }
	 return mas;
 }
}
public class text07 {
	public static void main(String[] args) {
		 MaxDim obj = new  MaxDim();
		 //MaxDim Ŭ���� ��ü ���� & ���� 

	//max() �޼ҵ� ȣ��, ������ ���� �迭�� �Ű������� ����, ��ȯ�� ������ ����
         int a=obj.max(  new int[]{1,2,3,4,5,6,7,});
	//max() �޼ҵ� ȣ��, �Ǽ��� ���� �迭�� �Ű������� ����, ��ȯ�� ������ ����
         double b= obj.max(  new double[]{1.1,2.2,3.2,4.8,5.2,6.9,7.2,});
	//max() �޼ҵ� ȣ��, ������ ���� �迭�� �Ű������� ����, ��ȯ�� ������ ����
        char c= obj.max(  new char[]{'a','b','c','d','e','f'});
	// ��ȯ���� ������
 System.out.print(  "����"+a +"  "+"�Ǽ�"+b+"  "+"���� "+c+"  " );
		}
	}
