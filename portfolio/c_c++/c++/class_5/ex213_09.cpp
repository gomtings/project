#include<iostream>
#include<string>
#include<cstring>
using namespace std;
/*
class person {
	string name;
	string tel;
public:
	person();
	string getname() { return name; }
	string gettel() { return tel; }
	void set(string name, string tel);
};
person::person() {
	name = "Noname";
	tel = "000-0000-0000";
}
void person::set(string name, string tel) {
	this->name = name;
	this->tel = tel;
}
int main() {
	string n, t;
	person p[3];
	int index = -1;
	for (int i = 0; i < 3; i++) {
		cout <<"��� " << (i + 1)<<">> " ;
		cin >> n >> t;
		p[i].set(n, t);
	}
	cout << "��� ����� �̸��� ";
	for (int i = 0; i < 3; i++) {
		cout << p[i].getname()<<" \t";
	}
	while (1) {
		cout << "\n��ȭ��ȣ �˻����մϴ�. �̸��� �Է��ϼ���. >> ";
		cin >> n;
		for (int i = 0; i < 3; i++) {
			if (n == p[i].getname() )
				index = i;
		}
		if (index > -1) {
			cout << "\n��ȭ ��ȣ�� "<<p[index].gettel();
			break;
		}
		else {
			cout << "\n���� �̸� �Դϴ�. �ٽ� �Է� �ϼ���.";
			continue;
		}
			
	}
	char che = getchar();
	che = getchar();
}*/