package 객체;
import java.util.*;
class mBank{
	public int pay;
	public int real_pay;
	public double tex;
	public String name;
	public void setReal_pay(){
		this.real_pay=(int)(pay-tex);
	}
	public void setTex(){
	 this.tex=pay*0.047;
	}
}
public class Bank {
	public static void main(String [] args){
		Scanner key = new Scanner(System.in);
		mBank bank = new mBank();
		bank.pay=10000000;
		bank.name="이상우";
		bank.setTex();
		bank.setReal_pay();
		System.out.println("이름:"+bank.name);
		System.out.println("웙급:"+bank.pay);
		System.out.println("세금:"+bank.tex);
		System.out.println("세금을 제외한 실제로 지급될 월급:"+bank.real_pay);
	}
}
