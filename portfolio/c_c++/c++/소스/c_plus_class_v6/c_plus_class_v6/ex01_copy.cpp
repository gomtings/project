#include <iostream>
using namespace std;

class Circle {
private:
	int radius;
public:
	//Circle(Circle& c); // ���� ������ ���� �Ϲ����� ������ 
	Circle() { radius = 1; }
	Circle(int radius) { this->radius = radius; }//_01
	double getArea() { return 3.14*radius*radius; }
};/*
Circle::Circle(Circle& c) { // ���� ������ ���� _02
	this->radius = c.radius;
	cout << "���� ������ ���� radius = " << radius << endl;
}*/
/*
int main() {
	Circle src(30); // src ��ü��  ���� ������ ȣ�� _01
    Circle dest(src); // dest ��ü�� ���� ������ ȣ�� _02

	cout << "������ ���� = " << src.getArea() << endl;
    cout << "�纻�� ���� = " << dest.getArea() << endl;
	char c = getchar();
}*/