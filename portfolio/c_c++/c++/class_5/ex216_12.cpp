#include<iostream>
#include<string>
#include<cstring>
using namespace std;
/*
class Circle {
	int radius;
	string name;
public:
	void setCircle(string name, int radius);
	double getArea();
	string getName();
};
class CircleManager {
	Circle *p;
	int size;
public:
	CircleManager(int size);
	~CircleManager();
	void searchByname();
	void searchByArea();
};
void Circle::setCircle(string name, int radius) {
	this->name = name;
	this->radius = radius;
}
double Circle::getArea() {
	return (3.14*radius*radius);
}
string Circle::getName(){
	return name;
}
CircleManager::CircleManager(int size) {
	string n;
	int r;
	this->size = size;
	p = new Circle[size];
	for (int i = 0; i < size; i++) {
		cout << "원 " << i + 1 << "의 이름과 반지름 >> ";
		cin >> n >> r;
		p[i].setCircle(n, r);
	}
}
CircleManager::~CircleManager() {
	delete[] p;
}
void CircleManager::searchByname() {
	string n;
	cout << "\n검색하고자 하는 원의 이름 >> ";
	cin >> n;
	for (int i = 0; i < size; i++) {
		if (n == p[i].getName()) {
			cout << n<<"의 면적은 "<< p[i].getArea();
		}else {}
	}
}
void CircleManager::searchByArea() {
	int r;
	cout << "\n최소 면적을 정수로 입력하세요 >> ";
	cin >> r;
	for (int i = 0; i < size; i++) {
		if (p[i].getArea() > r) {
			cout << p[i].getName() << "의 면적은" << p[i].getArea() << ", ";
		}else{  }	
	}
}
int main() {
	int s;
	string n;
	cout << "원의 개수 >> ";
	cin >> s;
	CircleManager cm(s);
	cm.searchByname();
	cm.searchByArea();
	char che = getchar();
	che = getchar();
}*/