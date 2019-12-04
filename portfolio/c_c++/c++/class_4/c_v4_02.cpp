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
	cout << "생성자 실행 radius = " << radius << endl;
}

Circle::Circle(int r) {
	radius = r;
	cout << "생성자 실행 radius = " << radius << endl;
}

Circle::~Circle() {
	radius = 1;
	cout << "소멸자 실행 radius = " << radius << endl;
}

int main() {
	Circle *circleArray = new Circle[3]; 	// Circle 객체 배열 동적 생성, default 생성자 호출

	circleArray[0].setRadius(10); 								circleArray[1].setRadius(20);
	circleArray[2].setRadius(30);

	for (int i = 0; i<3; i++) // 배열의 각 원소 객체의 멤버 접근
		cout << "Circle " << i << "의 면적은 " << circleArray[i].getArea() << endl;

	Circle *p = circleArray;      // 포인터 p에 배열의 주소값 설정
	for (int i = 0; i<3; i++) { 	// 객체 포인터로 배열 접근 
		cout << "Circle " << i << "의 면적은 " << p->getArea() << endl;
		p++;
	}
	delete[] circleArray;  //객체 배열 반환
	char c = getchar();
	c = getchar();
}
*/