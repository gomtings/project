#include <iostream>
using namespace std;

extern "C" int get();

int main() {
	int n = get();
	int m = get();
	cout << "���� " << n * m << "�Դϴ�" << endl;
}