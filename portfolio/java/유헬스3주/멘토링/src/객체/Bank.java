package ��ü;
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
		bank.name="�̻��";
		bank.setTex();
		bank.setReal_pay();
		System.out.println("�̸�:"+bank.name);
		System.out.println("�i��:"+bank.pay);
		System.out.println("����:"+bank.tex);
		System.out.println("������ ������ ������ ���޵� ����:"+bank.real_pay);
	}
}
