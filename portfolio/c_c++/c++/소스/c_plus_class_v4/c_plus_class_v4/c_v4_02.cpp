#include <iostream>
using namespace std;
/*
class Circle {
	int radius;
public:
	Circle();
	Circle(int r);
	~Circle();
	void setRadius(int r) { radius = r; }
	double getArea();
};
double Circle::getArea() {
	return 3.14*radius*radius;
}

Circle::Circle() {
	radius = 1;
	cout << "������ ���� radius = " << radius << endl;
}

Circle::Circle(int r) {
	radius = r;
	cout << "������ ���� radius = " << radius << endl;
}

Circle::~Circle() {
	radius = 1;
	cout << "�Ҹ��� ���� radius = " << radius << endl;
}

int main() {
	Circle *circleArray = new Circle[3]; 	// Circle ��ü �迭 ���� ����, default ������ ȣ��

	circleArray[0].setRadius(10); 								circleArray[1].setRadius(20);
	circleArray[2].setRadius(30);

	for (int i = 0; i<3; i++) // �迭�� �� ���� ��ü�� ��� ����
		cout << "Circle " << i << "�� ������ " << circleArray[i].getArea() << endl;

	Circle *p = circleArray;      // ������ p�� �迭�� �ּҰ� ����
	for (int i = 0; i<3; i++) { 	// ��ü �����ͷ� �迭 ���� 
		cout << "Circle " << i << "�� ������ " << p->getArea() << endl;
		p++;
	}
	delete[] circleArray;  //��ü �迭 ��ȯ
	char c = getchar();
	c = getchar();
}
*/