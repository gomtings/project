#include <iostream> 
using namespace std;
class Color {
	int red, green, blue;
public :
	Color() {
		red = green = blue = 0;
	}
	Color(int r ,int g ,int b) {
		red = r;
		green = g;
		blue = b;
	}
	void setcolor(int r, int g, int b) {
		red = r;
		green = g;
		blue = b;
	}
	void show() {
		cout << red << ' ' << green << ' ' << blue << endl;
	}
};
int main() {
	Color screenColor(255, 0, 0);
	Color *p;
	p = &screenColor;
	p->show();
	Color colors[3];
	p = colors;

	p->setcolor(255, 0, 0);
	(p + 1)->setcolor(0, 255, 0);
	(p + 2)->setcolor(0, 0, 255);
	for (int i = 0; i < 3; i++)
		(p + i)->show();

	char c = getchar();
	return 0;
}

