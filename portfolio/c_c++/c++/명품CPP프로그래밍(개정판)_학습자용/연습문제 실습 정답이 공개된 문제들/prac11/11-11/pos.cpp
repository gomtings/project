#include <iostream>
using namespace std;

istream& pos(istream& strm) {
	cout << "��ġ��? ";
	return strm;
}

int main() {
	int x, y;
	cin >> pos >> x;
	cin >> pos >> y;
	cout << x << ',' << y << endl;
}