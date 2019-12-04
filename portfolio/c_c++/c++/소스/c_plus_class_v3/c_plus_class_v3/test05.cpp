#include <iostream>
using namespace std;
/*
class Circle {
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int r) { radius = r; }
	void setRadius(int r) { radius = r; }
	double getArea();
};
double Circle::getArea() {
	return 3.14*radius*radius;
}
int main() {
	Circle circleArray[3]; 		// (1) Circle 객체 배열 생성
	int radius;

	for (int i = 0; i < 3; i++) {
		cout << "반지름을 입력하세요 : ";
		cin >> radius;
		circleArray[i] = Circle(radius);
	}

	for (int i = 0; i<3; i++) // 배열의 각 원소 객체의 멤버 접근
		cout << "Circle " << i << "의 면적은 " << circleArray[i].getArea() << endl;

	Circle *p;
	p = circleArray; 										for (int i = 0; i<3; i++) {
		cout << "Circle " << i << "의 면적은 " << p->getArea() << endl;
		p++;
	}
	char ch = getchar();
	ch = getchar();
	return 0;
}
*/