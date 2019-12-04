#include <iostream>
#include <string>
using namespace std;

void half(double &n) {
	n = n / 2;
}
int main() {
	double n = 20;
	half(n); // n의 반값을 구해 n을 바꾼다.
	cout << n; // 10이 출력된다.
}