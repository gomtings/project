import java.util.Scanner;
public class noname2 {
	public static void main(String[] args){
		int d;
		int e=0;
		int f=0;
		Scanner cc =new Scanner(System.in);
		System.out.print("����� ���� ���̴�?");
		d = cc.nextInt();
		System.out.println("���̴�:"+ d);
		for(int a=0; a<=d; a++){ // a�� �Է°� d ���� �۰ų� ���� ��; 
			for(e=d-a; e>0; e--){ //�Է°� d ���� a���� ����. ���� e���� --����
				System.out.print("*");
				
			}
			System.out.println("");
		}
	       for(int v = 0; v < d; v++) { // v���� �Է°�d ���� ���������� �����ش�.
	            for (int j = 0; j <= v; j++) {//j ���� v������ �۰ų� ���������� �����ش�.
	                System.out.print("*");
	            }
	            System.out.println("");

		}
		
	}

}

