#include <iostream>
#include <string>
#include <cctype>
#include <iomanip>
#include <string>
#include <ostream>
using namespace std;
class Coffee {
	int Cfe = 0;
public:
	Coffee(int a=10) {
		this->Cfe = a;
	}
	void setcfe(int a = 10) {
		Cfe = a;
	}
	int getcfe() {
		return Cfe;
	}
	void cfe__() { Cfe--; }
};
class Suger {
	int Sgr = 0;
public:
	Suger(int a = 10) {
		this->Sgr = a;
	}
	void setSgr(int a = 10) {
		Sgr = a;
	}
	int getSgr() {
		return Sgr;
	}
	void Sgr__() { Sgr--; }
};
class Cream {
	int Crm = 0;
public:
	Cream(int a = 10) {
		this->Crm = a;
	}
	void setCrm(int a = 10) {
		Crm = a;
	}
	int getCrm() {
		return Crm;
	}
	void Crm__() { Crm--; }
};
class Water {
	int Wtr = 0;
public:
	Water(int a = 10) {
		this->Wtr = a;
	}
	void setWtr(int a = 10) {
		Wtr = a;
	}
	int getWtr() {
		return Wtr;
	}
	void Wtr__() { Wtr--; }
};
class Cup {
	int Cp = 0;
public:
	Cup(int a = 10) {
		this->Cp = a;
	}
	void setCp(int a = 10) {
		Cp = a;
	}
	int getCp() {
		return Cp;
	}
	void Cp__() { Cp--; }
};
class vendingmachine :public Coffee,Suger, Cream, Water , Cup {
public:
	vendingmachine(int a = 10) :Coffee(), Suger(), Cream(), Water(), Cup() {}
	void menu() {
		cout << "Coffee :"<< getcfe() <<endl;
		cout << "Suger :" << getSgr() << endl;
		cout << "Cream :" << getCrm() << endl;
		cout << "Water :" << getWtr() << endl;
		cout << "Cup :" << getCp() << endl;
   }
	void set() {
		cout << "��� ���� ä��ϴ�." << endl;
		setcfe(); setSgr(); setCrm(); setWtr(); setCp();
	}
	void normalcoffee() {
		if (getcfe() > 0 && getSgr() > 0 && getCrm() > 0 && getWtr() > 0 && getCp() > 0) {
			cout << "���ִ� ����Ŀ�� ���Խ��ϴ�~~" << endl;
			cfe__(); Sgr__(); Crm__(); Wtr__(); Cp__();
		}
		else {
			cout << "��ᰡ �����մϴ�!!!!" << endl;
		}
	}
	void sugercoffee() {
		if (getcfe() > 0 && getSgr() > 0 && getWtr() > 0 && getCp() > 0) {
			cout << "���ִ� ����Ŀ�� ���Խ��ϴ�~~" << endl;
			cfe__(); Sgr__(); Wtr__(); Cp__();
		}
		else {
			cout << "��ᰡ �����մϴ�!!!!" << endl;
		}
	}
	void blackcoffee() {
		if (getcfe() > 0 && getWtr() > 0 && getCp() > 0) {
			cout << "���ִ� ��Ŀ�� ���Խ��ϴ�~~"<<endl;
			cfe__();Wtr__(); Cp__();
		}
		else {
			cout << "��ᰡ �����մϴ�!!!!" << endl;
		}
	}
};
int main() {
	vendingmachine vc;
	int me = 0;
	bool tf = true;
	cout << "-----��ǰ Ŀ�� ���Ǳ��մϴ�.-----\n" << endl;
	while (tf){
		vc.menu();
		cout << endl;
		cout << "����Ŀ��:0, ����Ŀ��:1, ��Ŀ��:2, ä���:3, ����:4 >>"; cin >> me;
		switch (me+1) {
		case 1:
			vc.normalcoffee();
			break;
		case 2:
			vc.sugercoffee();
			break;
		case 3:
			vc.blackcoffee();
			break;
		case 4:
			vc.set();
			
			break;
		case 5:
			cout << "�����մϴ�^^\n" << endl;
			tf = false;
			break;
		}
	}
	char c = getchar();
	c = getchar();
	return 0;
}