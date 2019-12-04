#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;
/*
class Nation {
	string nation;
	string capital;
public:
	Nation() { ; }
	void setNation(string na, string ca) {
		nation = na;
		capital = ca;
	}
	string getNation() { return nation; }
	string getCapital() { return capital; }
};


int main() {

	vector<Nation> v;
	Nation n;
	n.setNation("한국", "서울");
	v.push_back(n);
	n.setNation("중국", "베이징");
	v.push_back(n);
	n.setNation("일본", "도쿄");
	v.push_back(n);
	n.setNation("베트남", "하노이");
	v.push_back(n);
	n.setNation("인도", "뉴델리");
	v.push_back(n);
	n.setNation("필리핀", "마닐라");
	v.push_back(n);
	n.setNation("타이", "방콕");
	v.push_back(n);
	n.setNation("몰디브", "몰레");
	v.push_back(n);
	n.setNation("미국", "와싱턴");
	v.push_back(n);

	srand((unsigned)time(0));
	int sel;
	bool exit = true;
	string na, ca;
	int num = v.size() + 1;
	int choice = 0;
	int random;

	cout << "***** 나라의 수도 맞추기 게임을 시작합니다. *****" << endl;

	while (exit) {
		cout << "정보 입력: 1, 퀴즈: 2, 종료: 3 >> ";
		cin >> sel;

		switch (sel) {
		case 1:
			cout << "현재 " << v.size() << "개의 나라가 입력되어 있습니다." << endl;
			cout << "나라와 수도를 입력하세요(no no 이면 입력끝)" << endl;
			while (1) {
				cout << num << ">>";
				cin >> na >> ca;

				for (int i = 0; i < num - 1; i++) {
					if (v[i].getNation() == na) {
						cout << "already exists !!" << endl;
						choice = 1;
						break;
					}
				}
				if (na == "no" && ca == "no") break;
				else if (choice == 0) {
					n.setNation(na, ca);
					v.push_back(n);
					num++;
				}
				choice = 0;
			}
			break;
		case 2:
			while (1) {
				random = rand() % v.size();
				cout << v[random].getNation() << "의 수도는?";
				cin >> ca;
				if (ca == "exit") break;
				if (v[random].getCapital() == ca)
					cout << "Correct !!" << endl;
				else
					cout << "NO !!" << endl;
			}
			break;
		case 3:
			exit = false;
			break;
		}
	}
}*/