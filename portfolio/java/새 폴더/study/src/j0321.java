import java.util.Scanner;
public class j0321 {
public static void main(String[] aregs){
	Scanner c2 = new Scanner(System.in);
	int cc;
	int cc2;
	char ch2;
	System.out.println("�� ���� �Է�");
	cc = c2.nextInt();
	cc2 = c2.nextInt();
	System.out.println("���ϴ� �����ڸ� �Է��� �ּ���" + "�ش翬���� �� ��� �մϴ�.");
	ch2 = c2.next().charAt(0);
	if(cc<0){
		System.out.println("�Է°��� ���� �Դϴ�. ����� �Է��ϼ���.");
		cc = c2.nextInt();
	}
	System.out.println("�Է°���:"+cc);
	System.out.println(cc>>>2);
	System.out.println(cc>>2);
	System.out.println(cc<<2);
	if(ch2 == '+' ){
		System.out.println(( cc+cc2));
	}
	else if(cc2 =='*'){
		System.out.println(( cc*cc2));
	}
	else if(cc2 =='/'){
		System.out.println(( cc / cc2));
	}
	else if(cc2 == '%'){
		System.out.println(( cc % cc2));
	}	
}
}
