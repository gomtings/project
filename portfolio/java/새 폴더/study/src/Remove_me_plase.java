import java.util.Scanner;
public class Remove_me_plase {
	public static void main(String[] args) {
		Scanner in=new Scanner(System.in);
		String[] id={"kim", "lee", "choi", "oh", "park"};
		String Q="quit";
		int[] money=new int[5];
		for(int j=0; j<money.length; j++){
			money[j]=(int)(Math.random()*50001);
		}
		
		Outter:
		while(true){
			System.out.println("ID�Է� (quit�� ����)");
			String idi=in.nextLine();
			boolean b=false;
			int i=-1;
			
			if(idi.equals(Q)==true){
				break Outter;
			}
			
			for(i=0; i<id.length; i++){
				idi.equals(id[i]);
				if(idi.equals(id[i])==true){
				b=idi.equals(id[i]);
				break;
				}
			}
			if (b==true){
				System.out.println(idi+"����"+money[i] +"���Դϴ�.");
			}
			else{
				System.out.println("�߸��Է��ϼ̽��ϴ�.");
			}
		}
	}
}