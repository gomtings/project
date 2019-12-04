#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Book {
	string title; // å �̸�
	string author; // ����
	int year;
public:
	Book() {};
	Book(string title, string author, int year) { 
		this->title = title;
		this->author = author;
		this->year = year;
	}
	void set(string title, string author, int year) { 
		this->title = title;
		this->author = author;
		this->year = year;
	}
	string getAuthor() { return author; }
	int getYear() { return year; }
	void show();
};

void Book::show() {
	cout << year << "�⵵, " << title << ", " << author << endl;
}

class BookManager {
	vector<Book> v;
	void searchByAuthor();
	void searchByYear();
	void bookIn();
public:
	void run();
};

void BookManager::searchByAuthor() {
	cout << "�˻��ϰ��� �ϴ� ���� �̸��� �Է��ϼ���>>";
	string author;
	getline(cin, author);
	for(int i=0; i<v.size(); i++) {
		Book b = v[i];
		if(b.getAuthor() == author) 
			b.show();
	}
}

void BookManager::searchByYear() {
	cout << "�˻��ϰ��� �ϴ� �⵵�� �Է��ϼ���>>";
	int year;
	cin >> year; cin.ignore();
	for(int i=0; i<v.size(); i++) {
		Book b = v[i];
		if(b.getYear() == year) 
			b.show();
	}
}

void BookManager::bookIn() {
	string title, author;
	int year;
	Book b;
	cout << "�԰��� å�� �Է��ϼ���. �⵵�� -1�� �Է��ϸ� �԰� �����մϴ�." << endl;
	while(true) {
		cout << "�⵵>>";
		cin >> year; cin.ignore(); // '\n' Ű�� Ű ���ۿ��� ���� �Ѵ�.
		if(year == -1)
			break;
		cout << "å�̸�>>";
		getline(cin, title);
		cout << "����>>";
		getline(cin, author);
		b.set(title, author, year);
		v.push_back(b); // ���Ϳ� å �ѱ� ����
	}
	cout << "�� �԰�� å�� " << v.size() << "���Դϴ�." << endl;
}

void BookManager::run() {
	bookIn(); // �԰�
	searchByAuthor(); // ���ڷ� �˻�
	searchByYear(); // �⵵�� �˻�
}

int main() {
	BookManager man;
	man.run();
}