#include <iostream>
using namespace std;

class ArrayUtility {
public:
	static void intToDouble(int source [], double dest [], int size); // int �迭�� double �迭�� ��ȯ
	static void doubleToInt(double source [], int dest [], int size); // double �迭�� int �迭�� ��ȯ
};

void ArrayUtility::intToDouble(int source [], double dest [], int size) {
	for(int i=0; i<size; i++)
		dest[i] = (double)source[i];
}

void ArrayUtility::doubleToInt(double source [], int dest [], int size) {
	for(int i=0; i<size; i++)
		dest[i] = (int)source[i];
}

int main() {
	int x[] = {1,2,3,4,5};
	double y[5];
	double z[] = {9.9, 8.8, 7.7, 6.6, 5.6};

	ArrayUtility::intToDouble(x, y, 5); // x[] -> y[]
	for(int i=0; i<5; i++) cout << y[i] << ' ';
	cout << endl;

	ArrayUtility::doubleToInt(z, x, 5); // z[] -> x[]
	for(int i=0; i<5; i++) cout << x[i] << ' ';
	cout << endl;
} 

/* �Ʒ��� �����
	���� �迭�� �Ǽ� �迭�� Ű�� �Է¹޾� ��ȯ�ϴ� �ڵ带 �����ش�.

int main() {
	int x[5];
	double y[5], z[5];

	cout << "������ 5 �� �Է��϶�. �迭�� �����Ѵ�>>";
	for(int i=0; i<5; i++) cin >> x[i];
	
	cout << "���� �迭�� double �迭�� �����ϰ� ����� ����Ѵ�->";	
	ArrayUtility::intToDouble(x, y, 5); // x[] -> y[]

	for(int i=0; i<5; i++) cout << y[i] << ' ';
	cout << endl;

	cout << "�Ǽ��� 5 �� �Է��϶�. �迭�� �����Ѵ�>>";
	for(int i=0; i<5; i++) cin >> z[i];

	cout << "�Ǽ� �迭�� int �迭�� �����ϰ� ����� ����Ѵ�->";	
	ArrayUtility::doubleToInt(z, x, 5); // z[] -> x[]
	
	for(int i=0; i<5; i++) cout << x[i] << ' ';
	cout << endl;
} 

*/
