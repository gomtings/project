#include<iostream>
#include<string>
#include<cstring>

using namespace std;
class tt {
	int a;
	char *c;
public:
	tt() {}
	tt(tt &t) {
		if (c != NULL)
			delete c;
		int a = t.a;
		int len = strlen(t.c);
		c = new char[len + 1];
		strcpy(c,t.c);
	}
};
int main(){
	tt *c = new tt[3];
	c[0].

	char c[10];
	cin.getline(c,10);
	cout << c;
	char ca = getchar();
}