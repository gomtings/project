import java.util.Scanner;
public class iftest {
public static void main(String[] args){
	int g;
	int b = 1;
	int m;
	int c;
	int n;
	int z;
	int y;
	int o;
	int v = 2;
	int last;
	Scanner put =new Scanner(System.in);
	System.out.println("1~12 ������ ����");
	m = put.nextInt();
	System.out.println("1~6 ���� ������ �Է� �ϼ���");
	g =put.nextInt();
	System.out.println("������");
	z =put.nextInt();
	n =put.nextInt();
	if( g == 1)
	{
	  switch(m)
	  {
	   case 4:
	   case 6:
	   case 9:
	   case 11:
	    last = 30;
	    break;
	   case 2:
	    last = 28;
	    break;
	   default: // �⺻��
	    last = 31;
	    break;
	  }
	  
	  System.out.println(g + "���� ������ ���� "+last);
	
	}
	else if(g == 2){
	for(;m<=9;b++ ){
		System.out.println(m + "*" + b + "=" + m*b);
	}
	}
	else if(g == 3){
	while( m<=19){
		System.out.println(m + "*"+ b +"="+m*b);
		b++;
	}
	}
	else if(g == 4){
		
		int i =1 ;
		while(i<=9){
			int a=1;
			while(a<=9){
				int f= i*a;
				System.out.print(i+"*"+ a +"="+f);
				//if(a % 1 == 0)
					//System.out.println();
				a++;
			}
			System.out.println();
			i++;
			
			}
	}
	
	else if(g == 5){
		System.out.println(z>>2); //z ���� 2��ŭ ���������� �̵��Ѵ�
		System.out.println(z<<2);//z ���� 2��ŭ �������� �̵��Ѵ�
		System.out.println(z>>>2);
		System.out.println("������� AND , OR , XOR �����Դϴ�.");
		System.out.println( z == 0 && n == 0 );// AND, ���� ���� true �϶��� true
		System.out.println(z == 0 || n == 0);//OR, ���� �Ѵ� false�϶�
		System.out.println(z == 0 ^ n == 0);// XOR ,���� ���� ������  false
	}
	else if(g == 6){
		do{
			
			System.out.println("������ �����ϵ��� ������ �Է� �� �ּ���.����:10<o<100");
			o = put.nextInt();
			
		}
		while( o <100 );
		
		System.out.println("�Է��Ͻ� ����:"+o);
	}
}
}