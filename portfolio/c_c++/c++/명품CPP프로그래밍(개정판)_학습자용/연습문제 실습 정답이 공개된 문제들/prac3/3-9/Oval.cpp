#include <iostream>
using namespace std;

// Oval Ŭ���� �����
class Oval {
	int width, height;
public:
	Oval();
	Oval(int w, int h);
	~Oval();
	int getWidth();
	int getHeight();
	void set(int w, int h);
	void show();
};

// Oval Ŭ���� ������
Oval::Oval() { // �� �����ڴ� �� �ٷ� �ۼ� ����. Oval::Oval() : Oval(1) { }
	width = height = 1;
}
Oval::Oval(int w, int h) {
	width = w; height = h;
}
Oval::~Oval() {
	cout << "Oval �Ҹ� : ";
	show();
}
void Oval::set(int w, int h) {
	width = w; height = h;
}
void Oval::show() {
	cout << "width = " << width << ", " << "height = " << height << endl;
}
int Oval::getWidth() {
	return width;
}
int Oval::getHeight() {
	return height;
}

// main() �Լ�
int main() {
	Oval a, b(3, 4);
	a.set(10, 20);
	a.show();
	cout << b.getWidth() << ", " << b.getHeight() << endl;
}