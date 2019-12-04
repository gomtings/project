package tri;
public class BankAccount {
	private int balance;

	BankAccount() {
		this(0);
	}

	BankAccount(int balance) {
		this.balance = balance;
	}

	public int getbalance() {
		return balance;
	}

	public int deposit(int amount) {
		return balance += amount;
	}

	public int withdraw(int amount) {
		try {
			if (amount <= balance) {
				return balance -= amount;
			} else {
				throw new Negative();
			}
		}catch(Negative N) {
			System.out.print("잔고가 음수 입니다.");
			return balance;
		}
	}
}
