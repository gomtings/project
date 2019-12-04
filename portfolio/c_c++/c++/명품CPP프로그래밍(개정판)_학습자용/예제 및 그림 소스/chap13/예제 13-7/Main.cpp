#include <iostream>
using namespace std;

#include "MyStack.h"

int main() {
	MyStack intStack;
	try {
		intStack.push(100); // 100 Ǫ��
		intStack.push(200); // 200 Ǫ��
		cout << intStack.pop() << endl; // �� 200
		cout << intStack.pop() << endl; // �� 100
		cout << intStack.pop() << endl; // "Stack Empty" ���� �߻�
	}
	catch(const char* s) {
		cout << "���� �߻� : " << s << endl;
	}
}