#include <iostream>
using namespace std;

class Person {
public:
	double money; // ���� ������ ��
	void addMoney(int money) {
		this->money += money;
	}

	static int sharedMoney; // ����
	static void addShared(int n) {
		sharedMoney += n;
	}
};

// static ������ ���� �Ҵ�
//int Person::sharedMoney=10;  // 10���� �ʱ�ȭ. �� �ڵ尡 ������ ��ũ ���� �߻�

// main() �Լ�
int main() {
	Person han;
	han.money = 100; // han�� ���� ��=100	
	han.sharedMoney = 200; // static ��� ����, ����=200

	Person lee;
	lee.money = 150; // lee�� ���� ��=150
	lee.addMoney(200); // lee�� ���� ��=350
	lee.addShared(200); // static ��� ����, ����=400

	cout << han.money << ' ' << lee.money << endl;
	cout << han.sharedMoney << ' ' << lee.sharedMoney
		<< endl;
}
