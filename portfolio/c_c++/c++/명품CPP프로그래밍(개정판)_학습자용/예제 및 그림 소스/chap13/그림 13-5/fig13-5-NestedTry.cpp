#include <iostream>
using namespace std;

int main() {
	int x = 3;
	try {
		if(x < 0)
			throw 3; // catch(int outer) { } ��Ͽ��� ó��
		try {
			//throw 5; // catch(int inner) { } ��Ͽ��� ó��
			throw "abc";
		}
		catch(int inner) {
			cout << inner; // 5 ���
		}	
	}
	catch(const char* s) { 
		cout << s; 
	}
	catch(int outer) { 
		cout << outer; // 3 ���
	}
}