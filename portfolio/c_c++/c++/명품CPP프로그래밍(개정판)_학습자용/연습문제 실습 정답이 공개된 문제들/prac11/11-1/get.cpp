#include <iostream>
using namespace std;

int main() {
	int count = 0;
	int ch;
	while((ch=cin.get()) != EOF) {
		if(ch == 'a') 
			count++;
		else if(ch == '\n')
			break;
	}
	cout << "a ���ڴ� �� " << count << "�� �Դϴ�." << endl;
}