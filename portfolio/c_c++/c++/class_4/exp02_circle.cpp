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

	cout << "원의 개수 >> ";
	cin >> n;
	Circle *p = new Circle[n];

	for (int i = 0; i < n; i++) {
		cout << "원" << i + 1 << "의 반지름 >> ";
		cin >> m;
		p[i].setRadius(m);
	}
	int count = 0;
	for (int j = 0; j < n; j++) {
		if (p[j].getArea() > 100) {
			count++;
		}
	}
	cout << "면적이 100보다 큰 원은" << count <<
		"개 입니다." << endl;
	delete[] p;

	char ch;

	ch = getchar();
	ch = getchar();
}