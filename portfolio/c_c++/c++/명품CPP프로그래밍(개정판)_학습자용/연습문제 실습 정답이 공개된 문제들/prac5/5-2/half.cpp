#include <iostream>
#include <string>
using namespace std;

void half(double &n) {
	n = n / 2;
}
int main() {
	double n = 20;
	half(n); // n�� �ݰ��� ���� n�� �ٲ۴�.
	cout << n; // 10�� ��µȴ�.
}