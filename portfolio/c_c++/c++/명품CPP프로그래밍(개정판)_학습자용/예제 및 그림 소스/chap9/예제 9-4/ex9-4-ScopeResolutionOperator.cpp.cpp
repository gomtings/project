#include <iostream>
using namespace std;

class Shape {
public:
	virtual void draw() { 
		cout << "--Shape--"; 
	}
};

class Circle : public Shape {
public:
	int x;
	virtual void draw() { 
		Shape::draw(); // �⺻ Ŭ������ draw() ȣ��
		cout << "Circle" << endl;
	}
};

int main() {
	Circle circle;
	Shape * pShape = &circle;

	pShape->draw();  // ���� ���ε� �߻�. draw()�� virtual�̹Ƿ�
	pShape->Shape::draw(); // ���� ���ε� �߻�. �������������ڷ� ����
}