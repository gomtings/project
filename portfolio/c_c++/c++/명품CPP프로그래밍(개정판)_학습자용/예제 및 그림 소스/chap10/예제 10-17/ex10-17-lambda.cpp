#include <iostream>  
using namespace std;

int main() {
	double pi = 3.14; // ���� ����

	auto calc = [pi](int r) -> double { return pi*r*r; }; // �������� r�� �� ������ �����ϴ� ���� �Լ� �ۼ�

	cout << "������ " << calc(3); // ���ٽ� ȣ��. 28.26���
}