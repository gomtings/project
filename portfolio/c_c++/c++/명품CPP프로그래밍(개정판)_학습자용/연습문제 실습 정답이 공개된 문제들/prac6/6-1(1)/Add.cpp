#include <iostream>
using namespace std;

int add(int x[], int size) {
	int s = 0;
	for(int i=0; i<size; i++)
		s += x[i];

	return s;
}

int add(int x[], int size, int y[]) {
	return add(x, size) + add(y, size);
}

int main() {
	int a[] = {1,2,3,4,5};
	int b[] = {6,7,8,9,10};
	int c = add(a, 5); // �迭 a�� ������ ��� ���� �� ����
	int d = add(a, 5, b); // �迭 a�� b�� ������ ��� ���� �� ����
	cout << c << endl; // 10 ��� 
	cout << d << endl; // 55 ���
}