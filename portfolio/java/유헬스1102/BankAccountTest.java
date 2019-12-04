package tri;
public class BankAccountTest {
	public static void main(String[] args){
		BankAccount bk = new BankAccount();
		System.out.println("ÀúÃà "+bk.deposit(100)+"ÀÜ°í ="+bk.getbalance());
		System.out.println("ÀúÃà "+bk.deposit(500)+"ÀÜ°í ="+bk.getbalance());
		System.out.println("Ãâ±İ"+bk.withdraw(800)+",");
		System.out.println("ÀÜ¾×"+bk.getbalance());
	}

}
