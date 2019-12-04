#include <iostream>
using namespace std;

void showWidth() {
	cout.width(10); // ������ ��µǴ� "Hello"�� 10 ĭ���� ����
	cout << "Hello" << endl;
	cout.width(5); // ������ ��µǴ� ���� 12�� 5 ĭ���� ����
	cout << 12 << endl;

	cout << '%';
	cout.width(10); // ������ ��µǴ� "Korea/"�� 10 ĭ���� ����
	cout << "Korea/" << "Seoul/" << "City" <<endl;
}

int main() {
	showWidth(); // width() ��� ���
	cout << endl;

	cout.fill('^'); // fill()�� ������ �� width()�� ��ʸ� �����ش�.
	showWidth();
	cout << endl;

	cout.precision(5); // precision() ��� ��
	cout << 11./3. << endl;
}