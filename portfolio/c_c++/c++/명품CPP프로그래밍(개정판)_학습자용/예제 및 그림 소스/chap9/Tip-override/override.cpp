#include <iostream>
using namespace std;

class Shape {
public:
	virtual void draw(){
		cout << "shape";
	}
};

class Rect : public Shape {
public:
	void draw() override { // override�� draw()�� Shape�� ���� �Լ��� �������̵��ϰ� �ִ��� Ȯ���϶�� ����
		cout << "rect";
	}
	// �Ʒ� �ڵ�� ���� �ϸ�, �����Ϸ��� Shape Ŭ������ �����Լ��� �����
	// drow() �Լ��� ã�� �� ���� ������ ������ �߻���Ų��.
	/* void drow()  override { 
		cout << "rect";
	} */
};

int main() {
	Rect r;
	r.draw();
}