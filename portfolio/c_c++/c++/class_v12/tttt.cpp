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
	n.setNation("�ѱ�", "����");
	v.push_back(n);
	n.setNation("�߱�", "����¡");
	v.push_back(n);
	n.setNation("�Ϻ�", "����");
	v.push_back(n);
	n.setNation("��Ʈ��", "�ϳ���");
	v.push_back(n);
	n.setNation("�ε�", "������");
	v.push_back(n);
	n.setNation("�ʸ���", "���Ҷ�");
	v.push_back(n);
	n.setNation("Ÿ��", "����");
	v.push_back(n);
	n.setNation("�����", "����");
	v.push_back(n);
	n.setNation("�̱�", "�ͽ���");
	v.push_back(n);

	srand((unsigned)time(0));
	int sel;
	bool exit = true;
	string na, ca;
	int num = v.size() + 1;
	int choice = 0;
	int random;

	cout << "***** ������ ���� ���߱� ������ �����մϴ�. *****" << endl;

	while (exit) {
		cout << "���� �Է�: 1, ����: 2, ����: 3 >> ";
		cin >> sel;

		switch (sel) {
		case 1:
			cout << "���� " << v.size() << "���� ���� �ԷµǾ� �ֽ��ϴ�." << endl;
			cout << "����� ������ �Է��ϼ���(no no �̸� �Է³�)" << endl;
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
				cout << v[random].getNation() << "�� ������?";
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