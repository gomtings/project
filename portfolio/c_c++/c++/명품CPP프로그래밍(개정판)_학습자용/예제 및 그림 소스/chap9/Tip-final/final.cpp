#include <iostream>
using namespace std;

// 1. �������̵��� �����ϴ� final ��� ���
class Shape1 {
public:
	virtual void draw() final { // draw()�� �������̵� ���� ����
		cout << "shape";
	}
};

class Rect1 : public Shape1 {
public:
	void draw() { // Shape�� draw()�� �������̵��� �� ���� ������ ���� ����
		cout << "rect";
	}
};

// 2. Ŭ������ ����� �����ϴ� final ��� ���
class Shape2 final { // Shape2�� ��� ���� ����

};

class Rect2 : public Shape2 { // ��ӹ��� �� ���� Shape2�� ��ӹ������� �Ͽ� ������ ����

};

// 3. Ŭ������ ����� �����ϴ� final ��� ���
class Shape3 { 

};

class Rect2 final : public Shape3 { // Rect2�� ��� ���� ����

};

class RoundRect : public Rect2 { // Rect2�� ��ӹ������� �Ͽ� ������ ����

};
int main() {
}