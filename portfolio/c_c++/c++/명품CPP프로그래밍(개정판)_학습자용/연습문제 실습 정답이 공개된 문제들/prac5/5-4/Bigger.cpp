#include <iostream>
using namespace std;

bool bigger(int a, int b, int& big) {
	if(a == b) return true;
	if(a>b) big = a;
	else big = b;
	return false;
}

int main() {
	int x, y, big;
	bool b;
	cout << "�� ������ �Է��ϼ���>> ";
	cin >> x >> y;
	b = bigger(x, y, big);
	if(b)
		cout << "same" << endl;
	else
		cout << "ū ���� " << big << endl;
}