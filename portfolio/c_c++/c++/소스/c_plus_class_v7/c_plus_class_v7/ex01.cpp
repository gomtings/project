#include<iostream>
using namespace std;
// 1. add() �Լ��� �ߺ��ۼ� �ϰ� ���α׷��� �ϼ� �϶�.

int add(int x[] , int b) {
	int re = 0;
	for (int i = 0; i < b; i++) {
		re = re+ x[i];
	}
	return re ;
}
int add(int x[], int b, int y[]) {
	int re = 0;
	for (int i = 0; i < b; i++) {
		re =re+ x[i];
	}
	for (int i = 0; i <b; i++) {
		re =re+ y[i];
	}
	return re ;
}

//2.����Ʈ �Ű������� ���� �ϳ��� add() �Լ��� �ۼ��ϰ� ���α׷��� �ϼ��϶�.
/*
int add(int x[], int b, int y[] =NULL) {
	int re = 0;
	for (int i = 0; i < b; i++) {
		re += x[i];
	}
	if (y != NULL) {
		for (int i = 0; i < b; i++) {
			re += y[i];
		}
	}
	return re ;
}
*/
/*
int main() {
	int a[] = { 1,2,3,4,5,6 };
	int b[] = { 6,7,8,9,10 };
	int c = add(a, 5);
	int d = add(a, 5, b);
	cout << c << endl;
	cout << d << endl;
	char ch = getchar();
}*/