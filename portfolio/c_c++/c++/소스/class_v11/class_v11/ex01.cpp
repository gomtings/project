#include <iostream>
#include <cstdlib>
#include <vector>
#include <String>
#include<ctime>
using namespace std;
class Nation {
	string nation, capital;
public :
	Nation() {};
	void insert(string na,string cp) {
		this->nation = na;
		this->capital = cp;
	}

	string getna(){ return nation; }
	string getcp() { return capital; }
};/*
int main() {
	bool tf = true;
	string nation, capital;
	Nation na;
	int ok = 0,no=0,set, choice = 0;;
	vector<Nation> v;
	na.insert("한국", "서울");
	v.push_back(na);
	na.insert("미국", "워싱턴");
	v.push_back(na);
	na.insert("스페인", "마드리드");
	v.push_back(na);
	na.insert("일본", "도쿄");
	v.push_back(na);
	na.insert("중국", "베이징");
	v.push_back(na);
	int menu,size=v.size()+1;
	srand((unsigned)time(0));
	cout << "*****나라의 수도 맞추기 게임을 시작합니다." << endl;
	while (tf) {
		cout << "정보 입력: 1,퀴즈 2, 종료 3	>>";
		cin >> menu;
		switch (menu) {
		case 1:
			cout << "현재 " << size << "개 의 나라가 입력되어 있습니다." << endl;
			cout << "나라의 수도를 입력하세요. (no  no 이면 입력 끝!)" << endl;
			cout << size << " >> ";
			cin >> nation >> capital;
			for (int i = 0; i < v.size(); i++) {
				if (v[i].getna() == nation && v[i].getcp() == capital) {
					cout << "이미 존재 하는 나라 입니다." << endl;
					choice = 1;
					break;
				}
				else if (nation == "no" && capital == "no") {
					break;
				}
				else if (choice == 0) {
					na.insert(nation, capital);
					v.push_back(na);
					size++;
					break;
				}choice = 0;
			}
			break;
		case 2:
			while (true) {
				set = rand() % v.size();
				cout << v[set].getna() << " 의 수도는 ?? >> " ;
				cin >> capital;
				if (capital == "exit") {
					cout << "정답 개수 :" << ok << "개 , 오답 :" << no << " 개 입니다" << endl;
					break;
				}
				if (v[set].getcp() == capital) {
					cout << "정답 입니다!!"<<endl; ok++;
				}
				else {
					cout << "오답 입니다 ㅠㅠ"<< endl; no++;
				}
			}
			break;
		case 3:
			tf = false;
			break;
		}
	}
	char cs = getchar();
}*/