
public class Bool {
	public static void main(String[]   args) {
		int x =0xf3a2,   y=0xb7c1;
		boolean b1=true, b2=false;
		System.out.println(" x= " + Integer.toBinaryString(x));  //x�� ����� ���� 2������ ���
		System.out.println(" y= " + Integer.toBinaryString(y));  //y�� ����� ���� 2������ ���
		System.out.println("1: x & y = " + Integer.toBinaryString(x&y));  //�������� 2������ ���
		System.out.println("2: x | y = " + Integer.toBinaryString(x|y));
		System.out.println("3: ~x = " + Integer.toBinaryString(~x));
		System.out.println("4: b1 & b2 = " + (b1&b2));
		System.out.println("5: b1 && b2 = " + (b1&&b2));
		System.out.println("6: b1 || b2 = " + (b1||b2));
		System.out.println("7: b1 ^ b2 = " + (b1^b2));
	     }
}
