import java.util.Scanner;
public class bigsmoll {
	public static void main(String[] args){
		Scanner v = new Scanner(System.in);
		char a;
		int b=0;
		int c=0;
		int d=0;
		while(d<10){
			d++;
		System.out.println("�����Է�");
		a=v.next().charAt(0);
		if(a>='a'&&a<='z'){
			b++;
		}
		else if(a>='A'&&a<='Z'){
			c++;
		}
	}
		System.out.println("�빮���� ������"+ b +"�ҹ����� ������:"+c);
	}
}
