#include <iostream>
using namespace std;

class  A {
public:
	A() { cout << "������ A" << endl; }
	A(int x) {
		cout << "�Ű����������� A" << x << endl; 
	}
};

class  B : public A {
public:
	B() { // A() ȣ���ϵ��� �����ϵ�
		cout << "������ B" << endl;
	}
	B(int x) { // A() ȣ���ϵ��� �����ϵ�
		cout << "�Ű����������� B" << x << endl;
	}
};

int main() {
	B b(5);
}