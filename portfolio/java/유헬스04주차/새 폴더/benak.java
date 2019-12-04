package t04;
class bank {
String account;//°èÁÂ
int momey;//µ·
double rate=5.0; //ÀÌÀÚÀ²
static int account_count=0;
bank(){ this("",0,5.0); }
bank(String account,int momey,double rate){
	this.account=account;
	this.momey=momey;
	this.rate=rate;
}

public void setaccount(String account){
	this.account=account;
	account_count++;
}
public String getaccount(){
	return account;
}
public void setmomey(int momey){
	this.momey+=momey;
}
public int getmomey(){
	return momey;
}
public double getrate(){
	return rate;
}

public void outcon_money(consumer con){
	momey+=inmomey;
	System.out.println("°í°´ÀÇ ÀÜ¾×Àº: "+(con_momey-inmomey)+"ÀÔ´Ï´Ù.");
	}
	public void outrate(){
	con_momey+=momey*rate;
	System.out.println("°í°´ÀÇ ÀÜ¾×Àº: "+con_momey+"ÀÔ´Ï´Ù.");
	}
	
}
class consumer extends bank{
	String con_account;//°èÁÂ
	int con_momey;//µ·
	
	consumer(){ this("",0); }
	consumer(String con_account,int con_momey){
		this.con_account=con_account;
		this.con_momey=con_momey;
	}
	public void setcon_momey(int con_momey){
		this.con_momey=con_momey;
	}
	public int getcon_momey(){
		return con_momey;
	}
	public void incon_money(int inmomey){
	momey+=inmomey;
	System.out.println("°í°´ÀÇ ÀÜ¾×Àº: "+(con_momey-inmomey)+"ÀÔ´Ï´Ù.");
	}
	public void outrate(){
	con_momey+=momey*rate;
	System.out.println("°í°´ÀÇ ÀÜ¾×Àº: "+con_momey+"ÀÔ´Ï´Ù.");
	}
	
	
}