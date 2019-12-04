#include <iostream>

using namespace std;

template <class T>
bool equalArrays(T a[], T b[], int size) {
	for (int i = 0; i < size; i++)
		if (a[i] != b[i]) return false;
	return true;
}
/*
int main() {
	int x[] = { 1, 10, 100, 5, 4 };// x 배열
	int y[] = { 1, 10, 100, 5, 4 };// y 배열

	if (equalArrays(x, y, 5)) cout << "같다" << endl;
	else cout << "다르다" << endl;

	char ch;
	ch = getchar();
}*/
