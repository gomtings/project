import java.util.Scanner;

public class week08 {
	public static void main(String[] args) {
		Scanner key = new Scanner(System.in);
		System.out.print("���� �Է�");
		int s = key.nextInt();
		int a;
		System.out.print("�Ҽ�");
		for(a=2;a<s;a++){
			int z=0;
			for(int b=2;b<a;b++){
				if(a%b==0){
					z++;
				}
				continue;
			}
			if(z ==0){
				System.out.print(a+",");
			}
		}
	}
}
