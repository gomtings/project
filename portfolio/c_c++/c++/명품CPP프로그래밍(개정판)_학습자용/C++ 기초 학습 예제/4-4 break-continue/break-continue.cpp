#include <iostream>
using namespace std;

int main() {
	int a;
	while(true) {
		cout << "정수 입력>>";
		cin >> a;
		if(a == 0) 
			break; // 0이 입력되면 while 문을 벗어남
		if(a%3 != 0) { 
			cout << "No" << "\n";
			continue; // 다음 반복. while 문으로 분기
		}
		cout << "Yes" << "\n"; // 입력된 3의 배수 출력
	}
}