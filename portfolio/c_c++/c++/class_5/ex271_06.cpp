#include<iostream>
#include<string>
#include<cstring>
using namespace std;
char& find(char a[], char c, bool& success);
int main() {
	char s[] = "Mike";
	bool b = false;
	char& loc = find(s, 'M', b);
	if (b == false) {
		cout << "M�� �߰��� �� ����" << endl;
		return 0;
	}
	loc = 'm';
	cout << s << endl;
	char che = getchar();
}
char& find(char a[], char c, bool& success) {
	for (int i = 0; i < sizeof(a)/sizeof(a[0]); i++) {
        if (a[i] == c) {
			success = true;
			return a[i];
		}else {
			success = false;
		}
	}	
	return *a;
}
