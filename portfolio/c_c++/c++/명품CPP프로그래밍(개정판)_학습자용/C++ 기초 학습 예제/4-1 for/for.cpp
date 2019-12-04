#include <iostream>
using namespace std;

int main() {
	int i, a, b, sum=0;
	cout << "두 개의 정수 입력>>";
	cin >> a >> b;

	for(i=a; i<=b; i++) { // a에서 b까지 합 계산
		sum += i;
	}
	cout << a << "에서 " << b << "까지 합은 " << sum;
}