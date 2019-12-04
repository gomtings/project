#include <iostream>
#include <string>

using namespace std;

class printer { //	printer 클래스 
protected:
	string model; // 모델명
	string manufacturer; // 제조사
	int printedCount; // 인쇄 매수
	int availableCount; // 인쇄 종이 잔량
public:
	// print 함수와 show 함수를 가상 함수로 구현
	printer(string m, string ma, int avail) { model = m; manufacturer = ma; availableCount = avail; }
	virtual void print(int pages) = 0; // print 순수 가상 함수, page만큼 프린트
	virtual void show() = 0;// show 순수 가상 함수, 현재 모델, 제조사, 인쇄 매수, 인쇄 종이 잔량 등을 출력
	int getAvail() { return availableCount; }
};
class InkJetPrinter : public printer {
	int availableInk; // 추가적 잉크 잔량 정보
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
		cout << model << " ," << manufacturer << " ,남은 종이 " << availableCount << "장 ,남은 잉크 " << availableInk << endl;
	}
};
class LaserPrinter : public printer {
	int availableToner; // 추가적 토너 잔량 정보
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
		cout << model << " ," << manufacturer << " ,남은 종이 " << availableCount << "장 ,남은토너 " << availableToner << endl;
	}
};
/*
int main() {
	InkJetPrinter* Ink = new InkJetPrinter("Officejet V40", "HP", 5, 10);
	LaserPrinter* Laser = new LaserPrinter("SCX-6x45", "삼성전자", 3, 20);
	int a, b;
	string exit;

	cout << "현재 작동중인 2 대의 프린터는 아래와 같다" << endl;
	cout << "잉크젯 : "; Ink->show();
	cout << "레이저 : "; Laser->show();

	while (1) {
		cout << endl << "프린터(1:잉크젯, 2:레이저)와 매수 입력>>";
		cin >> a >> b;
		if (a == 1) {
			if (b > Ink->getAvail()) {
				cout << "용지가 부족하여 프린트할 수 없습니다." << endl;
				Ink->show();
				Laser->show();
			}
			else {
				cout << "프린트하였습니다." << endl;
				Ink->print(b);
				Ink->show();
				Laser->show();
			}
		}
		else if (a == 2) {
			if (b > Laser->getAvail()) {
				cout << "용지가 부족하여 프린트할 수 없습니다." << endl;
				Ink->show();
				Laser->show();
			}
			else {
				cout << "프린트하였습니다." << endl;
				Laser->print(b);
				Ink->show();
				Laser->show();
			}
		}
		cout << "계속 프린트 하시겠습니까(y/n)>>";
		cin >> exit;
		if (exit == "n") break;

		char ch;
		ch = getchar();
		ch = getchar();
	}
}
*/