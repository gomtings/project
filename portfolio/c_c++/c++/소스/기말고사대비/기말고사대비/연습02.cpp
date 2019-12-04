#include<iostream>
#include<string>
using namespace std;
/*
class printer {
	string model;//모델명
	string manufacturer;//제조사
	int printedcount; // 인쇄매수
	int availabcount; //종이 잔량
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
	inkjet(int availabinkjet=10, string model = "scx-6x45", string manufacturer = "삼성전자", int printedcount = 0, int availabcount = 5):printer(model, manufacturer, printedcount, availabcount){
		this->availabinkjet = availabinkjet;
	}
	int getavailabinkjet() { return availabinkjet; }
	void printinkjet(int pages) {
		if (getavailabinkjet() > pages) {
			if (getavailabcount() > pages) {
				availabinkjet=availabinkjet - pages;
				print(pages);
				cout << "프린트하였습니다." << endl;
			}
			else {
				cout << "용지가 부족하여 프린트 할수 없습니다." << endl;
			}
		}else {
			cout << "잉크가 부족하여 프린트 할수 없습니다." << endl;
		}
	}
	void show() {
		cout << "잉크젯 : " << getmodel() << " , " << getmanufacturer() << " , 남은종이 : " << getavailabcount() << "장 , 남은잉크 : " << getavailabinkjet() << endl;
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
				cout << "프린트하였습니다." << endl;
			}else {
			cout << "용지가 부족하여 프린트 할수 없습니다." << endl;
			}
		}else {
			cout << "토너가 부족하여 프린트 할수 없습니다." << endl;
		}
	}
	void show() {
		cout <<"레이저 : "<< getmodel() << " , " << getmanufacturer() << " , 남은종이 : " << getavailabcount() << "장 , 남은토너 : " << getavailabletoner() << endl;
	}
};
int main() {
	int pt, ct; char c;
	cout << "현재 작동중인 2대의 프린터는 아래와 같다." << endl;
	inkjet ij;
	laser lr;
	while (true) {
	ij.show();
	lr.show();
	cout << "프란터(1:잉크젯, 2:레이저)와 매수 입력 >>" ;
	cin >> pt >> ct;
	if (pt == 1) {
		ij.printinkjet(ct);
	}
	else if(pt == 2){
		lr.printlaser(ct);
	}
	cout << "계속 프린트 하시겠습니까?(y/n)>>";
		cin >> c;
		if (c == 'y')
			break;
	 }
	c = getchar();
	c = getchar();
	return 0;
}*/