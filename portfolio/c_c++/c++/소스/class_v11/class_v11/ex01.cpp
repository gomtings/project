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
	na.insert("�ѱ�", "����");
	v.push_back(na);
	na.insert("�̱�", "������");
	v.push_back(na);
	na.insert("������", "���帮��");
	v.push_back(na);
	na.insert("�Ϻ�", "����");
	v.push_back(na);
	na.insert("�߱�", "����¡");
	v.push_back(na);
	int menu,size=v.size()+1;
	srand((unsigned)time(0));
	cout << "*****������ ���� ���߱� ������ �����մϴ�." << endl;
	while (tf) {
		cout << "���� �Է�: 1,���� 2, ���� 3	>>";
		cin >> menu;
		switch (menu) {
		case 1:
			cout << "���� " << size << "�� �� ���� �ԷµǾ� �ֽ��ϴ�." << endl;
			cout << "������ ������ �Է��ϼ���. (no  no �̸� �Է� ��!)" << endl;
			cout << size << " >> ";
			cin >> nation >> capital;
			for (int i = 0; i < v.size(); i++) {
				if (v[i].getna() == nation && v[i].getcp() == capital) {
					cout << "�̹� ���� �ϴ� ���� �Դϴ�." << endl;
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
				cout << v[set].getna() << " �� ������ ?? >> " ;
				cin >> capital;
				if (capital == "exit") {
					cout << "���� ���� :" << ok << "�� , ���� :" << no << " �� �Դϴ�" << endl;
					break;
				}
				if (v[set].getcp() == capital) {
					cout << "���� �Դϴ�!!"<<endl; ok++;
				}
				else {
					cout << "���� �Դϴ� �Ф�"<< endl; no++;
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