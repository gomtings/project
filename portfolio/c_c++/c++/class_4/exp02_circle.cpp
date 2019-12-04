#include <iostream>
#include <cstring>

using namespace std;

class Circle {
	int radius;

public:
	void setRadius(int r) {
		radius = r;
	}
	double getArea() {
		return 3.14 * radius*radius;
	}
};

int main() {
	int n, m;

	cout << "���� ���� >> ";
	cin >> n;
	Circle *p = new Circle[n];

	for (int i = 0; i < n; i++) {
		cout << "��" << i + 1 << "�� ������ >> ";
		cin >> m;
		p[i].setRadius(m);
	}
	int count = 0;
	for (int j = 0; j < n; j++) {
		if (p[j].getArea() > 100) {
			count++;
		}
	}
	cout << "������ 100���� ū ����" << count <<
		"�� �Դϴ�." << endl;
	delete[] p;

	char ch;

	ch = getchar();
	ch = getchar();
}