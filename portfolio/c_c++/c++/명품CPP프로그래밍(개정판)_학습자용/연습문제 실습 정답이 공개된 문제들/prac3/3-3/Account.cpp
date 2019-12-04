#include <iostream>
#include <string>
using namespace std;

class Account {
	string name;
	int id;
	int balance;
public:
	Account(string n, int i, int bal);
	void deposit(int money);
	int withdraw(int money);
	int inquiry();
	string getOwner() { return name; }
};

Account::Account(string n, int i, int bal) {
	name = n;
	id = i;
	balance = bal;
}

void Account::deposit(int money) {
	balance += money;
}

int Account::withdraw(int money) {
	if (money > balance) { // ����� ���� ã�� �ݾ׺��� ���� ���
		money = balance;
		balance = 0;
	}
	else
		balance -= money;

	return money; // ���� ã�� �ݾ� ����
}

int Account::inquiry() {
	return balance;
}

int main() {
	Account a("kitae", 1, 5000); 	// id 1��, �ܾ� 5000��, �̸��� kitae�� ���� ����
	a.deposit(50000);				// 20000�� ����
	cout << a.getOwner() << "�� �ܾ��� " << a.inquiry() << endl;
	int money = a.withdraw(20000);	// 20000�� ���. withdraw()�� ����� ���� �ݾ� ����
	cout << a.getOwner() << "�� �ܾ��� " << a.inquiry() << endl;
}