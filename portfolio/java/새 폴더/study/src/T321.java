import java.util.Scanner;

public abstract class T321 {
	public static void main(String[] args){
		Scanner scan = new Scanner(System.in);
		int c;
		System.out.print("���� ����� ���ּ���.");
		c = scan.nextInt();
        if(c>1000)
        {
        System.out.println("������ �ʰ� �Ͽ����ϴ�.");
        c=scan.nextInt();
        }
        
        System.out.println("���� �Է°���" + c +"�Դϴ�.");
        System.out.println(c>>>2);
        System.out.println(c>>2);
        System.out.println(c<<2);
       
   
	}

}
