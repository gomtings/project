import java.util.Scanner; 
public class t4 {
	public static void main(String[] args){
		int olange;	
		int na;
		int na2;
		Scanner t4 = new Scanner(System.in); 
		System.out.print("오렌지의 개수를 입렧해 주세요."); 
		olange = t4.nextInt(); 
		 na = olange/10;
		 na2 = olange%10;
		 System.out.print(na + "박스가 필요하고" + na2 + "개가 남습니다."); 
		 
	}
}
