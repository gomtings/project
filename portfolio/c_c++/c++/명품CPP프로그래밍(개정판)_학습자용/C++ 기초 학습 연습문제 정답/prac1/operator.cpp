#include <iostream>
using namespace std;

int main() {
	int a=10, b=20;
	b=++a; // (1)
	cout << "(1) a=" << a << ", b=" << b << "\n";

	a=10, b=20;
	a=(a>b)?3:-3; // (2)
	cout << "(2) a=" << a << ", b=" << b << "\n";

	a=10, b=20;
	a=a+b%3+4; // (3)
	cout << "(3) a=" << a << ", b=" << b << "\n";
 
	a=10, b=20;
	b >>= 2; // (4)
	cout << "(4) a=" << a << ", b=" << b << "\n";
}