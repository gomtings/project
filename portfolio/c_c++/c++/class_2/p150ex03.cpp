#include<iostream>
#include<string> // c++ ���ڿ� ��ü�߰� !!!
/*
using namespace std; // ���� �����̽� 
class Account { // Account Ŭ���� 
	string name; // ���ڿ� ���� 
	int id, balance;//balance : �ܾ� 
public : // public ����������
	Account(string n, int i, int b) { // ������ 
		name = n;
		id = i;
		balance = b;
	}
	string getOwner(); // �Լ�����
	int withdraw(int a);// �Լ�����
	void deposit(int a);// �Լ�����
	int  inquiry();// �Լ�����
};
string Account::getOwner() { // ���� �� ���� �̸� 
	return name;
}
int Account::withdraw(int a) {  // ��� �Լ� ����
	return (balance -= a);
}
void Account::deposit(int a) { // ���� �Լ� ����
	balance += a;
}
int Account::inquiry() { // �ܾ� ��ȯ �Լ�
	return balance;
}
int main(){
	Account a("kitae" ,1,5000); // ��ü ����
	a.deposit(50000); // a ��ü�� deposit �Լ� ȣ��  (���� )
	cout << a.getOwner() << "�� �ܾ���" << a.inquiry() << endl;
	int money = a.withdraw(20000); // a ��ü�� withdraw �Լ� ȣ�� (���)
	cout << a.getOwner() << "�� �ܾ���" << a.inquiry() << endl;
	char c = getchar();
	return 0;
}*/