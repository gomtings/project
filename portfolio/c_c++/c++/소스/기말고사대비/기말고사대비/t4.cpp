#include<iostream>
using namespace std;
/*
class Power {
	int kick, punch;
public:
	Power(int kick = 0, int punch = 0) { this->kick = kick; this->punch = punch; }
	void show();
	Power operator+ (Power &op2); // + 연산자 함수 선언, Power& op2 로 해도 됨
	  //참조 매개변수를 사용하면 원본 객체를 수정할 수 있기 때문에 주의해야 함
};
void Power::show() {
	cout << "kick=" << kick << ',' << "punch=" << punch << endl;
}
//+ 연산자 멤버 함수 구현
Power Power::operator+(Power &op2) {
	Power tmp; // 임시 객체 생성
	tmp.kick = this->kick + op2.kick; // kick 더하기
	tmp.punch = this->punch + op2.punch; // punch 더하기
	return tmp; // 더한 결과 리턴
}
int main() {
	Power pw(1,2),p;
	pw.show();
	pw = pw + pw;
	pw.show();
	char c = getchar();
	return 0;
}
*/