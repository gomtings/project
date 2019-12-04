#include <iostream>
using namespace std;

class Adder { // ���� ��� Ŭ����
	int op1, op2;
public:
	Adder(int a, int b);
	int process();
};

Adder::Adder(int a, int b) {
	op1 = a; op2 = b;
}

int Adder::process() {
	return op1 + op2;
}

class Calculator { // ���� Ŭ����
public:
	void run();
};

void Calculator::run() {
	cout << "�� ���� ���� �Է��ϼ���>>";
	int a, b;
	cin >> a >> b; // ���� �� �� �Է�
	Adder adder(a, b); // ������ ����
	cout << adder.process(); // ���� ���
}

int main() {
	Calculator calc; // calc ��ü ����
	calc.run(); // ���� ����
}