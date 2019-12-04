#include<iostream>
#include<string>
#include<cstring>
#include<cstdlib>
#include<ctime>
/*
using namespace std;
int main() {
	string str;
	while (1) {
		cout << "아래에 한 줄을 입력하세요.(exit 를 입력하면 종료 합니다.)" << endl;
		getline(cin, str);
		if (str == "exit" || str == "EXIT") {
        break;
		}
		else {
        srand((unsigned)time(0));
		int x = rand() %str.length(), y = rand() % str.length();
		str.replace(x,1,str.substr(y,1));
		cout << str<<endl;
		}
	}
}*/