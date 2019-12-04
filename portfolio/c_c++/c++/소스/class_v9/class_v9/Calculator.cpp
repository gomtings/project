#include <iostream>
using namespace std;

class Calculator {  //�߻� Ŭ����
public:
	virtual int add(int a, int b) = 0; // �� ������ �� ����, ���� ���� �Լ�
	virtual int subtract(int a, int b) = 0; // �� ������ �� ����
	virtual double average(int a[], int size) = 0; // �迭 a�� ��� ����. size�� �迭�� ũ��
};

class GoodCalc : public Calculator {  //�߻� Ŭ���� ����
public:
	int add(int a, int b) { return a + b; }
	int subtract(int a, int b) { return a - b; }
	double average(int a[], int size) {
		double sum = 0;
		for (int i = 0; i < size; i++)
			sum += a[i];
		return sum / size;
	}
};
/*
int main() {
	int a[] = { 1,2,3,4,5 };
	Calculator *p = new GoodCalc();
	cout << p->add(2, 3) << endl;
	cout << p->subtract(2, 3) << endl;
	cout << p->average(a, 5) << endl;
	delete p;
	char ch = getchar();
}*/
