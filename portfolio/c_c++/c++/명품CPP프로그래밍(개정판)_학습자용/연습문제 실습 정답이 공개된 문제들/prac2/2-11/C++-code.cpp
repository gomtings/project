#include <iostream>
using namespace std;

int main() {
	int n=0;
	cout << "�� ���� �Է��ϼ���>>";
	cin >> n;
	if(n <= 0) {
		cout << "����� �Է��ϼ���!" << endl;
		return 0;
	}
	int k, sum=0;
	for(k=1; k<=n; k++) {
		sum += k;
	}
	cout << "1���� " << n << "������ ���� " << sum << "�Դϴ�." << endl;
	return 0;
}