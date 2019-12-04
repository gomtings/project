import java.util.*;
class Client{
	private String name; //주문자 이름
	private int Coke; //콜라 구매 개수(처음에 0개부터 시작)
	private int Popcorn; //팝콘 구매 개수(처음에 0개부터 시작)
	private int price;	//수중 금액
	Client(){
		
	}
	String getname(){
		return name;
	}
}
class CGV{
	private Client[] c; //고객수 전체 
	private static int Co_ke = 20; // 현재 CGV에 남아있는 콜라 개수
	private static int Pop_corn = 20; // 현재 CGV에 남아있는 팝콘 개수
	public final int Coke_Price = 1000; // 콜라 가격
	public final int Popcorn_Price = 2000; // 팝콘가격
	CGV(Client[] c){
		this.c=c;
	}
	public int SearchPerson(String name){
		int dex = 0;
		for(int i=0;i<c.length;i++){
			if(name.equals(c[i].getname())){
				dex=i;
			}
			dex=-1;
		}
		return dex;
	}
	public boolean Empty(int num,int select){
		boolean a = false;
		switch(num){
		case 1:
			if(select >Co_ke){
				System.out.println("남은 수량보다 적게 선택해 주세요. 남은 콜라 수량은:"+Co_ke);
				a=false;
			}
			else{
				a=true;
			}
			break;
		case 2:
			if(select >Pop_corn){
				System.out.println("남은 수량보다 적게 선택해 주세요. 남은 팝콘 수량은:"+Pop_corn);
				a=false;
			}
			else{
				a=true;
			}
			break;
		}
		return a;
	}
	public void The_number(){
		System.out.print("남은 콜라의 개수"+Co_ke);
		System.out.print("남은 콜라의 개수"+Pop_corn);
		System.out.print("남은 콜라의 개수"+c);
	}
	public void info(int index){
		
	}
}
public class 모의11 {
	public static void main(String[] args) {
		Client c[] = new Client[3];
		Scanner scan = new Scanner(System.in);
		for (int i = 0; i < c.length; i++) {
			c[i] = new Client();
			System.out.println((i + 1) + "번째 고객이름");
			c[i].setName(scan.next());
			System.out.println("용돈");
			c[i].setPrice(scan.nextInt());

		}
		CGV CG_V = new CGV(c);
		while (true) {
			System.out.println("CGV에 오신걸 환영합니다.");
			System.out.println("저희는 팝콘,콜라만 판매하고 있습니다. 잘선택 해주시길 바랍니다.");
			System.out.println("회원 이름을 입력해 주세요");
			String n=scan.next();
			if(CG_V.SearchPerson(n)==-1){
				System.out.println("일치하는 이름이 없습니다 다시 입력해주세요.");
				continue;
			}
			int per = CG_V.SearchPerson(n);

			System.out.println("1.콜라사기,2.팝곤사기,3내 정보,4현재 콜라, 팝콘 개수 5,안사 ㅅㅂ");
			int select = scan.nextInt();
			if (select == 5) {
				System.out.println("저희도 그 쪽한테 팔 생각없엇어요 빠이루~!");
				break;
			}
			switch (select) {
			case 1:
				System.out.println("콜라 가격은 [ " + CG_V.Coke_Price + " ] 입니다.");
				System.out.println("현재 남아있는 콜라 개수는 [ " + CGV.getCo_ke() + " ] 입니다.");
				System.out.print("개수 입력 :");
				int num = scan.nextInt();
				CG_V.Sell(per, 1, num);
				break;
			case 2:
				System.out.println("팝콘 가격은 [ " + CG_V.Popcorn_Price + " ] 입니다.");
				System.out.println("현재 남아있는 팝콘 개수는 [ " + CGV.getPop_corn() + " ] 입니다.");
				System.out.print("개수 입력 :");
				int num2 = scan.nextInt();
				CG_V.Sell(per, 2, num2);
				break;
			case 3:
				CG_V.info(per);
				break;
			case 4:
				CG_V.The_number();
				break;}}}}
