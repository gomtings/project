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
	System.out.println("1~12 사이의 정수");
	m = put.nextInt();
	System.out.println("1~6 사이 정수를 입력 하세요");
	g =put.nextInt();
	System.out.println("논리연산");
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
	   default: // 기본값
	    last = 31;
	    break;
	  }
	  
	  System.out.println(g + "월의 마지막 날은 "+last);
	
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
		System.out.println(z>>2); //z 값을 2만큼 오른쪽으로 이동한다
		System.out.println(z<<2);//z 값을 2만큼 왼쪽으로 이동한다
		System.out.println(z>>>2);
		System.out.println("순서대로 AND , OR , XOR 연산입니다.");
		System.out.println( z == 0 && n == 0 );// AND, 양쪽 값이 true 일때만 true
		System.out.println(z == 0 || n == 0);//OR, 양쪽 둘다 false일때
		System.out.println(z == 0 ^ n == 0);// XOR ,양쪽 값이 같으면  false
	}
	else if(g == 6){
		do{
			
			System.out.println("조건을 만족하도록 정수를 입력 해 주세요.조견:10<o<100");
			o = put.nextInt();
			
		}
		while( o <100 );
		
		System.out.println("입력하신 값은:"+o);
	}
}
}