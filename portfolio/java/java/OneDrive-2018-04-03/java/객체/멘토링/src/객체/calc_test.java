package ��ü;
import java.util.*;
public class calc_test {
public static void main(String[] args){
	Scanner key = new Scanner(System.in);
	cals mycalc = new cals();
	System.out.print("���� 1�� �Է��ϼ���.");
	int a=key.nextInt();
	System.out.print("���� 2�� �Է��ϼ���.");
	int b=key.nextInt();
	
	int result  = mycalc.max(a, b);
	System.out.print("���� ū ���� "+result+"�Դϴ�");
}
}
