#include <iostream>
using namespace std;

int main() {
	int ch;
	cin.ignore(100, ';'); // ���� ������ �ִ� 99���� ���ڷ� �Էµȴٰ� �����Ѵ�.
	while((ch=cin.get()) != EOF) {
		cout << (char)ch;
		if(ch == '\n') {
			cin.ignore(100, ';'); // ���� ������ �ִ� 99���� ���ڷ� �Էµȴٰ� �����Ѵ�.
		}
	}
}