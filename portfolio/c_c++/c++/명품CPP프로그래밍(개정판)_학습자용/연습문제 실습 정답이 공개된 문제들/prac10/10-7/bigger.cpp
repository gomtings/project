#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle(int radius=1) { this->radius = radius; }
	int getRadius() { return radius;}
};

template <class T>
T bigger(T a, T b) { // �� ���� �Ű� ������ ���Ͽ� ū ���� ����
	if(a > b) return a; 
	else return b;
}


/* ������ �����ϱ� ���� �ۼ��� bigger() �Լ�
	�� �Լ��� ����Ǿ� ���� ������,
	bigger ���ø� �ڵ忡�� ������ �߻��Ѵ�.		
*/
Circle bigger(Circle a, Circle b) {
	if(a.getRadius() > b.getRadius()) return a;
	else return b;
}

int main() {
	int a=20, b=50, c;
	c = bigger(a, b);
	cout << "20�� 50�� ū ���� " << c << endl;
	Circle waffle(10), pizza(20), y;
	y = bigger(waffle, pizza);
	cout << "waffle�� pizza �� ū ���� �������� " << y.getRadius() << endl;
}

/* �־��� ������ ������ main() �Լ��� ���� ���ο��� ��Եȴ�.
	y = bigger(waffle, pizza);

	�� ȣ���� ����, bigger ���ø��� Circle Ÿ������ ��üȭ�ϸ� ������ ���� �ȴ�.
	Circle bigger(Circle a, Circle b) {
		if(a > b) return a; 
		else return b;
	}

	�׷����� �� �ڵ忡�� if(a > b)���� ������ > �� �ۼ� �Ǿ� ���� �ʱ� ������,
	������ ������ �߻��Ѵ�.
	�� ������ �ذ��ϱ� ����, �� ���信���� Circle bigger(Circle a, Circle b);�� �Լ���
	���� �ߺ� �ۼ��Ѵ�.
*/