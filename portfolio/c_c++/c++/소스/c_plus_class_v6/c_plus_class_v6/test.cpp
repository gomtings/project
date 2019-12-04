#include <iostream>
using namespace std;
class myclass {
	int size;
	int *element;
public:
	myclass(int size) {
		this->size = size;
		element = new int[size];
		for (int i = 0; i < size; i++)
			element[i] = 0;
	}
	int getele() {
		return *element;
	}
};

int main() {
	myclass a(5), b(5);
	a = b;
	cout <<a.getele();
	cout << b.getele();
	char c = getchar();
}