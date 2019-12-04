package jav2;
class t07 {
	
	int telnum;
	String power="";
	static int cellphone;
	
	t07 (int telnum) {
		this.telnum=telnum;
		this.power="on";
		cellphone++;
	}
	public void getTotal() {
		if(power.equals("off")) {
			power="on";
			System.out.println("전원을 켯습니다.");
		}
		else {
			power = "off";
			System.out.println("전원을 종료합니다.");
		}
	}
	public String toString() {
		String rst;
		rst="전화번호 : "+telnum+"상태 :"+power;
		return rst;
	}

}

