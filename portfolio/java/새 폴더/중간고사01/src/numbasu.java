import java.util.*;
public class numbasu {
	public static void main(String [] args){
		Scanner m=new Scanner(System.in);
		System.out.print("����� ��� �Է�");
		int num=m.nextInt();
		System.out.print("���� �Է� ");
		int n=m.nextInt();
		for(int z=1;z<=n;z++){
			 if(z%num==0){
				 System.out.println(z+"");
			 }
		}
	}
}
