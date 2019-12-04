#include <iostream>
using namespace std;

void swapArray(int *p, int *q, int size); // p, q는 배열을 가리키고, size는 배열의 크기
void printArray(int *p, int size); // p는 배열을 가리키고, size는 배열의 크기

int main() {
	int a[] = { 1,2,3,4,5 };
	int b[] = { 9,8,7,6,5 };

	cout << "배열 a = ";
	printArray(a, 5);
	
	cout << "배열 b = ";
	printArray(b, 5);

	cout << "swapArray() 실행...\n";
	swapArray(a, b, 5);
	cout << "배열 a = ";
	printArray(a, 5);
	
	cout << "배열 b = ";
	printArray(b, 5);
}

void swapArray(int *p, int *q, int size) {
	for(int i=0; i<size; i++) {
		int tmp = *p;
		*p = *q;
		*q = tmp;
		p++; // 배열 a의 다음 원소의 주소로 증가
		q++; // 베열 b의 다음 원소의 주소로 증가
	}
}

void printArray(int *p, int size) {
	for(int i=0; i<size; i++)
		cout << p[i] << ' ';
	cout << "\n";
}