#include <iostream>
#include <string>
using namespace std;

class LoopAdder { // �߻� Ŭ����
	string name; // ������ �̸�
	int x, y, sum; // x���� y������ ���� sum
	void read(); // x, y ���� �о� ���̴� �Լ�
	void write(); // sum�� ����ϴ� �Լ�
protected:
	LoopAdder(string name = "") { // ������ �̸��� �޴´�. �ʱⰪ�� ""
		this->name = name;
	}
	int getX() { return x; }
	int getY() { return y; }
	virtual int calculate() = 0; // ���� ���� �Լ�, ������ ���� ���� ���ϴ� �Լ�
public:
	void run();// ������ �����ϴ� �Լ�
};

void LoopAdder::read() {// x, y�Է�
	cout << name << ":" << endl;
	cout << "ó�� ������ �ι�° ������ ���մϴ�. �� ���� �Է��ϼ��� >> ";
	cin >> x >> y;
}
void LoopAdder::write() { // ��� sum ���
	cout << x << "���� " << y << "������ �� = " << sum << " �Դϴ�" << endl;
}
void LoopAdder::run() {
	read();// x, y�� �д´�.
	sum = calculate();// ������ ���鼭 ����Ѵ�.
	write();// ��� sum�� ����Ѵ�,
}

class WhileLoopAdder : public LoopAdder {
public:
	WhileLoopAdder(string name) : LoopAdder(name) { ; }
	int calculate() {
		int sum = 0;
		int x = getX();
		while (x <= getY()) {
			sum += x;
			x++;
		}
		return sum;
	}
};
class DoWhileLoopAdder : public LoopAdder {
public:
	DoWhileLoopAdder(string name) : LoopAdder(name) { ; }
	int calculate() {
		int sum = 0;
		int x = getX();
		do {
			sum += x;
			x++;
		} while (x <= getY());
		return sum;
	}
};

/*
int main() {
	WhileLoopAdder whileLoop("While Loop");
	DoWhileLoopAdder doWhileLoop("Do while Loop");

	whileLoop.run();
	doWhileLoop.run();

	char ch;
	ch = getchar();
	ch = getchar();
}*/
