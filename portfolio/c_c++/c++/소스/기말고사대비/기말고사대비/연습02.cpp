#include<iostream>
#include<string>
using namespace std;
/*
class printer {
	string model;//�𵨸�
	string manufacturer;//������
	int printedcount; // �μ�ż�
	int availabcount; //���� �ܷ�
public:
	printer() {
		this->model = "";
		this->manufacturer = "";
		this->printedcount = 0;
		this->availabcount = 5;
	}
	printer(string model, string manufacturer, int printedcount,int availabcount) {
		this->model = model;
		this->manufacturer = manufacturer;
		this->printedcount= printedcount;
		this->availabcount= availabcount;
	}
	void print(int pages) {
		availabcount=availabcount - pages;
	}
public:
	 string getmodel() { return model; }
	 string getmanufacturer() { return manufacturer; }
	 int getprintedcount() { return printedcount; }
	 int getavailabcount() { return availabcount; }
};
class inkjet :public printer {
	int availabinkjet;
public:
	//inkjet() { availabinkjet = 10; }
	inkjet(int availabinkjet=10, string model = "scx-6x45", string manufacturer = "�Ｚ����", int printedcount = 0, int availabcount = 5):printer(model, manufacturer, printedcount, availabcount){
		this->availabinkjet = availabinkjet;
	}
	int getavailabinkjet() { return availabinkjet; }
	void printinkjet(int pages) {
		if (getavailabinkjet() > pages) {
			if (getavailabcount() > pages) {
				availabinkjet=availabinkjet - pages;
				print(pages);
				cout << "����Ʈ�Ͽ����ϴ�." << endl;
			}
			else {
				cout << "������ �����Ͽ� ����Ʈ �Ҽ� �����ϴ�." << endl;
			}
		}else {
			cout << "��ũ�� �����Ͽ� ����Ʈ �Ҽ� �����ϴ�." << endl;
		}
	}
	void show() {
		cout << "��ũ�� : " << getmodel() << " , " << getmanufacturer() << " , �������� : " << getavailabcount() << "�� , ������ũ : " << getavailabinkjet() << endl;
	}
};
class laser :public printer {
	int availabletoner;
public:
	//laser() { availabletoner = 30; }
	laser(int availabletoner=30, string model="officejet v40", string manufacturer="HP", int printedcount=0, int availabcount=5) :printer(model, manufacturer, printedcount, availabcount) {
		this->availabletoner = availabletoner;
	}
	int getavailabletoner() { return availabletoner; }
	void printlaser(int pages) {
		if (getavailabletoner() > pages) {
			if (getavailabcount() > pages) {
				availabletoner - pages;
				print(pages);
				cout << "����Ʈ�Ͽ����ϴ�." << endl;
			}else {
			cout << "������ �����Ͽ� ����Ʈ �Ҽ� �����ϴ�." << endl;
			}
		}else {
			cout << "��ʰ� �����Ͽ� ����Ʈ �Ҽ� �����ϴ�." << endl;
		}
	}
	void show() {
		cout <<"������ : "<< getmodel() << " , " << getmanufacturer() << " , �������� : " << getavailabcount() << "�� , ������� : " << getavailabletoner() << endl;
	}
};
int main() {
	int pt, ct; char c;
	cout << "���� �۵����� 2���� �����ʹ� �Ʒ��� ����." << endl;
	inkjet ij;
	laser lr;
	while (true) {
	ij.show();
	lr.show();
	cout << "������(1:��ũ��, 2:������)�� �ż� �Է� >>" ;
	cin >> pt >> ct;
	if (pt == 1) {
		ij.printinkjet(ct);
	}
	else if(pt == 2){
		lr.printlaser(ct);
	}
	cout << "��� ����Ʈ �Ͻðڽ��ϱ�?(y/n)>>";
		cin >> c;
		if (c == 'y')
			break;
	 }
	c = getchar();
	c = getchar();
	return 0;
}*/