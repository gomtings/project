#include <iostream>
using namespace std;

int main() {
	int *p;

	p = new int; 
	if(!p) { 
		cout << "�޸𸮸� �Ҵ��� �� �����ϴ�.";
		return 0;
	}

	*p = 5; // �Ҵ� ���� ���� ������ 5 ����
	int n = *p;
	cout << "*p = " << *p << endl;
	cout << "n = " << n << endl;

	delete p; 
}