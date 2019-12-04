#include <iostream>
#include <cstdlib>
#include <ctime> 

using namespace std;

// ������ ������ �����ϰ� �����ϴ� Ŭ����
class Random {
public:
	Random(); // ������. ���� seed�� �����Ѵ�.
	int next(); // ���� ������ �����Ѵ�.
	int nextInRange(int low, int high); // low�� high ������ ���� ������ �����Ѵ�.
};

Random::Random() {
	srand((unsigned)time(0)); // ������ seed�� �����Ͽ� �� ������ �ٸ� ���� ���� ������ �Ѵ�.
}

int Random::next() {
	return rand(); // 0���� RAND_MAX ������ ������ ���� ����
}

int Random::nextInRange(int low, int high) {
    int range=(high-low)+1;
    return low + (rand() % range); // low�� high ������ ���� ������ �����Ѵ�. 
}

int main() {
	Random r;
	cout << "-- 0���� " << RAND_MAX << "������ ���� ���� 10 ��--" << endl;
	for(int i=0; i<10; i++) {
		int n = r.next(); // 0���� RAND_MAX(32767) ������ ������ ����
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2���� " << "4 ������ ���� ���� 10 �� --" << endl;
	for(int i=0; i<10; i++) {
		int n = r.nextInRange(2, 4); // 2���� 4 ������ ������ ����
		cout << n << ' ';
	}
	cout << endl;
}