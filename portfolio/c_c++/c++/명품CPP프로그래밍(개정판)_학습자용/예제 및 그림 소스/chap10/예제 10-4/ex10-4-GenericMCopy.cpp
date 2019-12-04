#include <iostream>
using namespace std;

// �� ���� ���׸� Ÿ�� T1, T2�� ������ copy()�� ���ø�
template <class T1, class T2> 
void mcopy(T1 src [], T2 dest [], int n) { // src[]�� n�� ���Ҹ� dest[]�� �����ϴ� �Լ�
	for(int i=0; i<n; i++) 
		dest[i] = (T2)src[i]; // T1 Ÿ���� ���� T2 Ÿ������ ��ȯ�Ѵ�.
}

int main() {
	int x[] = {1,2,3,4,5};
	double d[5];
	char c[5] = {'H', 'e', 'l', 'l', 'o'}, e[5];

	mcopy(x, d, 5); // int x[]�� ���� 5���� double d[]�� ���� 
	mcopy(c, e, 5); // char c[]�� ���� 5���� char e[]�� ����

	for(int i=0; i<5; i++) cout << d[i] << ' '; // d[] ���
	cout << endl;
	for(int i=0; i<5; i++) cout << e[i] << ' '; // e[] ���
	cout << endl;	
}