#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ifstream fin("c:\\windows\\system.ini");
	if(!fin) {
		cout <<"c:\\windows\\system.ini ���� ����";
		return 0;
	}

	ofstream fout("c:\\temp\\system.txt");
	if(!fout) {
		cout << "c:\\temp\\system.txt ���� ����";
		return 0;
	}
	cout << "�б� ����..." << endl;
	int ch;
	while((ch=fin.get()) != EOF) {
		ch = toupper(ch);
		cout << (char)ch;
		fout.put(ch);
	}

	cout << "���� ��" << endl;
	fin.close();
	fout.close();
}