#include <iostream>
using namespace std;

int g=20; /* ���� ���� */

int add(int x, int y) { // ���� �Լ�
	return x + y; // x�� y�� �� ����
}

int main() {
	int a, b, sum; // ���� ����

	cout << "�� ������ �Է��ϼ��� >>"; // ������Ʈ ���
	cin >> a >> b; // �� ������ �о� a�� b�� �Է�
	sum = a + b;
	cout << "���� " << sum << "\n"; // sum �� ���
	cout << "���� " << add(a, b) << "\n"; // add() �Լ� ȣ�� ��� ���
	cout << "���� ���� g ���� " << g; // g �� ���

	return 0; // return ���� �����ϸ� �ڵ����� return 0;�� ���Եȴ�.
}