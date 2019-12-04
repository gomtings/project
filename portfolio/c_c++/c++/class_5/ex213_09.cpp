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
		cout <<"사람 " << (i + 1)<<">> " ;
		cin >> n >> t;
		p[i].set(n, t);
	}
	cout << "모든 사람의 이름은 ";
	for (int i = 0; i < 3; i++) {
		cout << p[i].getname()<<" \t";
	}
	while (1) {
		cout << "\n전화번호 검색을합니다. 이름을 입력하세요. >> ";
		cin >> n;
		for (int i = 0; i < 3; i++) {
			if (n == p[i].getname() )
				index = i;
		}
		if (index > -1) {
			cout << "\n전화 번호는 "<<p[index].gettel();
			break;
		}
		else {
			cout << "\n없는 이름 입니다. 다시 입력 하세요.";
			continue;
		}
			
	}
	char che = getchar();
	che = getchar();
}*/