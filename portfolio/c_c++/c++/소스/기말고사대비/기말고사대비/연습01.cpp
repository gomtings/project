#include<iostream>
using namespace std;
class tst {
	int a, b;
public:
	tst(int a=0,int b=0) {
		this->a = a;
		this->b = b;
	}
	void show() {
		cout << a << "-------" << b << endl;
	}
	tst operator + (tst t);
	tst& operator +=(tst t);
	bool operator == (tst t);
	void f() { cout << "tstttttttt\n"; }
};
class tsr :public tst{
public:
	void f() { cout << "tsrrrrrr\n"; }
};
tst tst::operator+(tst t) {
	tst temp;
	temp.a = this->a + t.a;
	temp.b = this->b + t.b;
	return temp;
}
bool tst::operator==(tst t) {
	if (a == t.a && b == t.b)
		return true;
	else
		return false;
}
tst&tst::operator +=(tst t) {
	a = a + t.a;
	b = b + t.b;
	return *this;
}

int main() {
	tst pw(1, 2), p;
	tsr t;
	pw.f();
	t.f();
	pw.show();
	p = pw + pw;
	p.show();
	if (pw == p)
		cout << "true";
	else
		cout << "false";
	pw += pw;
	pw.show();
	char c = getchar();
	return 0;
}