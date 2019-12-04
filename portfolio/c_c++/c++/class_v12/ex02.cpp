#include <iostream>
#include <cstdlib>
#include <map>
#include <string>
using namespace std;
/*
int main() {
	map<string, string> pw;
	bool tf = true,tf_2=true; int menu, size = 0;
	string name, passwerd;
	cout << "***** 암호 관리 프로그램 WHO를 시작합니다. *****" << endl;
	while (tf) {
		cout << "삽입:1, 검사:2, 종료:3 >> "; cin >> menu;
		switch (menu) {
		case 1:
			cout << "이름 , 암호>> "; cin >> name>>passwerd;
			pw.insert(make_pair(name, passwerd));
			break;
		case 2:
			name = ""; passwerd = "";
				cout << "이름 ?  "; cin >> name; 
			while (true) {
				cout << "암호 ?  "; cin >> passwerd;
				if (pw[name] == passwerd) {
					cout << "통과 !!"<<endl;
					break;
				}
				else {
					cout << "실패~~"<<endl;
				}
			}
			break;
		case 3:
			tf = false;
			break;
		}
	}

	char c = getchar();
	return 0;
}*/