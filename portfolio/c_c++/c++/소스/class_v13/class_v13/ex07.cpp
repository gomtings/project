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
	fin.open("system.ini", ios::in | ios::binary); // 읽기 모드로 파일 열기
	fout.open("system.txt", ios::out | ios::binary);
	if (!fin) { // 열기 실패 검사
		cout << "system.ini 파일을 찾을수 없습니다." << endl;
		cs = getchar();
		return 0;
	}else if (!fout) { // 열기 실패 검사
		cout << "system.txt 파일을 열 수 없습니다" << endl;
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