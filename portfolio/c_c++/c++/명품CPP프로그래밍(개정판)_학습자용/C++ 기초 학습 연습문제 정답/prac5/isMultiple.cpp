#include <iostream>
using namespace std;

bool isMultiple(int a, int b); // (1) 함수의 원형 선언

int main() { // (3) 함수 호출을 포함한 전체 코드
	int a, b;
	cout << "두 정수 입력>>";
	cin >> a >> b;

	if(isMultiple(a, b)) // isMultiple() 함수 호출
		cout << "Yes";
	else
		cout << "No";
}

bool isMultiple(int a, int b) { // (2) 함수 작성
	if(b%a == 0) // b는 a의 배수
		return true;
	else
		return false;
}