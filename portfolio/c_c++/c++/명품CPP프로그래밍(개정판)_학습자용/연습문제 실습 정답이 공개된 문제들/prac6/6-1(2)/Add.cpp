#include <iostream>
using namespace std;

int add(int x[], int size,  int y[] = NULL) { // NULL ��� nullptr�� �ϴ� ���� �ٶ�����
	int s = 0;
	for(int i=0; i<size; i++) // �迭 a�� ���� ���Ѵ�.
		s += x[i];
	if(y == NULL) // NULL ��� nullptr�� �ϴ� ���� �ٶ�����
		return s;

	for(int i=0; i<size; i++) // �迭 b�� ���Ѵ�.
		s += y[i];
	return s;
}

int main() {
	int a[] = {1,2,3,4,5};
	int b[] = {6,7,8,9,10};
	int c = add(a, 5); // �迭 a�� ������ ��� ���� �� ����
	int d = add(a, 5, b); // �迭 a�� b�� ������ ��� ���� �� ����
	cout << c << endl; // 15 ��� 
	cout << d << endl; // 55 ���
}