import java.util.Scanner;
public class morg {
	public static void main(String[] args){
char ch;
Scanner cc = new Scanner(System.in);
System.out.print("�����̸� m �����̸� w �� �Է��ϼ���.");
ch = cc.next().charAt(0);
if(ch =='m'){
	System.out.println(ch+ "�����Դϴ�.");
}
else if(ch == 'w'){
	System.out.println(ch+ "�����Դϴ�.");
}
else System.out.println("�߸� �Է��ϼ˽��ϴ�.");
}
}
