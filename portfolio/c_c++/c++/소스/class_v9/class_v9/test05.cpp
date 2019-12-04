#include <iostream>
using namespace std;
class Base {
public :
	void func() {
		f();
	}
	void f() {
		cout << "Base::f() called" << endl;
	}
};
class Derived : public Base {
public:
	void f() {
		cout << "Derived::f() called" << endl;
	}
};
/*
int main() {
	Derived der;
	der.f();
	char c = getchar();
}*/