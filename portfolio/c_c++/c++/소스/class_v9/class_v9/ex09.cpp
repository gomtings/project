#include <iostream>
#include <string>

using namespace std;

class printer { //	printer Ŭ���� 
protected:
	string model; // �𵨸�
	string manufacturer; // ������
	int printedCount; // �μ� �ż�
	int availableCount; // �μ� ���� �ܷ�
public:
	// print �Լ��� show �Լ��� ���� �Լ��� ����
	printer(string m, string ma, int avail) { model = m; manufacturer = ma; availableCount = avail; }
	virtual void print(int pages) = 0; // print ���� ���� �Լ�, page��ŭ ����Ʈ
	virtual void show() = 0;// show ���� ���� �Լ�, ���� ��, ������, �μ� �ż�, �μ� ���� �ܷ� ���� ���
	int getAvail() { return availableCount; }
};
class InkJetPrinter : public printer {
	int availableInk; // �߰��� ��ũ �ܷ� ����
public:
	InkJetPrinter(string m, string ma, int avail, int availInk) : printer(m, ma, avail) {
		availableInk = availInk;
	}
	void print(int pages) {
		printedCount = pages;
		availableCount -= printedCount;
		availableInk -= printedCount;
	}
	void show() {
		cout << model << " ," << manufacturer << " ,���� ���� " << availableCount << "�� ,���� ��ũ " << availableInk << endl;
	}
};
class LaserPrinter : public printer {
	int availableToner; // �߰��� ��� �ܷ� ����
public:
	LaserPrinter(string m, string ma, int avail, int availToner) : printer(m, ma, avail) {
		availableToner = availToner;
	}
	void print(int pages) {
		printedCount = pages;
		availableCount -= printedCount;
		availableToner -= printedCount;
	}
	void show() {
		cout << model << " ," << manufacturer << " ,���� ���� " << availableCount << "�� ,������� " << availableToner << endl;
	}
};
/*
int main() {
	InkJetPrinter* Ink = new InkJetPrinter("Officejet V40", "HP", 5, 10);
	LaserPrinter* Laser = new LaserPrinter("SCX-6x45", "�Ｚ����", 3, 20);
	int a, b;
	string exit;

	cout << "���� �۵����� 2 ���� �����ʹ� �Ʒ��� ����" << endl;
	cout << "��ũ�� : "; Ink->show();
	cout << "������ : "; Laser->show();

	while (1) {
		cout << endl << "������(1:��ũ��, 2:������)�� �ż� �Է�>>";
		cin >> a >> b;
		if (a == 1) {
			if (b > Ink->getAvail()) {
				cout << "������ �����Ͽ� ����Ʈ�� �� �����ϴ�." << endl;
				Ink->show();
				Laser->show();
			}
			else {
				cout << "����Ʈ�Ͽ����ϴ�." << endl;
				Ink->print(b);
				Ink->show();
				Laser->show();
			}
		}
		else if (a == 2) {
			if (b > Laser->getAvail()) {
				cout << "������ �����Ͽ� ����Ʈ�� �� �����ϴ�." << endl;
				Ink->show();
				Laser->show();
			}
			else {
				cout << "����Ʈ�Ͽ����ϴ�." << endl;
				Laser->print(b);
				Ink->show();
				Laser->show();
			}
		}
		cout << "��� ����Ʈ �Ͻðڽ��ϱ�(y/n)>>";
		cin >> exit;
		if (exit == "n") break;

		char ch;
		ch = getchar();
		ch = getchar();
	}
}
*/