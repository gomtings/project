package tri;
public class BankAccountTest {
	public static void main(String[] args){
		BankAccount bk = new BankAccount();
		System.out.println("���� "+bk.deposit(100)+"�ܰ� ="+bk.getbalance());
		System.out.println("���� "+bk.deposit(500)+"�ܰ� ="+bk.getbalance());
		System.out.println("���"+bk.withdraw(800)+",");
		System.out.println("�ܾ�"+bk.getbalance());
	}

}
