#include <iostream>
using namespace std;

int n=11; // ���� ����

int main() {
	int n=3; // ���� ����
	cout << ::n << endl; // ���� ���� n(11)�� ���
	cout << n << endl;  // ���� ���� n(3)�� ���
}