#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
	char cs;
	long size;
	string str,temp="";
	ifstream fin;
	ofstream fout;
	fin.open("system.ini", ios::in | ios::binary); // �б� ���� ���� ����
	fout.open("system.txt", ios::out | ios::binary);
	if (!fin) { // ���� ���� �˻�
		cout << "system.ini ������ ã���� �����ϴ�." << endl;
		cs = getchar();
		return 0;
	}else if (!fout) { // ���� ���� �˻�
		cout << "system.txt ������ �� �� �����ϴ�" << endl;
		cs = getchar();
		return 0;
	}else {
		while ((cs=fin.get()) != EOF) {
			str =cs;
			cout << str;
		}cout << str;
		fout << str;
		for (int i =str.length(); i >= 0; i--) {
			//temp += str.at(i);
		}
	}
	cs = getchar();
	return 0;
}