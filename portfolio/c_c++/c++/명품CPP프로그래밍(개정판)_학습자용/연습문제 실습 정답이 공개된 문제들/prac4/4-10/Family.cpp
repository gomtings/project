#include <iostream>
#include <string>
using namespace std;

class Person {
	string name;
public:
	Person() { name=""; }
	Person(string name) { this->name = name; }
	string getName() { return name; }
	void setName(string name) { this->name = name; }
};

class Family {
	string name;
	Person* p; // Person �迭 ������
	int size; // Person �迭�� ũ��. ���� ������ ��
public:
	Family(string name, int size); // size ������ŭ Person �迭 ���� ����
	void setName(int index, string name);
	void show(); // ��� ���� ������ ���
	~Family();
};

Family::Family(string name, int size) {
	this->name = name;
	this->size = size;
	p = new Person [size];
}

Family::~Family() {
	delete [] p;
}

void Family::setName(int index, string name) {
	p[index].setName(name);
}

void Family::show() {
	cout << name + " ������ ������ ���� " << size << "�� �Դϴ�." << endl;
	for(int i=0; i<size; i++) {
		cout << p[i].getName() << '\t';
	}
	cout << endl;
}

int main() {
	Family *simpson = new Family("Simpson", 3); // 3������ ������ Simpson ����
	simpson->setName(0, "Mr. Simpson");
	simpson->setName(1, "Mrs. Simpson");
	simpson->setName(2, "Bart Simpson");
	simpson->show();
	delete simpson;
}