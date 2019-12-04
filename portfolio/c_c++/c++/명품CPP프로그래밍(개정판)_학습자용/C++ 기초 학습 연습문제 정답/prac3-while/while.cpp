#include <iostream>
using namespace std;

int main() {
	int a;
	cout << "정수 입력>>";
	cin >> a;

	int i=0;
	while(i<a) {
		int j=0;
		while(j<a-i) {
			cout << '*';
			j++;
		}
		cout << "\n";
		i++;
	}
}