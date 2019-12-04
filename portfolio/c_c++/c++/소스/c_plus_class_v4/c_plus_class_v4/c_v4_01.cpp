#include <iostream>
using namespace std;
/*
int main() {
	cout << "입력할 정수의 개수는 ? ";
	int n;
	cin >> n;
	if (n <= 0) return 0;
	int *p = new int[n];  //n개의 정수 배열 동적 할당
	if (!p) {
		cout << "메모리 할당 불가";
			return 0;
	}
	for (int i = 0; i<n; i++) {
		cout << i + 1 << " 번째 정수 : ";
		cin >> p[i];
	}
	int sum = 0;
	for (int i = 0; i<n; i++)
		sum += p[i];
	cout << "평균 :" << sum / n << endl;

	delete[] p;  //배열 메모리 반환
	char c = getchar();
	c = getchar();
}
*/