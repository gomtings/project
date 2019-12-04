/*
#include <iostream>
#include <cstring>
#pragma warning (disable:4996)  //strcpy ���� ������ ������ �ϴ� ���� �����ֵ��� �ϰ���.
///error C4996: 'strcpy': This function or variable may be unsafe. Consider using strcpy_s instead.
///To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.
using namespace std;
class Book {
	char *title; // ����
	int price; // ����
public:
	Book(const char* t, int p);
	Book(Book& b); // ���� 3�� ��. ���� ���� ���� ������ �ۼ�
	~Book();
	void set(const char* t, int p);
	void show() { cout << title << ' ' << price << "��" << endl; }
};
// 1�� ���� 
Book::Book(const char*t, int p) {// ���� 1�� �� (Book class �� ������)
	int length = strlen(t); // t �� ���̸� length �� ���� (������ ����) 
	this->title = new char[length + 1];//length +1 ��ŭ�� ���ο� �迭 ����(�޸� �Ҵ�)
	strcpy(this->title, t);//this->title �� t �� ���� �Ѵ�.
	this->price = p; // price �� p �� ����
}
Book::~Book() { // ���� 1�� ��(Book �� �Ҹ���)
	if (title)
		delete[] title;
}
void Book::set(const char* t, int p) { // ���� 1�� �� (set �Լ�)
	if (this->title) 
		delete[] this->title; // title�� �Ҵ�� �޸� ��ȯ
	int length = strlen(t); // t �� ���̸� length �� ���� (������ ����)
	this->title = new char[length + 1]; //length +1 ��ŭ�� ���ο� �迭 ����(�޸� �Ҵ�)
	strcpy(this->title, t);//this->title �� t �� ���� �Ѵ�.
	this->price = p;// price �� p �� ����  
}
// 1�� ���� end 

//  ���� 2�� �� (����Ʈ ���� ������)
/*
Book::Book(Book& book) 
	title = book.title;
	price = book.price;
}
// ���� 3�� ��( ���� ���� ���� )
Book::Book(Book& book) { 
	int length = strlen(book.title); //title �� ���̸� length �� ����(������ ����)
	title = new char[length + 1];//length +1 ��ŭ�� ���ο� �迭 ����(�޸� �Ҵ�)
	strcpy(title, book.title);// book.title �� title �� ���� �Ѵ�.
	price = book.price; // price ��  �Ű������� ���� book ��ü�� price ���� 
}
int main() {
	Book cpp("��ǰC++", 10000);
	Book java = cpp;
	java.set("��ǰ�ڹ�", 12000);
	cpp.show();
	java.show();

	char c = getchar();
}*/
/*
// ���� 4�� ���� 
#include <iostream>
#include <string>

using namespace std;

class Book {
	string title; // ����
	int price; // ����
public:
	Book(string t, int p);
	~Book();
	void set(string t, int p);
	void show() { 
	cout << title << ' ' << price << "��" << endl;
	}
};

Book::Book(string t, int p) { // ���� 4�� �� (Book class ������)
	this->title = t; // ���� �ʵ�(title)�� �Ű������� ���� t ���� 
	this->price = p; // ���� �ʵ�(price)�� �Ű������� ���� p ����
}

Book::~Book() {} // ���� 4�� �� (Book class �Ҹ���)

void Book::set(string t, int p) { // ���� 4�� �� (set �Լ�)
	this->title = t;// ���� �ʵ�(title)�� �Ű������� ���� t ���� 
	this->price = p;// ���� �ʵ�(price)�� �Ű������� ���� p ����
}

int main() {
	Book cpp("��ǰC++", 10000);
	Book java = cpp;
	java.set("��ǰ�ڹ�", 12000);
	cpp.show();
	java.show();

	char c = getchar();
}*/