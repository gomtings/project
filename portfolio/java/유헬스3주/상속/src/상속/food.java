package 상속;
public class food {
	private int cal=0;
	private int cost=0;
	private int kg=0;
	
	food(){this(0,0,0);}
	food(int cal){
		this(cal,0 ,0 );
	}
	food(int cal,int kg){
		this(cal,0 ,kg);
	}
	food(int cal,int cost,int kg){
		this.cal=cal;
		this.cost=cost;
		this.kg=kg;
		
	}

	public int getcal() {
		return cal;
	}

	public void setcal(int cal) {
		this.cal = cal;
	}

	public int getcost() {
		return cost;
	}

	public void setcost(int cost) {
		this.cost = cost;
	}

	public int getkg() {
		return kg;
	}

	public void setkg(int kg) {
		this.kg = kg;
	}

}
class melon extends food {
	private String info;
	
	melon(int kg ,int cost,int cal,String info){
		super(kg,cost,cal);
		this.info=info;
	}

	public String getinfo() {
		return info;
	}
	public void setinfo(String info) {
		this.info = info;
	}
	
	public String toString(){
		String str;
		String str2;
		String str3;
		str ="칼로리:"+super.getcal(); //"가격"+super.getcost();"무게"+super.getkg();
        str2="가격"+super.getcost();
        str3="무게"+super.getkg();
		return str+" "+str2+"kg "+str3+" "+"정보:"+getinfo();
	}
}
