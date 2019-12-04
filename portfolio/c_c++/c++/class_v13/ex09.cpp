#include <iostream>
#include <string>
#include <cctype>
#include <iomanip>
#include <string>
#include <ostream>
using namespace std;
class Phone {
	string name, telnum, address;
public:
	Phone(string name="",string telnum="",string address="") {
		this->name = name;
		this->telnum = telnum;
		this->address = address;
	}
	friend istream& operator >> (istream &cin,Phone &p);
	friend ostream& operator << (ostream &cout, Phone &p);
};
istream& operator >> (istream &cin, Phone &p) {
	cout << "이름 :"; cin >> p.name;
	cout << "전화번호 :"; cin >> p.telnum;
	cout << "주소 :"; cin >> p.address;
	return cin;
}
ostream& operator << (ostream &cout, Phone &p) {
	cout << "(" << p.name << "," << p.telnum << "," << p.address << ")"<<endl;
	return cout;
}
/*
int main() {
	Phone a,b;
	cin >> a >> b;
	cout << a<<b;
	char c = getchar();
	c = getchar();
	return 0;
}*/