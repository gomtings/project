#include <iostream>
using namespace std;

int main() {
	int a;
	cout << "���� �Է�>>";
	cin >> a;

	int i=0;
	do {
		int j=0;
		do {
			cout << '*';
			j++;
		} while(j<=a-i);

		cout << "\n";
		i++;
	} while(i<=a);
}