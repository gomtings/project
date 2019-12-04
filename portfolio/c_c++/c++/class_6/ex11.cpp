/*
#include <iostream>
#include <cstring>
#pragma warning (disable:4996)  //strcpy 보안 문제로 못쓰게 하는 것을 쓸수있도록 하게함.
///error C4996: 'strcpy': This function or variable may be unsafe. Consider using strcpy_s instead.
///To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.
using namespace std;
class Book {
	char *title; // 제목
	int price; // 가격
public:
	Book(const char* t, int p);
	Book(Book& b); // 문제 3번 답. 깊은 복사 복사 생성자 작성
	~Book();
	void set(const char* t, int p);
	void show() { cout << title << ' ' << price << "원" << endl; }
};
// 1번 문제 
Book::Book(const char*t, int p) {// 문제 1번 답 (Book class 의 생성자)
	int length = strlen(t); // t 의 길이를 length 에 저장 (정수형 변수) 
	this->title = new char[length + 1];//length +1 만큼의 새로운 배열 생성(메모리 할당)
	strcpy(this->title, t);//this->title 를 t 에 복사 한다.
	this->price = p; // price 에 p 를 저장
}
Book::~Book() { // 문제 1번 답(Book 의 소멸자)
	if (title)
		delete[] title;
}
void Book::set(const char* t, int p) { // 문제 1번 답 (set 함수)
	if (this->title) 
		delete[] this->title; // title에 할당된 메모리 반환
	int length = strlen(t); // t 의 길이를 length 에 저장 (정수형 변수)
	this->title = new char[length + 1]; //length +1 만큼의 새로운 배열 생성(메모리 할당)
	strcpy(this->title, t);//this->title 를 t 에 복사 한다.
	this->price = p;// price 에 p 를 저장  
}
// 1번 문제 end 

//  문제 2번 답 (디폴트 복사 생성자)
/*
Book::Book(Book& book) 
	title = book.title;
	price = book.price;
}
// 문제 3번 답( 깊은 복사 복사 )
Book::Book(Book& book) { 
	int length = strlen(book.title); //title 의 길이를 length 에 저장(정수형 변수)
	title = new char[length + 1];//length +1 만큼의 새로운 배열 생성(메모리 할당)
	strcpy(title, book.title);// book.title 를 title 에 복사 한다.
	price = book.price; // price 에  매개변수로 받은 book 객체의 price 저장 
}
int main() {
	Book cpp("명품C++", 10000);
	Book java = cpp;
	java.set("명품자바", 12000);
	cpp.show();
	java.show();

	char c = getchar();
}*/
/*
// 문제 4번 정답 
#include <iostream>
#include <string>

using namespace std;

class Book {
	string title; // 제목
	int price; // 가격
public:
	Book(string t, int p);
	~Book();
	void set(string t, int p);
	void show() { 
	cout << title << ' ' << price << "원" << endl;
	}
};

Book::Book(string t, int p) { // 문제 4번 답 (Book class 생성자)
	this->title = t; // 현재 필드(title)에 매개변수로 받은 t 저장 
	this->price = p; // 현재 필드(price)에 매개변수로 받은 p 저장
}

Book::~Book() {} // 문제 4번 답 (Book class 소멸자)

void Book::set(string t, int p) { // 문제 4번 답 (set 함수)
	this->title = t;// 현재 필드(title)에 매개변수로 받은 t 저장 
	this->price = p;// 현재 필드(price)에 매개변수로 받은 p 저장
}

int main() {
	Book cpp("명품C++", 10000);
	Book java = cpp;
	java.set("명품자바", 12000);
	cpp.show();
	java.show();

	char c = getchar();
}*/