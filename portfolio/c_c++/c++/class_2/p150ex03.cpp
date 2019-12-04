#include<iostream>
#include<string> // c++ 문자열 객체추가 !!!
/*
using namespace std; // 네임 스페이스 
class Account { // Account 클레스 
	string name; // 문자열 변수 
	int id, balance;//balance : 잔액 
public : // public 접근제어자
	Account(string n, int i, int b) { // 생성자 
		name = n;
		id = i;
		balance = b;
	}
	string getOwner(); // 함수원형
	int withdraw(int a);// 함수원형
	void deposit(int a);// 함수원형
	int  inquiry();// 함수원형
};
string Account::getOwner() { // 계좌 의 주인 이름 
	return name;
}
int Account::withdraw(int a) {  // 출금 함수 구현
	return (balance -= a);
}
void Account::deposit(int a) { // 저금 함수 구현
	balance += a;
}
int Account::inquiry() { // 잔액 반환 함수
	return balance;
}
int main(){
	Account a("kitae" ,1,5000); // 객체 생성
	a.deposit(50000); // a 객체의 deposit 함수 호출  (저금 )
	cout << a.getOwner() << "의 잔액은" << a.inquiry() << endl;
	int money = a.withdraw(20000); // a 객체의 withdraw 함수 호출 (출금)
	cout << a.getOwner() << "의 잔액은" << a.inquiry() << endl;
	char c = getchar();
	return 0;
}*/