#include<iostream>
using namespace std;
void swaparray(int *a, int *b, int size);
void printarray(int *a, int size);

int main(void) {
	int size = 0;
	int a[]{ 1,2,3,4,5 };
	int b[]{ 6,7,8,9,0 };
	size = sizeof(a) / sizeof(a[0]);
	cout << "배열 A = ";
	for (int data : a) {
		cout <<data<<"\t";
	}
	cout << "\n배열 B = ";
	for (int data : b) {
		cout << data << "\t";
	}
	cout << "\nswaparray() 실행..... \n";
	swaparray(a, b, size);
	printarray(a, size);
	cout << "\n배열 B = ";
	for (int data : b) {
		cout << data << "\t";
	}
	char ch = getchar();
}
void swaparray(int *a, int *b, int size) {
	int c[5];
	for (int i = 0; i < size; i++) {
		c[i] = b[i];
		b[i] = a[i];
		a[i] = c[i];
	}
}

void printarray(int *a, int size) {
	cout << "배열 A = ";
	for (int data = 0; data < size; data++) {
	cout << *a <<"\t" ;
		a++;
	}
}