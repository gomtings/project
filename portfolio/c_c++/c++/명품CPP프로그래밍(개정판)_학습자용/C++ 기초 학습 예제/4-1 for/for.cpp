#include <iostream>
using namespace std;

int main() {
	int i, a, b, sum=0;
	cout << "�� ���� ���� �Է�>>";
	cin >> a >> b;

	for(i=a; i<=b; i++) { // a���� b���� �� ���
		sum += i;
	}
	cout << a << "���� " << b << "���� ���� " << sum;
}