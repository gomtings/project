#include<iostream>
using namespace std;
class Oval {
	int width, height; // width, height 변수 맴버
public :
	Oval(int w, int h) { // 너비와 높이 값을 매개변수로 받는 생성자 
		width = w;
		height = h;
	}
	Oval() { // 너비와 높이 를 1로 초기화 하는 매개변수 없는 생성자 
		width = 1;
		height = 1;
	}
	~Oval() { // 소멸자 
		cout <<"~Oval 소멸자"<< " 너비" << width << endl;
		cout << "~Oval 소멸자" << "높이" << height << endl;
	}
	int getwidth(); // width 함수 원형
	int getheight(); // height 함수 원형
	void set(int w, int h); // set 함수 원형
	void show(); //show  함수 원형
};
int Oval::getwidth() { // width 함수 구현
	return width;
}
int Oval::getheight() { // height 함수 구현
	return height;
}
//Oval::~Oval() {
	//cout <<" 너비" <<width  << endl;
	//cout << "높이" << height << endl;
//}
void Oval::show() { //show 함수 구현  
	cout << "width : " << width << " " << "height : " << height << endl;
}
void Oval::set(int w, int h) { // set 함수 구현 
	width = w;
	height = h;
}
int main() { 
	Oval a;  //Oval 형 객체 a 생성자 매개변수 없는 것이 호출되어 1,1 로 width와 height 초기화
	Oval b(10, 20); //Oval 형 객체 b 10, 20 로 width와 height 초기화
	a.set(11, 22); //a의 height와 width 를 11, 22 으로 셋
	a.show(); //출력
	cout << b.getwidth() << "," << b.getheight() << endl; // 
	char c = getchar();
	return 0; // 함수 종료 
}