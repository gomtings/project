import java.util.Scanner;
public class test {
public static void main (String[] args){
 int  t1;
 double t2;
 char t3;
 String t4;
 double as;
 int at;
 int at2;
 int at3;
Scanner key=new Scanner(System.in);
System.out.println("1.������ �Է��� �ּ���.");
		t1 = key.nextInt();
		System.out.print("2.�Ǽ��� �Է��� �ּ���.");
		t2 = key.nextDouble();
		System.out.print("3.���ڸ� �Է��� �ּ���.");
		t3 = key.next().charAt(0);
		System.out.print("4.���ڿ��� �Է��� �ּ���.");
		t4 = key.next();
    	String str;
	       str=(t1/t2==0) ? "¦��" : "Ȧ��" ; //���׿����� 
	       boolean a;
	       a = t1==t2;
	       at = ++t1;
	       at2 = --t1;
	       as=t1+t2;//�Է� ���� t1,t2 �� 
		System.out.println("�Է°���:" + t1 + t2 + t3 + t4 +"�Դϴ�."); //�Էµ� ��簪
	       System.out.println("as:"+ as);//�Է� ���� t1,t2 �� ���
	       System.out.println("at:"+ at);//t1+1��
	       System.out.println("at2:"+ at2);
	       System.out.println("str:"+ str);
	       System.out.println("a:"+ a);
		}
	}

