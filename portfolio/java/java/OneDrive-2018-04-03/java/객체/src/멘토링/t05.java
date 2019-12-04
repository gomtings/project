import java.util.*;

class join {
	private String Account;//아이디
	private String Name;//이름
	private String Live;//주소 
	private String Password;//비밀번호
	private int Born_year;//생년월일  
	private static int count = 0;//회원수
	join(String Account , String Password ,String Name ,String Live ,int Born_year){
		this.Account=Account;
		this.Password=Password;
		this.Name=Name;
		this.Live=Live;
		this. Born_year= Born_year;
	}
}
class pcroom{
	private join[] MJ;
	private String Pcname = "Root";
	private String Pcpassword = "1234";
	private int time;	
	pcroom(join[] mj , int time){
		this.MJ=mj;
		this.time=time;
	}
	public boolean Login(String Account, String password){
		boolean x ,y;
		if(Account.equals(Account)&&password.equals(password)){
			x=true;
		}
		else{
			x=false;
		}
		
		return x;
	}
}

public class t05 {
	public static void main(String[] args) {
		join mj[] = new join[5];
		mj[0] = new join("Happy", "희수", "춘천", "hs12", 96);
		mj[1] = new join("Love", "고은", "월꼐", "ge12", 98);
		mj[2] = new join("Great", "세영", "구리", "sy12", 97);
		mj[3] = new join("Pretty", "지수", "서울", "js12", 97);
		mj[4] = new join("Handsome", "주상", "별내", "ljs12", 93);
		int time=(int)(Math.random()*23+1);
		pcroom pc = new pcroom(mj , time);
		Scanner scan = new Scanner(System.in);
		while (true) {
			System.out.println("Noname 피시방에 오신걸 환영합니다. 현재 시각은 "+time+ "시 입니다.");
			System.out.println("1.로그인");
			System.out.println("2.비밀번호 찾기");
			System.out.println("3.관리자 로그인");
			System.out.println("4.종료");
			int num = scan.nextInt();
			if (num == 4) {
				System.out.println("다음에 또 이용해주세요");
				break;
			}
			switch (num) {
			case 1:
				System.out.println("ID입력");
				String id = scan.next();
				System.out.println("Password 입력");
				String pw = scan.next();
				if (pc.Login(id, pw) == true) {
					System.exit(0);
				}
				break;

			case 2:
				System.out.println("ID입력");
				id = scan.next();
				System.out.println("이름 입력");
				String name = scan.next();
				pc.Pass(id, name);
				break;
			case 3:
				System.out.println("관리자ID입력");
				id = scan.next();
				System.out.println("Password 입력");
				pw = scan.next();
				if (pc.getPcname().equals(id)) {
					if (pc.getPcpassword().equals(pw))
						pc.PcM();
				}
				break;
			}

		}

	}
}
