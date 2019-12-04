import java.util.Scanner;
public class noname2 {
	public static void main(String[] args){
		int d;
		int e=0;
		int f=0;
		Scanner cc =new Scanner(System.in);
		System.out.print("출력할 별의 높이는?");
		d = cc.nextInt();
		System.out.println("높이는:"+ d);
		for(int a=0; a<=d; a++){ // a가 입력값 d 보다 작거나 같을 때; 
			for(e=d-a; e>0; e--){ //입력값 d 에서 a값을 뺀다. 그후 e값을 --감산
				System.out.print("*");
				
			}
			System.out.println("");
		}
	       for(int v = 0; v < d; v++) { // v값을 입력값d 보다 작을때까지 더해준다.
	            for (int j = 0; j <= v; j++) {//j 값이 v값보다 작거나 같은때까지 더해준다.
	                System.out.print("*");
	            }
	            System.out.println("");

		}
		
	}

}

